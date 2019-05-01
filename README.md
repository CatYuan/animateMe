# Final Project
## Animate Me
#### Description of Project:
* Similar to a SnapChat filter. 
* The program will use facial recognition to identify the user's face and overlay an animation over the face of the user. 
* The user is then able to control this animation by moving their own face. The facial expressions of the animation should follow that of the users. Similarly, the position of the animation on the screen will follow that of the user as long as they are within the view of the camera. To cycle through the different animations available, click the left mouse button.
#### How to use Program:
* Running the program: 
  * Download [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases).
  * Clone **AnimateMe** onto the computer.
  * Run the **FaceOSC** program located in the `bin` folder.
  * Run **AnimateMe** while **FaceOSC** is running.
* Using the program:
  * Clicking the left mouse button will shuffle through the available animations.
  * Moving the head, mouth, eyebrows, and nose will affect the animations.
#### Libraries and Add-Ons Used
* [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker): This add-on uses opencv and other libraries to detect the face of the user. It can also track the movement of the facial features of the user. For example, if the user blinks or smiles, the program can detect and identify these changes.
* [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases): Wrapper around [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker) that collects data on the movement of the users face and returns it in the form of [Open Sound Control](https://github.com/openframeworks/ofBook/blob/master/chapters/game_design/chapter.md#so-what-is-osc-anyway).
* [FaceOSC-Templates](https://github.com/CreativeInquiry/FaceOSC-Templates): parses the OSC data delivered by [FaceOSC](https://github.com/kylemcdonald/ofxFaceTracker/releases).
![Basic Animation demonstration](https://user-images.githubusercontent.com/42955901/57010065-4d858680-6bc0-11e9-9d97-96e3c4e50b0a.png)
![Basic Animation demonstration](https://user-images.githubusercontent.com/42955901/57010097-79a10780-6bc0-11e9-858b-5ef0284e4dc2.png)
![Southpark Kyle demonstration](https://user-images.githubusercontent.com/42955901/57010107-86256000-6bc0-11e9-880f-e7484d9142b4.png)
![Southpark Kyle demonstration](https://user-images.githubusercontent.com/42955901/57010113-963d3f80-6bc0-11e9-8a50-468bb607c18a.png)
![Kirby animation demonstration](https://user-images.githubusercontent.com/42955901/57010121-a3f2c500-6bc0-11e9-9d46-f9e5331c198f.png)
![Kirby animation demonstration](https://user-images.githubusercontent.com/42955901/57010126-b10fb400-6bc0-11e9-8dfa-f2da4170c30b.png)
