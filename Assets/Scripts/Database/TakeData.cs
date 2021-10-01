    using UnityEngine;
    using System.Collections.Generic;
    using UnityEngine.UI;

public class TakeData : MonoBehaviour
{

   
        public Text DebugText;
        public bool gosql = false;
        
    

        public void Startdata()
        {
        DebugText = GameObject.Find("TextForStock").GetComponent<Text>();
        DebugText.text = "";
        var ds = new DataService("existing2.db");
        var Names = ds.GetStocks();
        ToConsole("Serach Id ");
        ToConsole(Names);


        }
    







    private void ToConsole(IEnumerable<Stock> Name){
            foreach (var Named in Name)
            {
                ToConsole(Named.ToString());
            }

    }


        private void ToConsole(string msg){
            DebugText.text = string.Empty; //опустошает окно
            DebugText.text += System.Environment.NewLine + msg;
            Debug.Log(msg);
        
        }





}
    
        