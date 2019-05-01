#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//An animation of Kirby.
class KirbyAnimation : public Animation {

public:

	//---------CONSTANTS-------------

	/*The code that represents white in the grayscale.*/
	const int WHITE = 255;

	/*The red code for pink in the RGB model.*/
	const int PINK_R = 255;

	/*The green code for pink in the RGB model.*/
	const int PINK_G = 161;

	/*The blue code for pink in the RGB model.*/
	const int PINK_B = 211;

	/*The red code for dark pink in the RGB model.*/
	const int DARK_PINK_R = 255;

	/*The green code for dark pink in the RGB model.*/
	const int DARK_PINK_G = 82;

	/*The blue code for dark pink in the RGB model.*/
	const int DARK_PINK_B = 157;

	/*The red code for red in the RGB model.*/
	const int RED_R = 206;

	/*The green code for red in the RGB model.*/
	const int RED_G = 21;

	/*The blue code for red in the RGB model.*/
	const int RED_B = 26;

	/*The red code for navy in the RGB model.*/
	const int NAVY_R = 1;

	/*The green code for navy in the RGB model.*/
	const int NAVY_G = 23;

	/*The blue code for navy in the RGB model.*/
	const int NAVY_B = 132;

	/*The factor to smooth the circle by.*/
	const int CIRCLE_SMOOTHING_FACTOR = 50;

	/*The amount to offset the eyes by in the x direction.*/
	const int EYE_X_OFFSET = 15;

	/*The amount to offset the eyes by in the y direction.*/
	const int EYE_Y_OFFSET = 10;

	/*The width of the eye.*/
	const int EYE_WIDTH = 15;

	/*The amount to scale the heigth of the eye by.*/
	const int EYE_HEIGHT_SCALE_FACTOR = 4;

	/*The amount to offset the pupil by in the y direction.*/
	const int PUPIL_Y_OFFSET = 13;

	/*The width of the pupil.*/
	const int PUPIL_WIDTH = 5;

	/*The amount to scale the height of the pupil by.*/
	const float PUPIL_HEIGHT_SCALE_FACTOR = 1.2;

	/*The amount to offset the mouth by in the y direction.*/
	const int MOUTH_Y_OFFSET = 20;

	/*The amount to scale the width of the mouth by.*/
	const int MOUTH_WIDTH_SCALE_FACTOR = 1;

	/*The amount to scale the height of the mouth by.*/
	const int MOUTH_HEIGHT_SCALE_FACTOR = 3;

	/*The height of face.*/
	const int FACE_HEIGHT = 60;

	/*The amount to offset the cheek by in the x direction.*/
	const int CHEEK_X_OFFSET = 25;

	/*The amount to offset the cheek by in the y direction.*/
	const int CHEEK_Y_OFFSET = 15;

	/*The width of the cheek.*/
	const int CHEEK_WIDTH = 15;

	/*The height of the cheek.*/
	const int CHEEK_HEIGHT = 9;

	/*The amount to offset the arms by in the y direction.*/
	const int ARM_Y_OFFSET = 10;

	/*The width of the arms.*/
	const int ARM_WIDTH = 35;

	/*The height of the arms.*/
	const int ARM_HEIGHT = 30;

	/*The amount to offset the feet by in the x direction.*/
	const int FEET_X_OFFSET = 40;

	/*The amount to offset the feet by in the y direction.*/
	const int FEET_Y_OFFSET = 50;

	/*The width of the feet.*/
	const int FEET_WIDTH = 50;

	/*The height of the feet.*/
	const int FEET_HEIGHT = 35;

	//---------Methods-------------

	/* A constructor for the Kirby animation.
	   This takes a Face and stores the data.
	   @param f - The Face whose data is stored.
	*/
	KirbyAnimation(Face f);

	/*Draws the animation onto the screen.*/
	void drawAnimation();

private:

	/*Draws the limbs onto the screen.*/
	void drawLimbs();

	/*Draws the face onto the screen.*/
	void drawFace();

	/*Draws the eyes onto the screen.*/
	void drawEyes();

	/*Draws the mouth onto the screen.*/
	void drawMouth();

	//---------Methods-------------

	/*Holds the data of the Face passed into the constructor.*/
	Face face;
};