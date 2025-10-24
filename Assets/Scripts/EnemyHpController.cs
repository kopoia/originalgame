using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// using UnityEngine.UIElements;

public class EnemyHpController : MonoBehaviour
{
    public int enemyMaxHP;
    private int enemyCurrentHP;
    public Slider EHPslider;
    public PlayerController playerController;
    public float speedToTarget = 3f;
    public float speedToStart = 1f;
    public Vector3 targetPosition = new Vector3(0f, 0.8f, -2.25f);
    private Vector3 startPosition;
    private Vector3 currentDestination;
    private enum MoveState { GoingToTarget, Returning, Done }
    private MoveState state = MoveState.GoingToTarget;
    public PlayerHpController playerHpController;
    // Start is called before the first frame update
    void Start()
    {
        state = MoveState.GoingToTarget;
        EHPslider.value = (float)enemyMaxHP;
        enemyCurrentHP = enemyMaxHP;
        startPosition = transform.position;
        currentDestination = targetPosition;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void Damage()
    {
        enemyCurrentHP -= 30;
        EHPslider.value = (float)enemyCurrentHP / (float)enemyMaxHP;
        if (enemyCurrentHP <= 0)
        {
            StartCoroutine(Enemyaway());
            playerController.WinAnimation();
        }
    }
    private IEnumerator Enemyaway()
    {
        yield return new WaitForSeconds(0.5f);
        for (int i = 0; i < 100; i++)
        {
            transform.Translate(0, 0, 1f);
        }

    }
    public void EnemyAttack()
    {
        if (state == MoveState.Done)
        {
            return;
        }
        //繰り返すかdotween
        StartCoroutine(Tosshin());
    }
    private IEnumerator Tosshin()
    {
        while (true)
        {
            for (int i = 0; i < 100; i++)
            {
                yield return new WaitForSeconds(0.01f);
                transform.Translate(0f, 0f, -0.055f);
            }
            yield return new WaitForSeconds(0.5f);
            playerController.playerCurrentHP -= 30;
            playerHpController.Damage();
            for (int k = 0; k < 100; k++)
            {
                yield return new WaitForSeconds(0.01f);
                transform.Translate(0, 0, +0.055f);
            }
            playerController.turnchangeAttack.interactable = true;
            playerController.turnchangeAway.interactable = true;
            yield return new WaitForSeconds(1.0f);
            yield break;
        }

        // while (true)
        // {
        //     float currentSpeed = (state == MoveState.GoingToTarget) ? speedToTarget : speedToStart;
        //     transform.position = Vector3.MoveTowards(transform.position, currentDestination, currentSpeed * Time.deltaTime);
        //     Debug.Log("aa");
        //     if (Vector3.Distance(transform.position, currentDestination) > 0.00001f)
        //     {
        //         Debug.Log("ad");
        //         if (state == MoveState.GoingToTarget)
        //         {
        //             // ターゲットに到達したら初期位置に戻る
        //             currentDestination = startPosition;
        //             state = MoveState.Returning;
        //             Debug.Log("ab");
        //             yield return new WaitForSeconds(2f);
        //         }
        //         else if (state == MoveState.Returning)
        //         {
        //             // 戻りが終わったらDone
        //             state = MoveState.Done;
        //             Debug.Log("ac");
        //         }
        //         yield break;
        //     }
        // }
    }
}
