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
    void setDrawSubsectionParameters(float _x, float _y, float _w, float _h, float _xPositionOfSprite, float _yPositionOfSprite, float _sourceWidth, float _sourceHeight);
    
    void updateValueByPercentage(float &_number, float _percentage);
    void scaleGif(float _percentage);
    
    // variables
    ofImage myImage;  // variable in object to load each spritesheet
    
    // draw gif parameters
    float x = 0;                    // x-position of gif
    float y = 0;                    // y-position of gif
    float w = 1200;                  // width of gif
    float h = 1200;                  // height of gif
    float xPositionOfSprite = 0;      // x-position of source
    float yPositionOfSprite = 0;      // y-position of source
    float sourceWidth = 600;        // width of source
    float sourceHeight = 600;       // height of source
    
    float incrementAmount = 600;  // size of offset for each image in spritesheet
    int numberOfFrames = 6;       // number of frames in the gif
    
    // timer variables
    int savedTime = 0;
    int totalTime = 200;        // time for each frame of gif in milliseconds
    int currentTime = 0;
    
    // timer 2 variables
    int savedTime2 = 0;
    int totaltime2= 3000;       // time between each frame that scales and moves the image backward
    int currentTime2 = 0;
    
    
    // constructor
    AnimatedGif(string _imagePath, float _x, float _y);
    
private: // place private functions or variables declarations here
};


#endif /* defined(__slideshowDancing__animatedGif__) */
