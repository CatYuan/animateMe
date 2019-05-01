#include "ofApp.h"
#include "BasicAnimation.h"
#include "SouthparkAnimation.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	// FaceOSC sends to port 8338 by default
	receiver.setup(8338);

	ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
	while (receiver.hasWaitingMessages()) {
		ofxOscMessage message;
		receiver.getNextMessage(message);

		// load face from any FaceOSC messages
		face.parseOSC(message);
	}
	if (face.found > 0) {
		cout << face.toString();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (isSouthparkAnim) {
		SouthparkAnimation anim(face);
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
		isSouthparkAnim = !isSouthparkAnim;
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
