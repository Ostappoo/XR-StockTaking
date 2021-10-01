using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageTrackerManager : MonoBehaviour
{
    [Header("Длина этого списка должна соответствовать количеству изображений в Справочной библиотеке изображений")]
    [SerializeField]
    private List<GameObject> ObjectsToPlace;

    private int refImageCount;
    private Dictionary<string, GameObject> allObjects;

    //создайние “отслеживаемого” менеджера для обнаружения 2D-изображений
    private ARTrackedImageManager arTrackedImageManager;
    private IReferenceImageLibrary refLibrary;

    void Awake()
    {
        //инициализированный менеджер отслеживаемых изображений
        arTrackedImageManager = GetComponent<ARTrackedImageManager>();
    }


    //когда диспетчер отслеживаемых изображений включен, добавьте привязку к отслеживаемому обработчик событий с изменением изображения путем вызова метода для итерации изменения ссылки на изображение
    private void OnEnable()
    {
        arTrackedImageManager.trackedImagesChanged += OnImageChanged;
    }

    //когда диспетчер отслеживаемых изображений отключен, удалите привязку к обработчику событий изменения отслеживаемого изображения, вызвав метод для повторения изменений ссылки на изображение
    private void OnDisable()
    {
        arTrackedImageManager.trackedImagesChanged -= OnImageChanged;
    }

    private void Start()
    {
        refLibrary = arTrackedImageManager.referenceLibrary;
        refImageCount = refLibrary.count;
        LoadObjectDictionary();
    }

    void LoadObjectDictionary()
    {
        allObjects = new Dictionary<string, GameObject>();
        for (int i = 0; i < refImageCount; i++)
        {
            GameObject newOverlay = new GameObject();
            newOverlay = ObjectsToPlace[i];
            //проверьте, является ли объект сборным и нуждается ли он в создании экземпляра
            if (ObjectsToPlace[i].gameObject.scene.rootCount == 0)
            {
                newOverlay = (GameObject)Instantiate(ObjectsToPlace[i], transform.localPosition, Quaternion.identity);
            }

            allObjects.Add(refLibrary[i].name, newOverlay);
            newOverlay.SetActive(false);
        }
    }


    void ActivateTrackedObject(string imageName)
    {
        Debug.Log("Tracked the target: " + imageName);
        allObjects[imageName].SetActive(true);
        // Дайте исходному изображению разумный масштаб по умолчанию
        allObjects[imageName].transform.localScale = new Vector3(0.0001f, 0.0001f, 0.0001f);
    }

    private void UpdateTrackedObject(ARTrackedImage trackedImage)
    {
        //если состояние отслеживания отслеживаемого изображения сопоставимо с отслеживанием
        if (trackedImage.trackingState == TrackingState.Tracking)
        {
            //установите для объекта ar, отслеживаемого по изображению, значение активный
            allObjects[trackedImage.referenceImage.name].SetActive(true);
            allObjects[trackedImage.referenceImage.name].transform.position = trackedImage.transform.position;
            allObjects[trackedImage.referenceImage.name].transform.rotation = trackedImage.transform.rotation;
        }
        else //если состояние отслеживания отслеживаемого изображения ограничено или отсутствует
        {
            //деактивиция объекта ar, отслеживаемого по изображению
            allObjects[trackedImage.referenceImage.name].SetActive(false);
        }
    }

    public void OnImageChanged(ARTrackedImagesChangedEventArgs args)
    {
        //для каждого добавленного отслеживаемого изображения
        foreach (var addedImage in args.added)
        {
            ActivateTrackedObject(addedImage.referenceImage.name);

        }

        // для каждого отслеживаемого изображения, которое было обновлено
        foreach (var updated in args.updated)
        {
            //сброс отслеживаемого изображение, чтобы проверить состояние отслеживания
            UpdateTrackedObject(updated);
        }

        // для каждого отслеживаемого изображения, которое было удалено  
        foreach (var trackedImage in args.removed)
        {
            // уничтожение объекта AR, связанного с отслеживаемым изображением
            Destroy(trackedImage.gameObject);
        }
    }

}
