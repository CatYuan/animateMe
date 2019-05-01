#include "KirbyAnimation.h"

KirbyAnimation::KirbyAnimation(Face f) {
	face = f;
}

void KirbyAnimation::drawAnimation() {
	if (face.found > 0) {
		ofPushMatrix();
		ofTranslate(face.posePosition);
		ofScale(face.poseScale, face.poseScale);
		ofSetColor(0);
		ofFill();
		drawLimbs();
		drawFace();
		drawEyes();
		drawMouth();
		ofPopMatrix();
	}
}

void KirbyAnimation::drawLimbs() {
	ofSetColor(PINK_R, PINK_G, PINK_B);
	ofDrawEllipse(-FACE_HEIGHT, ARM_Y_OFFSET, ARM_WIDTH, ARM_HEIGHT);
	ofDrawEllipse(FACE_HEIGHT, ARM_Y_OFFSET, ARM_WIDTH, ARM_HEIGHT);
	ofSetColor(RED_R, RED_G, RED_B);
	ofDrawEllipse(-FEET_X_OFFSET, FEET_Y_OFFSET, FEET_WIDTH, FEET_HEIGHT);
	ofDrawEllipse(FEET_X_OFFSET, FEET_Y_OFFSET, FEET_WIDTH, FEET_HEIGHT);
}

void KirbyAnimation::drawFace() {
	ofSetColor(PINK_R, PINK_G, PINK_B);
	ofSetCircleResolution(CIRCLE_SMOOTHING_FACTOR);
	ofDrawCircle(0, 0, FACE_HEIGHT);
	ofSetColor(DARK_PINK_R, DARK_PINK_G, DARK_PINK_B);
	ofDrawEllipse(-CHEEK_X_OFFSET, CHEEK_Y_OFFSET, CHEEK_WIDTH, CHEEK_HEIGHT);
	ofDrawEllipse(CHEEK_X_OFFSET, CHEEK_Y_OFFSET, CHEEK_WIDTH, CHEEK_HEIGHT);
}

void KirbyAnimation::drawEyes() {
	ofSetColor(NAVY_R, NAVY_G, NAVY_B);
	ofDrawEllipse(-EYE_X_OFFSET, -EYE_Y_OFFSET, EYE_WIDTH, 
		face.eyebrowLeft * EYE_HEIGHT_SCALE_FACTOR);
	ofDrawEllipse(EYE_X_OFFSET, -EYE_Y_OFFSET, EYE_WIDTH, 
		face.eyebrowRight * EYE_HEIGHT_SCALE_FACTOR);

	ofSetColor(WHITE);
	ofDrawEllipse(-EYE_X_OFFSET, -PUPIL_Y_OFFSET, PUPIL_WIDTH, 
		face.eyebrowLeft * PUPIL_HEIGHT_SCALE_FACTOR);
	ofDrawEllipse(EYE_X_OFFSET, -PUPIL_Y_OFFSET, PUPIL_WIDTH, 
		face.eyebrowRight * PUPIL_HEIGHT_SCALE_FACTOR);
}

void KirbyAnimation::drawMouth() {
	ofSetColor(RED_R, RED_G, RED_B);
	ofDrawEllipse(0, MOUTH_Y_OFFSET, face.mouthWidth * MOUTH_WIDTH_SCALE_FACTOR,
		face.mouthHeight * MOUTH_HEIGHT_SCALE_FACTOR);
}