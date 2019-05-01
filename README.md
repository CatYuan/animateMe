# Final Project
## Animate Me
#### Description of Project:
* Similar to a SnapChat filter. 
* The program will use facial recognition to identify the user's face and overlay an animation over the face of the user. 
* The user is then able to control this animation by moving their own face. The facial expressions of the animation should follow that of the users. Similarly, the position of the animation on the screen will follow that of the user as long as they are within the view of the camera. To cycle through the different animations available, click the left mouse button.
#### Libraries and Add-Ons Used
* [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker): This add-on uses opencv and other libraries to detect the face of the user. It can also track the movement of the facial features of the user. For example, if the user blinks or smiles, the program can detect and identify these changes.
* [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases): Wrapper around [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker) that collects data on the movement of the users face and returns it in the form of [Open Sound Control](https://github.com/openframeworks/ofBook/blob/master/chapters/game_design/chapter.md#so-what-is-osc-anyway).
* [FaceOSC-Templates](https://github.com/CreativeInquiry/FaceOSC-Templates): parses the OSC data delivered by [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases).