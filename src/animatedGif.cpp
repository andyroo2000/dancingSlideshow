//  animatedGif.cpp
//  slideshowDancing

#include "animatedGif.h"

AnimatedGif::AnimatedGif(string _imagePath, float _x, float _y)
{
//    myImage.loadImage("images/png-sprite-sheet.png");
    string imagePath = _imagePath;
    float x = _x;
    float y = _y;

    myImage.loadImage(imagePath);
    
}

void AnimatedGif::update() {
    i++;
    
    // cout << i << '\n';
    
    if (i % 20 == 0) {
        if (i > 120) {
            i = 0;
        }
        
        xPositionOfSprite += incrementAmount;
        
        // cout << "xPositionOfSprite: " << xPositionOfSprite << '\n';
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
    }
}

void AnimatedGif::draw() {
    myImage.drawSubsection(x, y, 600, 600, xPositionOfSprite, 0);  // draw first frame
}

