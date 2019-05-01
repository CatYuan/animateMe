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
		drawEyes();
		drawMouth();
		drawNose();
		drawFace();
		drawEyebrows();
		ofPopMatrix();
	}
}

void BasicAnimation::drawEyes() {
	ofDrawEllipse(-EYE_X_OFFSET, -EYE_Y_OFFSET, EYE_WIDTH,
		face.eyeLeft * EYE_SCALE_FACTOR);
	ofDrawEllipse(EYE_X_OFFSET, -EYE_Y_OFFSET, EYE_WIDTH,
		face.eyeRight * EYE_SCALE_FACTOR);
}

void BasicAnimation::drawEyebrows() {
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofFill();
	ofDrawRectangle(-EYEBROW_X_OFFSET, face.eyebrowLeft * -EYEBROW_SCALE_FACTOR,
		EYEBROW_WIDTH, EYEBROW_HEIGHT);
	ofDrawRectangle(EYEBROW_X_OFFSET, face.eyebrowRight * -EYEBROW_SCALE_FACTOR,
		EYEBROW_WIDTH, EYEBROW_HEIGHT);
	ofSetRectMode(OF_RECTMODE_CORNER);
}

void BasicAnimation::drawMouth() {
	ofDrawEllipse(0, MOUTH_Y_OFFSET, face.mouthWidth * MOUTH_SCALE_FACTOR,
		face.mouthHeight * MOUTH_SCALE_FACTOR);
}

void BasicAnimation::drawNose() {
	ofDrawEllipse(-NOSE_X_OFFSET, -NOSE_Y_OFFSET, face.nostrils, NOSE_HEIGHT);
	ofDrawEllipse(NOSE_X_OFFSET, -NOSE_Y_OFFSET, face.nostrils, NOSE_HEIGHT);
}

void BasicAnimation::drawFace() {
	ofSetCircleResolution(CIRCLE_SMOOTHING_FACTOR);
	ofDrawEllipse(0, 0, FACE_WIDTH, FACE_HEIGHT);
}