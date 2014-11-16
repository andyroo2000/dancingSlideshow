//  animatedGif.h
//  slideshowDancing

#ifndef __slideshowDancing__animatedGif__
#define __slideshowDancing__animatedGif__

#include "ofMain.h"


class AnimatedGif {
    
public:
    // methods, equivalent to specific functions of your class objects
    void setup();
    void update();
    void draw();
    void setValueX(int _x);
    void setImagePath(string _imagePath);
    void scaleGif(float _percentage);
    void fadeIn();
    
    // variables
    ofImage myImage;  // the sprite sheet for each instance of this class
    
    // draw gif parameters
    float x = 0;                    // x-position of gif
    float y = 0;                    // y-position of gif
    float w = 600;                 // desired width of gif on screen
    float h = 600;                 // desired height of gif on screen
    float xPositionOfSprite = 0;    // x-position of source
    float yPositionOfSprite = 0;    // y-position of source
    float sourceWidth = 600;        // width of source
    float sourceHeight = 600;       // height of source
    
    float incrementAmount = 600;    // width of each image in spritesheet
    int numberOfFrames = 6;         // number of frames in the gif
    
    // timer variables
    int savedTime = 0;
    int totalTime = 200;            // time for each frame of gif in milliseconds
    int currentTime = 0;
    
    // fadein variables
    int oldAlpha = 0;
    int newAlpha = 0;

    
    // CONSTRUCTOR
    AnimatedGif(string _imagePath, float _x, float _y);
    
private:
};


#endif /* defined(__slideshowDancing__animatedGif__) */
