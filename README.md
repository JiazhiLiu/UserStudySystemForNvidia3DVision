# UserStudySystemForNvidia3DVision

Implementation of user study system in our paper:

"Modified 2D-Ghost-Free Stereoscopic Display with Depth-of-Field Effects". 

The user study system can present automatically 3D images or 3D videos and collect the corresponding votes of subjects on the stimuli. We developed the user study system using C++, Qt 5.12 (for user interfaces), DirectX 11 (for stereo programming on NVIDIA 3D Vision 2), OpenCV (for decoding images and videos).

## Requriments

### Environment

```
Windows 10
Visual Studio 2017
Directx 11
Qt 5.12
NVIDIA Graphics Driver 419.67 (Note the latest version do not support NVIDIA 3D Vision)
```

### Hardware

```
ASUS VG248QE display ($24^{\prime\!\prime}$, $1920\times1080$, 120Hz)
NVIDIA 3D Vision 2
NVIDIA GTX 1060 3GB
```

## Note

The current version is just a user study demo. We are refactoring the codes of the user system, and hope that we can upload the complete version before the end of this year. 

The demo contains `hardware check`, `color vision check`, `stereo vision check` as well as the [API](./userstudy/Display3DWidget.h) of 3D Image/Video Display. 
