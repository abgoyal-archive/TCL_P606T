#ifndef _CAMERA_CUSTOM_IMGSENSOR_CFG_
#define _CAMERA_CUSTOM_IMGSENSOR_CFG_
//
#include "camera_custom_types.h"
//
namespace NSCamCustomSensor
{
//
//
enum EDevId
{
    eDevId_ImgSensor0, //main sensor
    eDevId_ImgSensor1, //sub sensor
    eDevId_ImgSensor2, //main2 sensor (for 3D)
};

MINT32  getSensorInputDataBitOrder(EDevId const eDevId);

MINT32  getSensorPadPclkInv(EDevId const eDevId);

MINT32  getSensorFacingDirection(EDevId const eDevId);

typedef struct SensorOrientation_S
{
    MUINT32 u4Degree_0;     //  main sensor in degree (0, 90, 180, 270)
    MUINT32 u4Degree_1;     //  sub  sensor in degree (0, 90, 180, 270)
    MUINT32 u4Degree_2;     //  main2 sensor in degree (0, 90, 180, 270)
} SensorOrientation_T;

SensorOrientation_T const&  getSensorOrientation();

MBOOL isRetFakeSubOrientation();

MBOOL isRetFakeMainOrientation();
MBOOL isRetFakeMain2Orientation();


};  //NSCamCustomSensor
#endif  //  _CAMERA_CUSTOM_IMGSENSOR_CFG_

