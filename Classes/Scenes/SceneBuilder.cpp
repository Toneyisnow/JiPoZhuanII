//
//  SceneBuilder.cpp
//  JiPoZhuanII
//
//  Created by SuiYi on 3/20/16.
//
//

#include "SceneBuilder.hpp"
#include "MainGameLayer.hpp"

using namespace JiPoZhuanII::Scenes;

Scene* SceneBuilder::createMainGameScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainGameLayer::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}
