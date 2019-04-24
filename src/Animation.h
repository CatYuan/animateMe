#pragma once

#include "ofMain.h"

class Animation {

public:

	virtual ~Animation() = 0;
	virtual void drawAnimation() = 0;
};