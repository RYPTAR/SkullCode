//
//  Utils.cpp
//  SkullCode
//
//  Created by RYP APP on 9/7/17.
//
//

#include "Utils.h"
#include "Constants.h"

USING_NS_CC;

Size Utils::screenRes(){
    return Director::getInstance()->getWinSizeInPixels();
}

Vec2 Utils::origin(){
    return Director::getInstance()->getVisibleOrigin();
}

Vec2 Utils::center(){
    Vec2 center = screenRes();
    center.y /= 2;
    center.x /= 2;
    return center;
}
