//
//  main.cpp
//  UnixDemo
//
//  Created by user on 3/7/19.
//  Copyright © 2019 Alex Ovechko. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <tensorflow/c/c_api.h>


using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "TF version = " << TF_Version() << std::endl;
    return 0;
}