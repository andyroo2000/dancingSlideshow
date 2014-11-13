#include "ofApp.h"
#include "animatedGif.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSeedRandom();
    getImagePaths();
    
    ofSetRectMode(OF_RECTMODE_CENTER); //set rectangle mode to the center
    screenWidth = ofGetScreenWidth() / 2;
    screenHeight = ofGetScreenHeight() / 2;
    
    cout << screenWidth;
    cout << screenHeight;
    
    gif[0] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], screenWidth, screenHeight);
    gif[1] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 50, 0);
    gif[2] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 100, 0);
    gif[3] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 150, 0);
    gif[4] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 200, 0);
    gif[5] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 250, 0);
    gif[6] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], 300, 0);
    
    setupAllGifs();
}

//--------------------------------------------------------------
void ofApp::update(){
    updateAllGifs();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
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
void ofApp::setupAllGifs() {
    // run setup function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->setup();
    }
}


//--------------------------------------------------------------
void ofApp::updateAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->update();
    }
}

//--------------------------------------------------------------
void ofApp::drawAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->draw();
    }
}

//--------------------------------------------------------------
void ofApp::getImagePaths() {
    numOfImages = imageDirectory.listDir("images");
    
    for (int i = 0; i < numOfImages; i++) {
        imagePaths.push_back(imageDirectory.getPath(i));
    }
}

//--------------------------------------------------------------
void ofApp::setNewRandomImage(int index) {
    numOfImages = imageDirectory.listDir("images");
    
    for (int i = 0; i < numOfImages; i++) {
        imagePaths.push_back(imageDirectory.getPath(i));
    }
    
    gif[index]->setImagePath(imagePaths[ofRandom(numOfImages)]);
    
}

//--------------------------------------------------------------
void ofApp::getPercentOfNumber(float _number, float _percentage) {
    return _number * (_percentage * .01);
}





