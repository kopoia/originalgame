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
    public string Floor1;
    Image fadeImage;
    public PlayerController playerController;
    private int playercurrentHP;
    public DungeonEntranceController dungeonEntranceController;

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
            if (SceneManager.GetActiveScene().name == "Main" || SceneManager.GetActiveScene().name == "Floor1")
            {
                if (dungeonEntranceController.canEnter == true)
                {
                    SceneManager.LoadScene(Floor1);
                }
                else
                {
                    SceneManager.LoadScene(Battle); // ← フェードアウト完了後にシーン移動
                }
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
                    var imascene = PlayerPrefs.GetString("nowscene", Main); 
                    SceneManager.LoadScene(imascene);
                    //playerController.locationmodori();
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
    public void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
       int id = PlayerPrefs.GetInt("enemyID", -1);
       if (id == -1)
       {
           return;
       }

        EnemyData[] enemies = FindObjectsOfType<EnemyData>();
        foreach (EnemyData enemy in enemies)
        {
            if (enemy.enemyID == id)
            {
                Destroy(enemy.gameObject);
                PlayerPrefs.DeleteKey("enemyID");
                break;
            }
        }
    }
    void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
}