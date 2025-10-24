using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHpController : MonoBehaviour
{
    public PlayerController playerController;
    public Slider Hpslider;
    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        Hpslider.value = (float)playerController.playerMaxHP;
        playerController.playerCurrentHP = playerController.playerMaxHP;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Damage()
    {
        Hpslider.value = (float)playerController.playerCurrentHP / (float)playerController.playerMaxHP;
        animator.SetBool("damage", true);
        StartCoroutine(modosimotion());
    }
    
    private IEnumerator modosimotion()
    {
        yield return new WaitForSeconds(1.5f);
        animator.SetBool("damage", false);
    }
}
