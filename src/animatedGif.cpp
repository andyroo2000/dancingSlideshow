//  animatedGif.cpp
//  slideshowDancing

#include "ofApp.h"
#include "animatedGif.h"

AnimatedGif::AnimatedGif(string _imagePath, float _x, float _y)
{
    x = _x;
    y = _y;
    myImage.loadImage(_imagePath);
}

void AnimatedGif::setup() {

}

void AnimatedGif::update() {
    currentTime = ofGetElapsedTimeMillis();
    int passedTime = currentTime - savedTime;
    
    // move from left to right over the spritesheet revealing a new frame with each click of the timer
    if (passedTime > totalTime) {
        xPositionOfSprite += incrementAmount;
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
        savedTime = currentTime;
    }
}

void AnimatedGif::draw() {
    fadeIn();
    myImage.drawSubsection(x, y, w, h, xPositionOfSprite, yPositionOfSprite, sourceWidth, sourceHeight);
}

void AnimatedGif::setImagePath(string _imagePath) {
    myImage.loadImage(_imagePath);
}

// this function isn't being used, but you could use this to scale the gifs individually
void AnimatedGif::scaleGif(float _percentage) {
    // scale gif by percentage
    w *= _percentage * .01;
    h *= _percentage * .01;
}

void AnimatedGif::fadeIn() {
    ofEnableAlphaBlending();
    newAlpha = oldAlpha + 3;  // higher numbers will make the fade happen faster
    
    if (newAlpha > 255) {newAlpha = 255;}
    
    ofSetColor(255,255,255,newAlpha);
    oldAlpha = newAlpha;
}


