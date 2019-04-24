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
		ofDrawEllipse(-20, face.eyeLeft * -9, 20, 7);
		ofDrawEllipse(20, face.eyeRight * -9, 20, 7);
		ofDrawEllipse(0, 20, face.mouthWidth * 3, face.mouthHeight * 3);
		ofDrawEllipse(-5, face.nostrils * -1, 7, 3);
		ofDrawEllipse(5, face.nostrils * -1, 7, 3);

		ofSetRectMode(OF_RECTMODE_CENTER);
		ofFill();
		ofDrawRectangle(-20, face.eyebrowLeft * -5, 25, 5);
		ofDrawRectangle(20, face.eyebrowRight * -5, 25, 5);
		ofSetRectMode(OF_RECTMODE_CORNER);
		ofPopMatrix();
	}
}