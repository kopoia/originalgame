using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FadeManager : MonoBehaviour
{
    float Speed = 0.01f;        // フェードのスピード
    float red, green, blue, alfa;

    public bool Out = false;
    public bool In = false;
    public string Battle; // ← シーン名をインスペクターで指定
    public string Main;
    public string GameOver;
    Image fadeImage;
    public PlayerController playerController;
    private int playercurrentHP;

    void Start()
    {
        fadeImage = GetComponent<Image>();
        red = fadeImage.color.r;
        green = fadeImage.color.g;
        blue = fadeImage.color.b;
        alfa = fadeImage.color.a;
    }

    void Update()
    {
        if (In)
        {
            FadeIn();
        }

        if (Out)
        {
            FadeOut();
        }
    }

    void FadeIn()
    {
        alfa -= Speed;
        Alpha();
        if (alfa <= 0)
        {
            In = false;
            fadeImage.enabled = false;
        }
    }

    public void FadeOut()
    {
        fadeImage.enabled = true;
        alfa += Speed;
        Alpha();
        if (alfa >= 1)
        {
            Out = false;
            if (SceneManager.GetActiveScene().name == "Main")
            {
                SceneManager.LoadScene(Battle); // ← フェードアウト完了後にシーン移動
            }
            else if (SceneManager.GetActiveScene().name == "Battle")
            {
                if (playerController.runaway == true)
                {
                    SceneManager.LoadScene(Main);
                    playerController.runaway = false;
                }
                if (playerController.lose == true)
                {
                    SceneManager.LoadScene(GameOver);
                    playerController.lose = false;
                }
                else
                {
                    SceneManager.LoadScene(Main);
                }
            }
            else if (SceneManager.GetActiveScene().name == "GameOver")
            {
                SceneManager.LoadScene(Main);
            }
        }
    }

    void Alpha()
    {
        fadeImage.color = new Color(red, green, blue, alfa);
    }
    public void Away()
    {
        SceneManager.LoadScene(Main);
    }
}