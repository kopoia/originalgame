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
    Image fadeImage;

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

    void FadeOut()
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
            if (SceneManager.GetActiveScene().name == "Battle")
            {
                SceneManager.LoadScene(Main); // ← フェードアウト完了後にシーン移動
            }
            
        }
    }

    void Alpha()
    {
        fadeImage.color = new Color(red, green, blue, alfa);
    }
}