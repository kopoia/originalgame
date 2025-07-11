using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// using UnityEngine.UIElements;

public class EnemyHpController : MonoBehaviour
{
    public int enemyMaxHP;
    private int enemyCurrentHP;
    public Slider HPslider;
    public PlayerController playerController;
    // Start is called before the first frame update
    void Start()
    {
        HPslider.value = (float)enemyMaxHP;
        enemyCurrentHP = enemyMaxHP;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void Damage()
    {
        enemyCurrentHP -= 30;
        HPslider.value = (float)enemyCurrentHP / (float)enemyMaxHP;
        if (enemyCurrentHP <= 0)
        {
            StartCoroutine(Enemyaway());
            playerController.WinAnimation();
        }
    }
    private IEnumerator Enemyaway()
    {
        yield return new WaitForSeconds(0.5f);
        for (int i=0; i<100; i++)
        {
            transform.Translate(0, 0, 1f);
        }
        
    }
}
