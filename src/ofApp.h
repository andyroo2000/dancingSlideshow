#pragma once

#include "ofMain.h"
#include "animatedGif.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void setupNewImages(int numberOfImages);
    void drawMovie();
    
    void setupAllGifs();
    void drawAllGifs();
    void updateAllGifs();
    void getImagePaths();
    void setNewRandomImage(int index);
    void launchNewImage();
    
    int numOfImages = 0;
    int numOfImagesToDisplay = 10;
    int countToMaxImages = 0;
    
    
    // timer variables
    int savedTimeMain = 0;
    int totalTimeMain = 4000;  // time to wait before launching a new image (in milliseconds)
    int currentTimeMain = 0;
    
    int index = 0;
    int indexUpperLimit = 10;
    
    float screenWidth = 0;
    float screenHeight = 0;
    float screenVerticalCenter = 0;
    float screenHorizontalCenter = 0;
    
    ofDirectory imageDirectory;
    
    vector<string>imagePaths;
    deque<int> imageIndex;

private:
    AnimatedGif *gif[11];
};
