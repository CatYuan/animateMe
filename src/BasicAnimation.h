#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//A basic animation of the shape of a face.
class BasicAnimation : public Animation {

public:

	//---------CONSTANTS-------------

	/*The factor to smooth the circle by.*/
	const int CIRCLE_SMOOTHING_FACTOR = 50;

	/*The amount to offset the eyes by in the x direction.*/
	const int EYE_X_OFFSET = 20;

	/*The amount to offset the eyes by in the y direction.*/
	const int EYE_Y_OFFSET = 27;

	/*The width of the eye.*/
	const int EYE_WIDTH = 20;

	/*The amount to scale the eye by.*/
	const int EYE_SCALE_FACTOR = 2;

	/*The amount to offset the mouth by in the y direction.*/
	const int MOUTH_Y_OFFSET = 20;

	/*The amount to scale the mouth by.*/
	const int MOUTH_SCALE_FACTOR = 3;

	/*The amount to offset the nose by in the x direction.*/
	const int NOSE_X_OFFSET = 5;

	/*The amount to offset the nose by in the y direction.*/
	const int NOSE_Y_OFFSET = 7;

	/*The height of the nose.*/
	const int NOSE_HEIGHT = 3;

	/*The width of the face.*/
	const int FACE_WIDTH = 80;

	/*The height of the face.*/
	const int FACE_HEIGHT = 100;

	/*The amount to offset the eyebrows by in the x direction.*/
	const int EYEBROW_X_OFFSET = 20;

	/*The amount to scale the eyebrows by.*/
	const int EYEBROW_SCALE_FACTOR = 5;

	/*The width of the eyebrows.*/
	const int EYEBROW_WIDTH = 25;

	/*The height of the eyebrows.*/
	const int EYEBROW_HEIGHT = 5;

	//---------METHODS-------------

	/* A constructor for the basic animation.
	   This takes a Face and stores the data.
	   @param f - The Face whose data is stored.
	*/
	BasicAnimation(Face f);

	/*Draws the animation onto the screen.*/
	void drawAnimation();

private:

	/*Draws the eyes onto the screen.*/
	void drawEyes();

	/*Draws the mouth onto the screen.*/
	void drawMouth();

	/*Draws the nose onto the screen.*/
	void drawNose();

	/*Draws the eyebrows onto the screen.*/
	void drawEyebrows();

	/*Draws the face onto the screen.*/
	void drawFace();

	//---------INSTANCE VARIABLES-------------

	/*Holds the data of the Face that is passed into the constructor.*/
	Face face;
};