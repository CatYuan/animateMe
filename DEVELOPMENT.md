# Week of 04/02
* Experimented with graphics library in open frameworks.
* The default project created, generates an empty window.
* Code written into draw() in ofApp.cpp will automatically be rendered when the program is loaded.
* ofBackground(int) sets background color of the window. 
* ofSetColor(int) sets the color to draw objects in.
* Openframeworks automatically has ofDraw methods that draw pre-programmed shapes.

# Week of 04/09
* [General notes on OpenFrameworks](https://openframeworks.cc/ofBook/chapters/how_of_works.html)
    * `setup()` is run once, and is mainly used to initialize any variables from the header file.
    * `update()` and `draw()` will run on a loop until the end of the program.
    * The background will auto generate, resetting the screen, unless `ofSetBackgroundAuto(false)` is declared in `setup()`.
    * Macros in of, `OF_MOUSE_BUTTON_LEFT`, `OF_MOUSE_BUTTON_RIGHT`, return an `int` indicating if the mouse button has been clicked.
* Experimenting with computer vision in openframeworks.
    * Read through open frameworks [walk through](https://openframeworks.cc/ofBook/chapters/image_processing_computer_vision.html)
