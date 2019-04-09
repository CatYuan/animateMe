The proposal should be about one page long and describe what you want your project to do and
what libraries or resources you have identified to use for this project. You should provide links to
outside resources you are planing on using in the project.

# Animate Me
* Description of Project
    Similar to a SnapChat filter. The program will use facial recognition to identify the user's
    face and overlay an animation over the face of the user. The user is then able to control this
    animation by moving their own face. The facial expressions of the animation should follow that
    of the users. Similarly, the position of the animation on the screen will follow that of the
    user as long as they are within the view of the camera.
* Libraries and Add-Ons Used
    * [ofxFaceTracker](https://github.com/kylemcdonald/ofxFaceTracker)
    This add-on uses opencv and other libraries to detect the face of the user.
    It can also track the movement of the facial features of the user. For example, if the user blinks 
    or smiles, the program can detect and identify these changes.
    * [ofxFacialBlendShape](https://github.com/iwanao731/ofxFacialBlendShape)
    This add-on enables the generation of facial animation using a 3D facial model.
    The 3D facial model can then be programmed to create different facial expressions and move 
    certain facial features.

# Other Potential Projects
* Text to speech for French
    * Allows users to input text
    * Using pre-recorded files and phonetic rules, a french pronunciation of the text will be generated
* Fashion clothing silhouette simulator
    * Allows user to design an outfit on a given mannequin
    * Simulates the silhouette of the outfit on the mannequin when placed in a wind tunnel
    * Uses the following [add-on](https://github.com/kashimAstro/ofxCloth)
* Multi player tetris game
    * Borrows from the classic Tetris game
    * Allows two players to play Tetris against each other simultaneously
