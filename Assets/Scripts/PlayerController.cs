using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using Unity.VisualScripting;
using UnityEditor.Search.Providers;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    float speed = 3.0f;
    private Animator animator;
    public FadeManager fademanager;
    public EnemyHpController enemyHpController;
    public Button turnchangeAttack;
    public Button turnchangeAway;
    public int playerCurrentHP;
    public int playerMaxHP;
    public float moveDuration = 2f;
    public float moveDistance = 5f;
    public bool lose = false;
    public bool runaway = false;
    public static Scene currentscene;
    public string scenename;
    public static Vector3 CurrentLocation = new Vector3(49.5f,2.0f,11.8f);
    // Start is called before the first frame update
    void Start()
    {
        
        animator = GetComponent<Animator>();
        playerMaxHP = 100;
        if(SceneManager.GetActiveScene().name == "Floor1")
        {
            transform.position = CurrentLocation;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (SceneManager.GetActiveScene().name == "Battle" && playerCurrentHP < 0)
        {
            fademanager.Out = true;
            fademanager.FadeOut();
            lose = true;
        }
        if (SceneManager.GetActiveScene().name == "Battle")
        {
            animator.SetBool("is_battle", true);
        }
        else if (SceneManager.GetActiveScene().name == "Main")
        {
            animator.SetBool("is_walking", false);
        }
        if (SceneManager.GetActiveScene().name != "Battle")
        {
            if (Input.GetKey(KeyCode.W))
            {
                transform.position += new Vector3(0, 0, speed * Time.deltaTime);
                animator.SetBool("is_walking", true);
                transform.rotation = Quaternion.Euler(0, 0, 0);
            }
            else if (Input.GetKey(KeyCode.S))
            {
                transform.position += new Vector3(0, 0, -speed * Time.deltaTime);
                animator.SetBool("is_walking", true);
                transform.rotation = Quaternion.Euler(180, 0, 180);
            }
            if (Input.GetKey(KeyCode.A))
            {
                transform.position += new Vector3(-speed * Time.deltaTime, 0, 0);
                animator.SetBool("is_walking", true);
                transform.rotation = Quaternion.Euler(0, -90, 0);
            }
            if (Input.GetKey(KeyCode.D))
            {
                transform.position += new Vector3(speed * Time.deltaTime, 0, 0);
                animator.SetBool("is_walking", true);
                transform.rotation = Quaternion.Euler(0, 90, 0);
            }
        }
    }
    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            fademanager.Out = true;
            currentscene = SceneManager.GetActiveScene();
            scenename = currentscene.name;
            PlayerPrefs.SetString("nowscene", scenename);
            CurrentLocation = transform.position;
        }
    }
    public void AttackAnimation()
    {
        StartCoroutine(Punch());
    }
    private IEnumerator Punch()
    {
        turnchangeAttack.interactable = false;
        turnchangeAway.interactable = false;
        animator.SetBool("punch", true);
        yield return new WaitForSeconds(0.5f);
        animator.SetBool("punch", false);
        enemyHpController.Damage();
        yield return new WaitForSeconds(0.5f);
        if (enemyHpController.enemyCurrentHP >= 0)
        {
         enemyHpController.EnemyAttack();   
        }
    }
    public void AwayAnimation()
    {
        turnchangeAttack.interactable = false;
        turnchangeAway.interactable = false;
        animator.SetBool("away", true);
        transform.rotation = Quaternion.Euler(0, -180, 0);
        StartCoroutine(away());
        fademanager.Out = true;
    }
    IEnumerator away()
    {
        Vector3 startPosition = transform.position;
        Vector3 endPosition = startPosition - Vector3.forward * moveDistance;
        float elapsedTime = 0f;
        yield return new WaitForSeconds(0.1f);
        while (elapsedTime < moveDuration)
        {
            // 開始地点と終了地点の間を滑らかに移動
            transform.position = Vector3.Lerp(startPosition, endPosition, elapsedTime / moveDuration);

            // 経過時間を加算
            elapsedTime += Time.deltaTime;

            // 1フレーム待機
            yield return null;
        }
        transform.position = endPosition;
        runaway = true;
    }
    public void WinAnimation()
    {
        StartCoroutine(Winanimation());
    }
    IEnumerator Winanimation()
    {
        animator.SetBool("win", true);
        yield return new WaitForSeconds(3.0f);
        fademanager.Out = true;
    }
    public void retry()
    {
        fademanager.Out = true;
    }

    public void locationmodori()
    {
        Debug.Log(CurrentLocation);
        transform.position = CurrentLocation;
    }
}
