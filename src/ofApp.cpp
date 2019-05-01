#include "ofApp.h"
#include "BasicAnimation.h"
#include "SouthparkAnimation.h"
#include "KirbyAnimation.h"

//--------------------------------------------------------------
void ofApp::setup(){
	numMouseClicks = 0;
	ofSetVerticalSync(true);
	ofSetFrameRate(FRAME_RATE);
	receiver.setup(PORT);
	ofBackground(WHITE);
}

//--------------------------------------------------------------
void ofApp::update(){
	while (receiver.hasWaitingMessages()) {
		ofxOscMessage message;
		receiver.getNextMessage(message);
		face.parseOSC(message);
	}
	if (face.found > 0) {
		cout << face.toString();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (numMouseClicks % NUM_ANIMATIONS == SOUTHPARK_CODE) {
		SouthparkAnimation anim(face);
		drawing = &anim;
		drawing->drawAnimation();
	} else if (numMouseClicks % NUM_ANIMATIONS == KIRBY_CODE) {
		KirbyAnimation anim(face);
		drawing = &anim;
		drawing->drawAnimation();
	} else {
		BasicAnimation anim(face);
		drawing = &anim;
		drawing->drawAnimation();
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
	if (button == OF_MOUSE_BUTTON_LEFT) {
		numMouseClicks++;
	}
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
