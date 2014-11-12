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
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(-1, 1);
    
}

void animatedGif::update() {

}

void animatedGif::draw() {

}