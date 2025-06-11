using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraKotei : MonoBehaviour
{
    private GameObject player;   //ユニティちゃんのオブジェクト情報を格納
    private Vector3 offset;      //カメラとの相対距離を格納

    // Start is called before the first frame update
    void Start()
    {
        //ユニティちゃんのオブジェクト情報を格納
        this.player = GameObject.Find("UnityChan");
        //メインカメラ(自身のオブジェクト)とユニティちゃんとトランスフォームの相対距離を算出
        offset = transform.position - player.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        //メインカメラに相対距離を反映させた新しいトランスフォームの値をセットする
        transform.position = this.player.transform.position + offset;
    }
}