#include "ofApp.h"
#include "animatedGif.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myImage.loadImage("images/png-sprite-sheet.png");
    xPositionOfSprite = 0;
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    i++;
    
    if (i % 20 == 0) {
        if (i > 120) {
            i = 0;
        }
        
        xPositionOfSprite += incrementAmount;
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
    }
    
//    cout << i << '\n';
//    cout << xPositionOfSprite << '\n';

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    
//    myImage.resize(400, 400);
    
    
    myImage.drawSubsection(0, 0, 600, 600, xPositionOfSprite, 0);  // draw first frame
//    myImage.drawSubsection(0, 0, 600, 600, 0, 0);  // draw first frame
//    myImage.drawSubsection(0, 0, 600, 600, 600, 0);  // draw second frame
//    myImage.drawSubsection(0, 0, 600, 600, 1200, 0);  // draw third frame
//    myImage.drawSubsection(0, 0, 600, 600, 1800, 0);  // draw fourth frame
//    myImage.drawSubsection(0, 0, 600, 600, 2400, 0);  // draw fifth frame
//    myImage.drawSubsection(0, 0, 600, 600, 3000, 0);  // draw sixth frame
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // Set 'f' key to toggle fullscreen video
    if (key == 'f' ) {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
