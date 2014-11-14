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
    currentTime = ofGetElapsedTimeMillis();
    savedTime = currentTime;
    screenHorizontalCenter = ofGetScreenWidth() / 2;
    screenVerticalCenter = ofGetScreenHeight() / 2;
    horizonLine = screenVerticalCenter - (.15 * ofGetScreenHeight());
}

void AnimatedGif::update() {
    currentTime = ofGetElapsedTimeMillis();
    int passedTime = currentTime - savedTime;
    
    if (passedTime > totalTime) {
        xPositionOfSprite += incrementAmount;
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
        savedTime = currentTime;
    }
    
    int passedTime2 = currentTime - savedTime2;
    
    if (passedTime2 > totaltime2) {
        scaleGif(99.8);  // parameter is a percentage to scale the gif each time this is run
        
        // movie image toward center of screen (width)
        if (x > screenHorizontalCenter) {
            x -= incrementTowardCenter;
        } else if (x < screenHorizontalCenter) {
            x += incrementTowardCenter;
        } else {
            // nothing
        }
        
        // movie image toward center of screen (height)
        if (y > horizonLine) {
            y -= incrementTowardCenter;
        } else if (y < horizonLine) {
            y += incrementTowardCenter;
        } else {
            // nothing
        }
        
        savedTime2 = currentTime;
    }
}

void AnimatedGif::draw() {
    fadeIn();
    myImage.drawSubsection(x, y, w, h, xPositionOfSprite, yPositionOfSprite, sourceWidth, sourceHeight);
}

void AnimatedGif::setImagePath(string _imagePath) {
    myImage.loadImage(_imagePath);
}

void AnimatedGif::setDrawSubsectionParameters(float _x, float _y, float _w, float _h, float _xPositionOfSprite, float _yPositionOfSprite, float _sourceWidth, float _sourceHeight) {
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    xPositionOfSprite = _xPositionOfSprite;
    yPositionOfSprite = _yPositionOfSprite;
    sourceHeight = _sourceHeight;
    sourceWidth = _sourceWidth;
}


void AnimatedGif::updateValueByPercentage(float &_number, float _percentage) {
    _number = _number * (_percentage * .01);
}

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


