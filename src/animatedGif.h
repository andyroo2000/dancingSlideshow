//  animatedGif.h
//  slideshowDancing

#ifndef __slideshowDancing__animatedGif__
#define __slideshowDancing__animatedGif__

#include "ofMain.h"


class AnimatedGif {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup();
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    ofImage myImage;  // variable in object to load each spritesheet
    
    int xPositionOfSprite = 0;
    
    float x = 0;  // parameter - x-position of gif
    float y = 0;  // parameter - y-position of gif
    int incrementAmount = 600;  // size of offset for each image in spritesheet
    int numberOfFrames = 6;  // number of frames in the gif
    int savedTime = 0;
    int totalTime = 400;  // time for each frame of gif in milliseconds
    int currentTime = 0;
    
    void setValueX(int _x);
    
    // constructor
    AnimatedGif(string _imagePath, float _x, float _y);
    
private: // place private functions or variables declarations here
};


#endif /* defined(__slideshowDancing__animatedGif__) */
