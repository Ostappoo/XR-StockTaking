using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveteImput : MonoBehaviour
{
    public GameObject objectActivate1;
    public GameObject objectActivate2;
    public GameObject objectActivate3;
    public GameObject objectActivate4;

    void Start()
    {
        objectActivate1.SetActive(false);
        objectActivate2.SetActive(false);
        objectActivate3.SetActive(false);
        objectActivate4.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (ButtonEdit.clicked)
        {
            objectActivate1.SetActive(true);
            objectActivate2.SetActive(true);
            objectActivate3.SetActive(true);
            objectActivate4.SetActive(true);
        }
        if (ButtonEditCon.clicked)
        {
            objectActivate1.SetActive(false);
            objectActivate2.SetActive(false);
            objectActivate3.SetActive(false);
            objectActivate4.SetActive(false);
        }

    }
}
