    using System;
    using System.Collections;
 using System.Collections.Generic;
    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.Video;
    using ZXing;


    public class ReadQRCode : MonoBehaviour
    {
        public Camera ARCamera;
        public Camera QRCamera;
        public Text txt;
        private bool grabQR;
        public int ResultInt=0;




        public void OnPreRender()
        {
        QRCamera.projectionMatrix = ARCamera.projectionMatrix;
        QRCamera.fieldOfView = ARCamera.fieldOfView;
        QRCamera.transform.localPosition = Vector3.zero;
        QRCamera.transform.localRotation = Quaternion.Euler(Vector3.zero);
        }
            public void Start(){
                txt = GameObject.Find("qrText").GetComponent<Text>();  // удалить в финале перый
                QRCamera.enabled = false;
                Application.runInBackground = true;
            }
                private void Update()
                    {
                        // Scan QRCode 
                        if (QRButton.clicked){
                            QRCamera.enabled = true;
                            grabQR = true;
                        }
                }
                        private void OnPostRender()
                        {

                            if (grabQR)
                            {
           
                                Texture2D QRTexture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
                                QRTexture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, false);
                                QRTexture.Apply();

                                        // Scan Barcode using ZXing 
                                        try
                                        {
                                            IBarcodeReader barcodeReader = new BarcodeReader();

                                            // decode the current frame from QRCamera
                                            var result = barcodeReader.Decode(QRTexture.GetPixels32(), QRTexture.width, QRTexture.height);
                                            if (result != null)
                                            {
                                                Debug.Log("QR Text:" + result.Text);
                                                txt.text = result.Text;
                                                txt = GameObject.Find("qrText").GetComponent<Text>();
                                                ResultInt = Convert.ToInt32(result.Text);
                                                Debug.Log("конверт " + ResultInt);
                                                ResultInt = gameObject.GetComponent<DataService>().requestID;
                                                TakeData cl = new TakeData();
                                                cl.Startdata();
                                                                            
                                            }
                                        }
                                            catch (Exception e)
                                            {
                                                Debug.Log("Error when capturing camera texture: " + e);
                                            }

            
                                //Reset the grab state
                                grabQR = false;
                                // No need for the QR camera
                                QRCamera.enabled = false;
                            }
                        }
    }
