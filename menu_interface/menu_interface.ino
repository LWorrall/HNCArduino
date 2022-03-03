const int redButton = 9;
const int yellowButton = 8;
const int greenButton = 7;
const int blueButton = 6;
//Constants for buttons corresponding to the LEDS

int greenButtonState = 0;
//Variable for button's state

  // put your setup code here, to run once:
void setup() 
  pinMode(potentiometer, INPUT);
  pinMode(greenButton, INPUT);
  //Register potentiometer and button as inputs
}

  // put your main code here, to run repeatedly:
void loop() {
  menuSelect = analogRead(potentiometer);
  greenButtonState = digitalRead(greenButton);
  //Read the state of the input components
  menuSelect = map(menuSelect, 0, 1023, 0, 1); //Map all of the potentiometers potential states into 2 states for menu item selection

  if(menuSelect == 0 and greenButtonState == HIGH) {
    runGame(); //Call fuction to run the gameplay
  }
  
  if(menuSelect == 1 and greenButtonState == HIGH) {
    showScore(); //Call function to show the high score 
  }
}
