//
//  MainMenu.h
//  SkullCode
//
//  Created by RYP APP on 9/6/17.
//
//

#pragma once

#include "cocos2d.h"

USING_NS_CC;

class MainMenu: public Layer
{
    
public:
    static Scene* createScene();
    
    virtual bool init();
    
    
    //implements the "createScene()" function manually
    CREATE_FUNC(MainMenu);
};
