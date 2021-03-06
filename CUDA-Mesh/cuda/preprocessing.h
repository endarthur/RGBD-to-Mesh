#pragma once

#include "math_constants.h"
#include "cuda_runtime.h"
#include "device_structs.h"
#include "RGBDFrame.h"
#include "Calibration.h"
#include <glm/glm.hpp>



__host__ void buildVMapNoFilterCUDA(rgbd::framework::DPixel* dev_depthBuffer, VMapSOA vmapSOA, int xRes, int yRes, 
									rgbd::framework::Intrinsics intr, float maxDepth);


__host__ void rgbAOSToSOACUDA(rgbd::framework::ColorPixel* dev_colorPixels, 
						  RGBMapSOA rgbSOA, int xRes, int yRes);


__host__ void buildVMapPyramidCUDA(VMapSOA dev_vmapSOA, int xRes, int yRes, int numLevels);