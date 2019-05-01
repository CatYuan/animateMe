#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a basic animation of the shape of a face
class KirbyAnimation : public Animation {

public:

	const int WHITE = 255;
	const int PINK_R = 255;
	const int PINK_G = 161;
	const int PINK_B = 211;
	const int DARK_PINK_R = 255;
	const int DARK_PINK_G = 82;
	const int DARK_PINK_B = 157;
	const int RED_R = 206;
	const int RED_G = 21;
	const int RED_B = 26;
	const int NAVY_R = 1;
	const int NAVY_G = 23;
	const int NAVY_B = 132;
	const int CIRCLE_SMOOTHING_FACTOR = 50;
	const int EYE_X_OFFSET = 15;
	const int EYE_Y_OFFSET = 10;
	const int EYE_WIDTH = 15;
	const int EYE_HEIGHT_SCALE_FACTOR = 4;
	const int PUPIL_Y_OFFSET = 13;
	const int PUPIL_WIDTH = 5;
	const float PUPIL_HEIGHT_SCALE_FACTOR = 1.2;
	const int MOUTH_Y_OFFSET = 20;
	const int MOUTH_WIDTH_SCALE_FACTOR = 1;
	const int MOUTH_HEIGHT_SCALE_FACTOR = 3;
	const int FACE_HEIGHT = 60;
	const int CHEEK_X_OFFSET = 25;
	const int CHEEK_Y_OFFSET = 15;
	const int CHEEK_WIDTH = 15;
	const int CHEEK_HEIGHT = 9;
	const int ARM_Y_OFFSET = 10;
	const int ARM_WIDTH = 35;
	const int ARM_HEIGHT = 30;
	const int FEET_X_OFFSET = 40;
	const int FEET_Y_OFFSET = 50;
	const int FEET_WIDTH = 50;
	const int FEET_HEIGHT = 35;

	KirbyAnimation(Face f);
	void drawAnimation();

private:

	void drawLimbs();
	void drawFace();
	void drawEyes();
	void drawMouth();

	Face face;
};