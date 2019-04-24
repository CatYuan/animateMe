#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//a basic animation of the shape of a face
class BasicAnimation : public Animation {

public:

	BasicAnimation(Face f);
	void drawAnimation();

	Face face;
};

