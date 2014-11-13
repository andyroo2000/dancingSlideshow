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
    
    // variables
    ofImage myImage;  // variable in object to load each spritesheet
    float x = 0;  // parameter - x-position of gif
    float y = 0;  // parameter - y-position of gif
    int xPositionOfSprite = 0;
    int incrementAmount = 600;  // size of offset for each image in spritesheet
    int numberOfFrames = 6;  // number of frames in the gif
    int savedTime = 0;
    int totalTime = 200;  // time for each frame of gif in milliseconds
    int currentTime = 0;
    
    // constructor
    AnimatedGif(string _imagePath, float _x, float _y);
    
private: // place private functions or variables declarations here
};


#endif /* defined(__slideshowDancing__animatedGif__) */
