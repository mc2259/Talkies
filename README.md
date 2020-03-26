# Talkies
Navigation aid for the hearing impaired


Voice recognition is very simple technology and also readily available. But the problem of how a speech challenged person will
let others know if he/ she is in danger or navigate to work safely without being able to hear cars horns is what concerns
me.Another rampant problem is that most people do not understand sign language.Learning sign language or referring to a sign language dictionary is  adressed by many apps. However that is hardly a viable option for initiating normal conversation.

These specific issues have been unadresssed so far by existing devices and that is why I want to adress it in my research. My app overcomes the barrier of sign language by using voice recognition technology and allows back -to-back conversation; i.e the challenged person hears ,there is a time delay when he responds (using electronic voice if he is speech disabled) and then the app detects the voice of the other person and so on.This is the most unique feature of my app.
Another issue that touches me is that speech impaired people cannot protest if they feel uncomfortable or threatened in public. That is where my electronic help voice will come in handy.This feature is also not available currently in any app for speech-impaired people.
My hat has an ultrasonic at the back and LED's at front which can notify the user of cars honking behind them. Some types of Blind sticks exist which help the visually challenged navigate, however there are no devices  aimed at helping the deaf detect traffic even though they too face similar problems in navigation.The harrassment  faced by Kamal is what made me aware of the need for such a device specifically aimed at those hard of hearing.

![image](https://user-images.githubusercontent.com/57819870/77649327-b2dc2600-6f8f-11ea-8d29-e3efcebe4b93.png)

![image](https://user-images.githubusercontent.com/57819870/77650111-f5523280-6f90-11ea-86b5-e272c0b474f7.png)

# FURTHER DEVELOPEMENT

1. My app  is based on an English interface  and so I want to incorporate regional languages in it so that it is accessible to people in small communities. 

2. I am working on how to allow it to recognize mixed languages and punctuation.
 
# METHOD AND DESIGN

Hardware and Software requirements:

1.   MIT App Inventor

2.   Arduino Editor; Arduino Nano

3.   Android Device

4.   Windows  X.P

5.    Carbon Resistor

6.   Red LED(2)

7.    HCSR04 Ultrasonic Detector.

8.   Soldering equipment and connecting wires

9.   Cap

10. Battery(8V)



 

# METHODOLOGY: PART 1

1.    Go to http://ai2.appinventor.mit.edu/ and register.

2.    Go to gallery and click on start new project.

3.    In designer section add components:
**       Screen(2)

**       Text Box

**      Buttons(4)

**     Text To Speech

**      Speech Recognizer

**       Horizontal Arrangement

**      Clock

4.    In Blocks section use code as printed above

5.    Download AI companion on Android device

6.    Click on Connect AI Companion and scan Q.R code on device to download newly created app
 

 
 
PART 2: To Make navigation aid for hearing disabled:

1.     Connect   two jumper wires, one from   5 V and one from GND of Arduino Nano to the battery.

2.     Connect   the ultrasonic sensor   such that the VCC pin is connected to the power supply, the Trig is connected to  9 and the Echo pin is connected to 6.Use carbon resistors between the wires and solder them according to the circuit diagram shown above.
 
3.     Connect the LED’S to pin 13 of the Arduino

4.     Connect the Arduino to your laptop and upload the code in it.
 

 

SAFETY MEASURES:

1.Use  gloves and sunglasses while soldering and do not burn yourself

2. Take adult supervision while soldering
 
Where the experiment took place:
 School Lab( Delhi Public School Ruby Park)
 


 
I placed the ultrasonic sensor at various angles with respect to the hat and detected the distance of the obstacle measured by
it using the output screen. I also determined that in order to ensure a minimum safe radius of 180 cm within which the cap alerts, I need to slope the ultrasonic detector at an angle of approximately 50.19 degrees.
Then I installed the ultrasonic sensor on an inclined plane of approximately 50 degrees , soldered the wires and put the entire circuit inside the cap.Then I connected the wires to a battery of 8V.
 
Conclusion

Summary: The project can meet the following objectives:

1.   To create a voice recognition app that allows hearing impaired people to have a conversation with a normal person without having to use sign language

2.   To allow speech disabled people to communicate using an electronic voice

3.   To generate an electronic scream in case the speech disabled person is in danger so that he/she can alert others around her.

PART 2:

4.   To create a cap that  can sense if a car or a high speed obstacle approaches nearby. 

5.   To alert user of the same by using blinking LED lights.

FURTHER DEVELOPEMENT GOALS:

1. To synchronize the app and the hat so that it can work as one device

2. To detect whether the vehicle is coming from left or right and provide suitable notifications to user

3. To  include regional languages because 80% of Indians will require vernacular support to use my app. So it should detect mixed languages and punctuation.
 

