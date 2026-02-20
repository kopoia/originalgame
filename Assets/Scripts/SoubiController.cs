using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SoubiController : MonoBehaviour,
    IPointerClickHandler,  
    IPointerDownHandler,  
    IPointerUpHandler
{
    [SerializeField] GameObject MenuObject;
    [SerializeField] GameObject ActiveObject;
    // Start is called before the first frame update
    void Start()
    {
        ActiveObject.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
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
