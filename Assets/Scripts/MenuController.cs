using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class MenuController : MonoBehaviour,
    IPointerClickHandler,  
    IPointerDownHandler,  
    IPointerUpHandler
{
    [SerializeField] GameObject MenuObject;
    bool menujoutai;
    [SerializeField] GameObject ActiveObject;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(menujoutai == false)
        {
            if(Input.GetKeyDown(KeyCode.Z))
            {
                MenuObject.gameObject.SetActive(true);
                menujoutai = true;
                 // マウスカーソルを表示にし、位置固定解除
                //Cursor.visible = true;
                //Cursor.lockState = CursorLockMode.None;
            }
        }
         else
        {
            if (Input.GetKeyDown(KeyCode.Z))
            {
                MenuObject.gameObject.SetActive(false);
                menujoutai = false;

                // マウスカーソルを非表示にし、位置を固定
                //Cursor.visible = false;
                //Cursor.lockState = CursorLockMode.Locked;
            }
        }
    }

    // 押す  
    public void OnPointerClick(PointerEventData eventData)
    {
        ActiveObject.gameObject.SetActive(true);
    }  
    // 押されたまま
    public void OnPointerDown(PointerEventData eventData)
    {

    }  
    // 押した後放した 
    public void OnPointerUp(PointerEventData eventData)
    {
   
    }  
}
