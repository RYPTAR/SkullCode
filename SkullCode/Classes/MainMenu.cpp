//
//  MainMenu.cpp
//  SkullCode
//
//  Created by RYP APP on 9/6/17.
//
//

#include "MainMenu.h"
#include "Constants.h"
#include "Utils.h"

USING_NS_CC;

Scene* MainMenu::createScene() {
    
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainMenu::create();
    
    // adds MainMenu layer  as a child to the running scene
    scene->addChild(layer);
    
    return scene;
}

bool MainMenu::init() {
    
    //Double check Layer::init() was ran
    if ( !Layer::init() )
        return false;
    
    //log(Utils::origin().x);
    auto label = Label::createWithTTF("MAINMENU!", "fonts/arial.ttf", 24);
    label->setTextColor(Color4B::RED);
    //label->setString("Main Menu!");
    label->setPosition(Vec2(Utils::origin().x + Utils::center().x,
                            Utils::origin().y + Utils::center().y + label->getContentSize().height));
    this->addChild(label, 1);
    
    /*auto background = Sprite::create("HelloWorld.png");
    background->setPosition(Vec2(Utils::origin().x + Utils::center().x,
                                 Utils::origin().y + Utils::center().y ));
    this->addChild(background, 0);*/
     
    auto background = LayerColor::create(Color4B::WHITE);
    this->addChild(background);
    
    return true;
}
