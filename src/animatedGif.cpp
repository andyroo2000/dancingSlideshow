//
//  animatedGif.cpp
//  slideshowDancing
//
//  Created by Andrew Landry on 11/12/14.
//
//

#include "animatedGif.h"

animatedGif::animatedGif()
{
    int i = 0;
    int j = 0;
    int incrementAmount = 600;
    int numberOfFrames = 6;
    
    myImage.loadImage("images/png-sprite-sheet.png");
    xPositionOfSprite = 0;
    
}

void animatedGif::update() {
    i++;
    
    cout << i << '\n';
    
    if (i % 20 == 0) {
        if (i > 120) {
            i = 0;
        }
        
        xPositionOfSprite += incrementAmount;
        
        cout << "xPositionOfSprite: " << xPositionOfSprite << '\n';
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
    }
}

void animatedGif::draw() {
    myImage.drawSubsection(0, 0, 600, 600, xPositionOfSprite, 0);  // draw first frame
}