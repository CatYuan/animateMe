#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a basic animation of the shape of a face
class BasicAnimation : public Animation {

public:

	int CIRCLE_SMOOTHING_FACTOR = 50;
	int EYE_X_OFFSET = 20;
	int EYE_Y_OFFSET = 27;
	int EYE_WIDTH = 20;
	int EYE_SCALE_FACTOR = 2;
	int MOUTH_Y_OFFSET = 20;
	int MOUTH_SCALE_FACTOR = 3;
	int NOSE_X_OFFSET = 5;
	int NOSE_Y_OFFSET = 7;
	int NOSE_HEIGHT = 3;
	int FACE_WIDTH = 80;
	int FACE_HEIGHT = 100;
	int EYEBROW_X_OFFSET = 20;
	int EYEBROW_SCALE_FACTOR = 5;
	int EYEBROW_WIDTH = 25;
	int EYEBROW_HEIGHT = 5;

	BasicAnimation(Face f);
	void drawAnimation();

private:

	void drawEyes();
	void drawMouth();
	void drawNose();
	void drawEyebrows();
	void drawFace();

	Face face;
};