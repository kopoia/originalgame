using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DungeonEntranceController : MonoBehaviour
{
    public GameObject entranceUI;
    public bool canEnter = false;
    public FadeManager fademanager;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (canEnter && Input.GetKeyDown(KeyCode.T))
        {
            fademanager.Out = true;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            entranceUI.SetActive(true);
            canEnter = true;
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            entranceUI.SetActive(false);
            canEnter = false;
        }
    }
}
