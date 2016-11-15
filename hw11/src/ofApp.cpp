#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    camWidth = ofGetWindowWidth();
    camHeight = ofGetWindowHeight();
    
    vidGrabber.setDeviceID(0);
    //    vidGrabber.setDesiredFrameRate(29.97);//if you get an error, you may need to change setDesiredFrameRate to 29.97
    vidGrabber.initGrabber(camWidth,camHeight);
}

//--------------------------------------------------------------
void ofApp::update(){
   vidGrabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i=0; i<camWidth; i+=20){
        for (int j=0; j<camHeight; j+=20){
            ofSetColor(vidGrabber.getPixels().getColor(i,j));
            ofDrawCircle(i, j, 10);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
