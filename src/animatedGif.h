//
//  animatedGif.h
//  slideshowDancing
//
//  Created by Andrew Landry on 11/12/14.
//
//

#ifndef __slideshowDancing__animatedGif__
#define __slideshowDancing__animatedGif__

#include "ofMain.h"


class animatedGif {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    
    // from animated gif
    ofImage myImage;
    
    int xPositionOfSprite;
    
    int i;
    int j;
    int incrementAmount;
    int numberOfFrames;
    
    
    
    animatedGif(); // constructor - used to initialize an object, if no properties are passed
    //               the program sets them to the default value
    
private: // place private functions or variables declarations here
    
};


#endif /* defined(__slideshowDancing__animatedGif__) */
