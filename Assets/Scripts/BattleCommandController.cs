using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleCommandController : MonoBehaviour
{
    public PlayerController plcontroller;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void Attack()
    {
        plcontroller.AttackAnimation();
    }
    public void Away()
    {
        plcontroller.AwayAnimation();
    }
}
