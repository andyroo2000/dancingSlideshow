#include "ofApp.h"
#include "animatedGif.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSeedRandom();
    getImagePaths();
    
    // Get the center point of the screen for placing new images
    ofSetRectMode(OF_RECTMODE_CENTER); //set rectangle mode to the center
    screenWidth = ofGetScreenWidth();
    screenHeight = ofGetScreenHeight();
    screenVerticalCenter = 960;
    screenHorizontalCenter = 540;
    
    setupNewImages(15);
    

    
    setupAllGifs();
}

//--------------------------------------------------------------
void ofApp::update(){
    launchNewImage();
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
    int imageIndexSize = imageIndex.size();
    for (int i = 0; i < imageIndexSize; i++){
        gif[i]->update();
    }
}

//--------------------------------------------------------------
void ofApp::drawAllGifs() {
    // run draw function on each gif instance
    int imageIndexSize = imageIndex.size();
    for (int i = 0; i < imageIndexSize; i++){
        // draw the gifs in the order of the deque so that the new images are always drawn on top of the older images
        gif[imageIndex[i]]->draw();
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
void ofApp::launchNewImage() {
    currentTimeMain = ofGetElapsedTimeMillis();
    int passedTime = currentTimeMain - savedTimeMain;
    int screenHeightCenter = ofGetScreenHeight() / 2;

    if (passedTime > totalTimeMain) {
        imageIndex.push_back(index);
        delete gif[index];
        getImagePaths();  // refresh the file list and numOfImages
        gif[index] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), screenHeightCenter);
        
//        cout << "index: " << index << '\n';
//        cout << "countToMaxImages: " << countToMaxImages << '\n';
        
        if (countToMaxImages <= numOfImagesToDisplay) {
            countToMaxImages++;
        } else {
            imageIndex.pop_front();
        }
        
        if (index < indexUpperLimit) {
            index++;
        } else {
            index = 0;
        }
        savedTimeMain = currentTimeMain;
    }
    
    // print contents of imageIndex deque to the console
//    int vectorSize = imageIndex.size();
//    for (int i = 0; i < vectorSize; i++) {
//        cout << imageIndex[i] << '\n';
//    }
//    cout << '\n';

    
}

//--------------------------------------------------------------
void ofApp::setupNewImages(int numberOfImages) {
    for (int i = 0; i < numberOfImages; i++) {
        gif[i] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    }
}




