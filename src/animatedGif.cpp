//  animatedGif.cpp
//  slideshowDancing

#include "animatedGif.h"

AnimatedGif::AnimatedGif(string _imagePath, float _x, float _y)
{
    x = _x;
    y = _y;
    myImage.loadImage(_imagePath);
    
}

void AnimatedGif::update() {
    i++;
    
    if (i % 20 == 0) {
        if (i > 120) {
            i = 0;
        }
        
        xPositionOfSprite += incrementAmount;
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
    }
}

void AnimatedGif::draw() {
    myImage.drawSubsection(x, y, 600, 600, xPositionOfSprite, 0);  // draw first frame
}

