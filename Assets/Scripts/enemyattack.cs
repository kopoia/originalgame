using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyattack : MonoBehaviour
{
    private Animator animator;
    public PlayerController playerController;
    public PlayerHpController playerHpController;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Idle()
    {
        animator.SetBool("Idle",true);
    }
    public void attack()
    {
        StartCoroutine(Eattack());
    }
    IEnumerator Eattack()
    {
        animator.SetBool("isattack",true);
        yield return new WaitForSeconds(1.0f);
        playerController.playerCurrentHP -= 30;
        playerHpController.Damage();
        animator.SetBool("isattack",false);
        playerController.turnchangeAttack.interactable = true;
        playerController.turnchangeAway.interactable = true;
        yield break;
    }
}
