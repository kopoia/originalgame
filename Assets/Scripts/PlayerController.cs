using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    float speed = 3.0f;
    private Animator animator;
    public FadeManager fademanager;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (SceneManager.GetActiveScene().name == "Battle")
        {
            animator.SetBool("is_battle", true);
        }
        else if (SceneManager.GetActiveScene().name == "Main")
        {
            animator.SetBool("is_walking", false);
        }
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
    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            fademanager.Out = true;
        }
    }
    public void AttackAnimation()
    {
        StartCoroutine(Punch());
    }
    private IEnumerator Punch()
    {
        animator.SetBool("punch", true);
        yield return new WaitForSeconds(0.5f);
        animator.SetBool("punch", false);
    }
    public void AwayAnimation()
    {
        animator.SetBool("away", true);
        transform.rotation = Quaternion.Euler(0, -180, 0);
        transform.position += new Vector3(0, 0, -speed * Time.deltaTime);
    }
}
