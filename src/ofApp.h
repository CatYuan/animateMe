#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "Face.h"
#include "Animation.h"

class ofApp : public ofBaseApp{

	public:

		const int FRAME_RATE = 60;		/*The minimum frame rate.*/
		const int PORT = 8338;			/*FaceOSC sends to port 8338 by default.*/
		const int WHITE = 255;			/*Code indicating white in grayscale.*/
		const int NUM_ANIMATIONS = 3;	/*Number of animations available.*/
		const int BASIC_ANIM_CODE = 0;	/*Code indicating basic animation should show.*/
		const int SOUTHPARK_CODE = 1;	/*Code indicating Kyle animation should show.*/
		const int KIRBY_CODE = 2;		/*Code indicating Kirby animation should show.*/

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofxOscReceiver receiver;		/*Receives the data sent from FaceOSC.*/
		Face face;						/*An object representing the data from FaceOSC.*/
		Animation* drawing;				/*Pointer to an animation to draw.*/
		int numMouseClicks;				/*Counter for the number of mouse clicks.*/
};
