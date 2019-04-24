#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

class BasicAnimation : public Animation {

public:

	BasicAnimation(Face f);
	void drawAnimation();

	Face face;
};

