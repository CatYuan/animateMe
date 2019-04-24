#include "BasicAnimation.h"

BasicAnimation::BasicAnimation(Face f){
	face = f;
}

void BasicAnimation::drawAnimation() {
	if (face.found > 0) {
		ofPushMatrix();
		ofTranslate(face.posePosition);
		ofScale(face.poseScale, face.poseScale);

		ofSetColor(0);
		ofNoFill();
		ofDrawEllipse(-20, -27, 20, face.eyeLeft * 2);
		ofDrawEllipse(20, -27, 20, face.eyeRight * 2);
		ofDrawEllipse(0, 20, face.mouthWidth * 3, face.mouthHeight * 3);
		ofDrawEllipse(-5, -7, face.nostrils, 3);
		ofDrawEllipse(5, -7, face.nostrils, 3);
		ofSetCircleResolution(50);
		ofDrawEllipse(0, 0, 80, 100);

		ofSetRectMode(OF_RECTMODE_CENTER);
		ofFill();
		ofDrawRectangle(-20, face.eyebrowLeft * -5, 25, 5);
		ofDrawRectangle(20, face.eyebrowRight * -5, 25, 5);
		ofSetRectMode(OF_RECTMODE_CORNER);
		ofPopMatrix();
	}
}