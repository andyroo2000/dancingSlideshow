//  animatedGif.h
//  slideshowDancing

#ifndef __slideshowDancing__animatedGif__
#define __slideshowDancing__animatedGif__

#include "ofMain.h"


class AnimatedGif {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    
    // from animated gif
    ofImage myImage;
    
    int xPositionOfSprite;
    
    int i;
    float x, y;
    int incrementAmount = 600;
    int numberOfFrames = 6;
    
    
    void setValueX(int _x);
    
    
    
    AnimatedGif(string _imagePath, float _x, float _y); // constructor - used to initialize an object, if no properties are passed
    //               the program sets them to the default value
    

    
private: // place private functions or variables declarations here
};


#endif /* defined(__slideshowDancing__animatedGif__) */
