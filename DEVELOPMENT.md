# Week of 04/02
* Experimented with graphics library in open frameworks.
* The default project created, generates an empty window.
* Code written into `draw()` in ofApp.cpp will automatically be rendered when the program is loaded.
* `ofBackground(int)` sets background color of the window. 
* `ofSetColor(int)` sets the color to draw objects in.
* Openframeworks automatically has ofDraw methods that draw pre-programmed shapes.

# Week of 04/09
* General [notes](https://openframeworks.cc/ofBook/chapters/how_of_works.html) on OpenFrameworks
    * `setup()` is run once, and is mainly used to initialize any variables from the header file.
    * `update()` and `draw()` will run on a loop until the end of the program.
    * The background will auto generate, resetting the screen, unless `ofSetBackgroundAuto(false)` is declared in `setup()`.
    * Macros in of, `OF_MOUSE_BUTTON_LEFT`, `OF_MOUSE_BUTTON_RIGHT`, return an `int` indicating if the mouse button has been clicked.
* Experimenting with computer vision in openframeworks.
    * Read through open frameworks [walk through](https://openframeworks.cc/ofBook/chapters/image_processing_computer_vision.html).
* Experimented with [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker) to project.
    * The library uses the computer's webcam and openCV to track the users face.
* [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases) is a program built ontop of [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker)
    * Information is sent from the face tracker via OSC [Open Sound Control](https://github.com/openframeworks/ofBook/blob/master/chapters/game_design/chapter.md#so-what-is-osc-anyway)
* Added [FaceOSC-Templates](https://github.com/CreativeInquiry/FaceOSC-Templates) to project.
    * Is a program that receives the OSC data produced by [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases) and parses it into a more understandable format.