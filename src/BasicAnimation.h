#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a basic animation of the shape of a face
class BasicAnimation : public Animation {

public:

	const int CIRCLE_SMOOTHING_FACTOR = 50;
	const int EYE_X_OFFSET = 20;
	const int EYE_Y_OFFSET = 27;
	const int EYE_WIDTH = 20;
	const int EYE_SCALE_FACTOR = 2;
	const int MOUTH_Y_OFFSET = 20;
	const int MOUTH_SCALE_FACTOR = 3;
	const int NOSE_X_OFFSET = 5;
	const int NOSE_Y_OFFSET = 7;
	const int NOSE_HEIGHT = 3;
	const int FACE_WIDTH = 80;
	const int FACE_HEIGHT = 100;
	const int EYEBROW_X_OFFSET = 20;
	const int EYEBROW_SCALE_FACTOR = 5;
	const int EYEBROW_WIDTH = 25;
	const int EYEBROW_HEIGHT = 5;

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