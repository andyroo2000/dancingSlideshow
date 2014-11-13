#include "ofApp.h"
#include "animatedGif.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gif[0] = new AnimatedGif("images/png-sprite-sheet.png", 0, 0);
    gif[1] = new AnimatedGif("images/png-sprite-sheet-copy.png", 50, 0);
    gif[2] = new AnimatedGif("images/png-sprite-sheet.png", 100, 0);
    gif[3] = new AnimatedGif("images/png-sprite-sheet.png", 150, 0);
    gif[4] = new AnimatedGif("images/png-sprite-sheet.png", 200, 0);
    gif[5] = new AnimatedGif("images/png-sprite-sheet.png", 250, 0);
    gif[6] = new AnimatedGif("images/png-sprite-sheet.png", 300, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    updateAllGifs();

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
//    ofSetColor(255, 255, 255);
    
    drawAllGifs();
    

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

//--------------------------------------------------------------
void ofApp::drawAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImages; i++){
        gif[i]->draw();
    }
}

//--------------------------------------------------------------
void ofApp::updateAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImages; i++){
        gif[i]->update();
    }
}

