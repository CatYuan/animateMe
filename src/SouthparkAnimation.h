#pragma once

#include "ofMain.h"
#include "Animation.h"
#include "Face.h"

//An animation of Kyle from Southpark.
class SouthparkAnimation : public Animation {

public:

	//---------CONSTANTS-------------

	/*The code for white in the grayscale.*/
	const int WHITE = 255;
	
	/*The red code for peach in the RGB model.*/
	const int PEACH_R = 254;
	
	/*The green code for peach in the RGB model.*/
	const int PEACH_G = 220;
	
	/*The blue code for peach in the RGB model.*/
	const int PEACH_B = 182;
	
	/*The red code for light green in the RGB model.*/
	const int LIGHT_GREEN_R = 88;
	
	/*The green code for light green in the RGB model.*/
	const int LIGHT_GREEN_G = 200;
	
	/*The blue code for light green in the RGB model.*/
	const int LIGHT_GREEN_B = 38;
	
	/*The red code for dark green in the RGB model.*/
	const int DARK_GREEN_R = 34;
	
	/*The green code for dark green in the RGB model.*/
	const int DARK_GREEN_G = 156;
	
	/*The blue code for dark green in the RGB model.*/
	const int DARK_GREEN_B = 57;
	
	/*Factor to smooth the circle by.*/
	const int CIRCLE_SMOOTHING_FACTOR = 50;
	
	/*The amount to offset the eyes by in the x direction.*/
	const int EYE_X_OFFSET = 17;

	/*The amount to offset the eyes by in the y direction.*/
	const int EYE_Y_OFFSET = 5;

	/*The amount to scale the width of the eyes by.*/
	const float EYE_WIDTH_SCALE_FACTOR = 2.6;

	/*The amount to scale the pupils by.*/
	const float PUPIL_WIDTH_SCALE_FACTOR = 0.7;

	/*The amount to offset the mouth by in the y direction.*/
	const int MOUTH_Y_OFFSET = 30;

	/*The amount to scale the width of the mouth by.*/
	const int MOUTH_WIDTH_SCALE_FACTOR = 2;

	/*The amount to scale the height of the mouth by.*/
	const int MOUTH_HEIGHT_SCALE_FACTOR = 5;

	/*The radius of the face.*/
	const int FACE_RADIUS = 60;

	/*The amount to offset the hat by in the y direction.*/
	const int HAT_Y_OFFSET = 55;

	/*The height of the hat.*/
	const int HAT_HEIGHT = 45;

	/*The radius to round the edges of the hat by.*/
	const int HAT_EDGE_RADIUS = 5;

	/*The height of the earmuffs.*/
	const int EARMUFF_HEIGHT = 65;

	/*The width of the earmuffs.*/
	const int EARMUFF_WIDTH = 20;

	/*The amount to offset the visor by in the y direction.*/
	const int VISOR_Y_OFFSET = 40;

	/*The height of the visor.*/
	const int VISOR_HEIGHT = 30;

	/*The amount to scale the visor by.*/
	const int VISOR_SCALE_FACTOR = 10;

	//---------METHODS-------------

	/* A constructor for the southpark animation.
	   This takes in a Face and stores the data.
	   @param f - The Face whose data is stored.
	*/
	SouthparkAnimation(Face f);

	/* Draws the animation onto the screen.*/
	void drawAnimation();

private:

	/* Draws the face onto the screen.*/
	void drawFace();

	/*Draws the eyes onto the screen.*/
	void drawEyes();

	/*Draws the hat onto the screen.*/
	void drawHat();

	/*Draws the mouth onto the screen.*/
	void drawMouth();

	//---------INSTANCE VARIABLES-------------

	/*Holds the data of the Face that is passed into the constructor.*/
	Face face;
};