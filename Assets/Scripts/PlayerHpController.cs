using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHpController : MonoBehaviour
{
    public PlayerController playerController;
    public Slider Hpslider;
    // Start is called before the first frame update
    void Start()
    {
        Hpslider.value = (float)playerController.playerMaxHP;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
