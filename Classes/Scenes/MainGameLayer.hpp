//
//  MainGameLayer.hpp
//  JiPoZhuanII
//
//  Created by SuiYi on 3/20/16.
//
//

#ifndef MainGameLayer_hpp
#define MainGameLayer_hpp

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

namespace JiPoZhuanII {
    namespace Scenes
    {
        class MainGameLayer : public Layer
        {
        private:
            
            
        public:
            
            
            virtual bool init();
            
            // implement the "static create()" method manually
            CREATE_FUNC(MainGameLayer);
            
        };
    }
}







#endif /* MainGameLayer_hpp */
