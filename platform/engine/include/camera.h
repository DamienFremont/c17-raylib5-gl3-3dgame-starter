#include <raylib.h>
#include "control.h"

#pragma once

Camera InitCamera();

void CameraFixed_Look(Camera *camera, Controller player, int cameraDistance, int cameraHeight);

void CameraFollow_Look(Camera *camera, Controller player, int cameraDistance, int cameraHeight);