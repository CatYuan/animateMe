#include "SouthparkAnimation.h"

SouthparkAnimation::SouthparkAnimation(Face f) {
	face = f;
}

void SouthparkAnimation::drawAnimation() {
	if (face.found > 0) {
		ofPushMatrix();
		ofTranslate(face.posePosition);
		ofScale(face.poseScale, face.poseScale);
		ofSetColor(0);
		ofFill();
		drawFace();
		drawEyes();
		drawMouth();
		drawHat();
		ofPopMatrix();
	}
}

void SouthparkAnimation::drawFace() {
	ofSetColor(PEACH_R, PEACH_G, PEACH_B);
	ofSetCircleResolution(CIRCLE_SMOOTHING_FACTOR);
	ofDrawCircle(0, 0, FACE_HEIGHT);
}

void SouthparkAnimation::drawEyes() {
	ofSetColor(WHITE);
	ofDrawCircle(-EYE_X_OFFSET, -EYE_Y_OFFSET, 
		face.eyebrowLeft * EYE_WIDTH_SCALE_FACTOR);
	ofDrawCircle(EYE_X_OFFSET, -EYE_Y_OFFSET, 
		face.eyebrowRight * EYE_WIDTH_SCALE_FACTOR);

	ofSetColor(0);
	ofDrawCircle(-EYE_X_OFFSET, -EYE_Y_OFFSET, 
		face.eyebrowLeft * PUPIL_WIDTH_SCALE_FACTOR);
	ofDrawCircle(EYE_X_OFFSET, -EYE_Y_OFFSET, 
		face.eyebrowRight * PUPIL_WIDTH_SCALE_FACTOR);
}

void SouthparkAnimation::drawMouth() {
	ofSetColor(0);
	ofDrawEllipse(0, MOUTH_Y_OFFSET, face.mouthWidth * MOUTH_WIDTH_SCALE_FACTOR, 
		face.mouthHeight * MOUTH_HEIGHT_SCALE_FACTOR);
}

void SouthparkAnimation::drawHat() {
	ofSetColor(LIGHT_GREEN_R, LIGHT_GREEN_G, LIGHT_GREEN_B);
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofDrawRectRounded(0, -HAT_Y_OFFSET, FACE_HEIGHT + FACE_HEIGHT, 
		HAT_HEIGHT, HAT_EDGE_RADIUS);
	ofDrawEllipse(-FACE_HEIGHT, -EYE_Y_OFFSET, EARMUFF_WIDTH, EARMUFF_HEIGHT);
	ofDrawEllipse(FACE_HEIGHT, -EYE_Y_OFFSET, EARMUFF_WIDTH, EARMUFF_HEIGHT);
	ofSetColor(DARK_GREEN_R, DARK_GREEN_G, DARK_GREEN_B);
	ofDrawRectangle(0, -VISOR_Y_OFFSET,
		FACE_HEIGHT + FACE_HEIGHT - VISOR_SCALE_FACTOR, VISOR_HEIGHT);
}