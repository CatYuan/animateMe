#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a more complicated animation of the shape of a face
class SouthparkAnimation : public Animation {

public:

	int WHITE = 255;
	int PEACH_R = 254;
	int PEACH_G = 220;
	int PEACH_B = 182;
	int LIGHT_GREEN_R = 88;
	int LIGHT_GREEN_G = 200;
	int LIGHT_GREEN_B = 38;
	int DARK_GREEN_R = 34;
	int DARK_GREEN_G = 156;
	int DARK_GREEN_B = 57;
	int CIRCLE_SMOOTHING_FACTOR = 50;
	int EYE_X_OFFSET = 17;
	int EYE_Y_OFFSET = 5;
	int EYE_WIDTH = 20;
	int PUPIL_WIDTH = 5;
	int MOUTH_Y_OFFSET = 30;
	int MOUTH_WIDTH_SCALE_FACTOR = 2;
	int MOUTH_HEIGHT_SCALE_FACTOR = 5;
	int FACE_HEIGHT = 60;
	int HAT_Y_OFFSET = 55;
	int HAT_HEIGHT = 45;
	int HAT_EDGE_RADIUS = 5;
	int EARMUFF_HEIGHT = 65;
	int EARMUFF_WIDTH = 20;
	int VISOR_Y_OFFSET = 40;
	int VISOR_HEIGHT = 30;
	int VISOR_SCALE_FACTOR = 10;

	SouthparkAnimation(Face f);
	void drawAnimation();

private:

	void drawFace();
	void drawEyes();
	void drawHat();
	void drawMouth();

	Face face;
};