//
//  animatedGif.cpp
//  slideshowDancing
//
//  Created by Andrew Landry on 11/12/14.
//
//

#include "animatedGif.h"

AnimatedGif::AnimatedGif(string _imagePath)
{
//    myImage.loadImage("images/png-sprite-sheet.png");
    string imagePath = _imagePath;

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
    myImage.drawSubsection(0, 0, 600, 600, xPositionOfSprite, 0);  // draw first frame
}

