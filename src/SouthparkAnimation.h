#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a more complicated animation of the shape of a face
class SouthparkAnimation : public Animation {

public:

	const int WHITE = 255;
	const int PEACH_R = 254;
	const int PEACH_G = 220;
	const int PEACH_B = 182;
	const int LIGHT_GREEN_R = 88;
	const int LIGHT_GREEN_G = 200;
	const int LIGHT_GREEN_B = 38;
	const int DARK_GREEN_R = 34;
	const int DARK_GREEN_G = 156;
	const int DARK_GREEN_B = 57;
	const int CIRCLE_SMOOTHING_FACTOR = 50;
	const int EYE_X_OFFSET = 17;
	const int EYE_Y_OFFSET = 5;
	const float EYE_WIDTH_SCALE_FACTOR = 2.6;
	const float PUPIL_WIDTH_SCALE_FACTOR = 0.7;
	const int MOUTH_Y_OFFSET = 30;
	const int MOUTH_WIDTH_SCALE_FACTOR = 2;
	const int MOUTH_HEIGHT_SCALE_FACTOR = 5;
	const int FACE_HEIGHT = 60;
	const int HAT_Y_OFFSET = 55;
	const int HAT_HEIGHT = 45;
	const int HAT_EDGE_RADIUS = 5;
	const int EARMUFF_HEIGHT = 65;
	const int EARMUFF_WIDTH = 20;
	const int VISOR_Y_OFFSET = 40;
	const int VISOR_HEIGHT = 30;
	const int VISOR_SCALE_FACTOR = 10;

	SouthparkAnimation(Face f);
	void drawAnimation();

private:

	void drawFace();
	void drawEyes();
	void drawHat();
	void drawMouth();

	Face face;
};