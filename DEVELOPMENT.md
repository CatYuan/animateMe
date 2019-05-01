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
* Experimented with [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker).
    * The library uses the computer's webcam and openCV to track the users face.
* [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases) is a program built ontop of [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker)
    * Information is sent from the face tracker via OSC [Open Sound Control](https://github.com/openframeworks/ofBook/blob/master/chapters/game_design/chapter.md#so-what-is-osc-anyway)
* Added [FaceOSC-Templates](https://github.com/CreativeInquiry/FaceOSC-Templates) to project.
    * Is a program that receives the OSC data produced by [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases) and parses it into a more understandable format.
* Experimented with [ofxFacialBlendShape](https://github.com/iwanao731/ofxFacialBlendShape).
    * The examples in the library fail to build.

# Week of 04/16
* Using [ofGraphics](https://openframeworks.cc/documentation/graphics/ofGraphics/)
    * `ofPushMatrix()` saves the current coordinate system allowing users to develop specific movements in some graphic objects. `ofPopMatrix()` is called at the end.
    * `ofTranslate(point)` moves the coordinate system to position of point and makes that point zero.
    * `ofSetColor()` sets the color. One parameter sets the gray scale. Three parameters uses the RGB color system.
    * `ofFill()` and `ofNoFill()` dictates whether or not the drawn shapes are filled or not.
* Preprogrammed shapes in [ofGraphics](https://openframeworks.cc/documentation/graphics/ofGraphics/) include:
    * `ofDrawBezier()` - void ofDrawBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
    * `ofDrawCircle()` - void ofDrawCircle(float x, float y, float radius)
    * `ofDrawCurve()` - void ofDrawCurve(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
    * `ofDrawEllipse()` - void ofDrawEllipse(float x, float y, float width, float height)
    * `ofDrawRectangle()` - void ofDrawRectangle(float x1, float y1, float w, float h)
    * `ofDrawTriangle()` - void ofDrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
* Created an `animation` [interface](https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm) using [pure virtual functions](https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm).
    * This allows for multiple different implementations of animations.
### Goal For Next Week:
* Add other implementations of animations.
* Allow for the user to toggle between the different animations by clicking on the screen.

# Week of 4/23
* Animated Kyle from Southpark and Kirby.
* Added interactivity. Clicking the left mouse button shuffles through the different animations available.
    * Uses the `mousePressed()` function.