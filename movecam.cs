using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movecam : MonoBehaviour
{
    public Transform cam;

    // Update is called once per frame
    void Update()
    {
        transform.position = cam.position;
    }
}
