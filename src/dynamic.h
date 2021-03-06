#ifndef DYNAMIC_H_
#define DYNAMIC_H_

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/features2d/features2d.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include <string>
#include "opencv2/nonfree/features2d.hpp"

#define x 50
#define threshold 0

struct feature_point
{
	cv::KeyPoint keyPoint;
    int  count;

};



struct dynamicStore
{
    std::vector<feature_point> dynamicBucket;  
  
    /**
     * updateDynamicStore < updates the count of each feature and removes feature if needed>
     * */

    void updateDynamicStore(std::vector<cv::KeyPoint> newKeyPoints);

};  
    
#endif






    
    
