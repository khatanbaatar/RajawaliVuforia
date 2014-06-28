#include <jni.h>
#include <android/log.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include <string>
#include <map>
#include <vector>

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#include <QCAR/QCAR.h>
#include <QCAR/CameraDevice.h>
#include <QCAR/Renderer.h>
#include <QCAR/VideoBackgroundConfig.h>
#include <QCAR/Trackable.h>
#include <QCAR/TrackableResult.h>
#include <QCAR/MarkerResult.h>
#include <QCAR/Tool.h>
#include <QCAR/MarkerTracker.h>
#include <QCAR/ImageTracker.h>
#include <QCAR/TrackerManager.h>
#include <QCAR/CameraCalibration.h>
#include <QCAR/Marker.h>
#include <QCAR/UpdateCallback.h>
#include <QCAR/DataSet.h>
#include <QCAR/TargetFinder.h>
#include <QCAR/Tracker.h>
#include <QCAR/ImageTarget.h>
#include <QCAR/CylinderTarget.h>
#include <QCAR/MultiTarget.h>
#include <QCAR/Rectangle.h>
#include <QCAR/ImageTargetResult.h>
#include <QCAR/VirtualButtonResult.h>

#include "Utils.h"

typedef struct _VirtualButton {
	std::string dataSetName;
	std::string targetName;
	std::string buttonName;
    int id;

    float top;
    float bottom;
    float left;
    float right;
} VirtualButton;
