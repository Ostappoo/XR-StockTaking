using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonEditCon : MonoBehaviour
{
    

        public static bool clicked = false;

        void LateUpdate()
        {
            clicked = false;
        }
        public void Click()
        {
            clicked = true;
        }


    }


