//  animatedGif.cpp
//  slideshowDancing

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
//        updateValueByPercentage(x, 101);

//        x--;
//        y--;
//        w--;
//        h--;
//        xPositionOfSprite--;
//        yPositionOfSprite--;
//        sourceWidth--;
//        sourceHeight--;
        
        scaleGif(90);  // parameter is a percentage to scale the gif each time this is run
        
        
        savedTime2 = currentTime;
        
    }
}

void AnimatedGif::draw() {
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
    
    float percentageValueForX = _percentage;
    
//    cout << "SourceHeight: " << sourceHeight << '\n';
//    cout << "SourceWidth: " << sourceWidth << '\n';
    
    // scale size of source
    w *= _percentage * .01;
    h *= _percentage * .01;
    //int intSourceWidth = sourceWidth;  // convert to int for resize
    //int intSourceHeight = sourceHeight;  // convert to int for resize

    //intSourceWidth = sourceWidth * 6;
    //intSourceHeight = sourceHeight;

    // scale the actual image
    //myImage.resize(intSourceWidth, intSourceHeight);

    // scale the rest of the parameters
    //updateValueByPercentage(w, _percentage);
    //updateValueByPercentage(h, _percentage);
    //updateValueByPercentage(xPositionOfSprite, percentageValueForX);
    //updateValueByPercentage(yPositionOfSprite, _percentage);




}



