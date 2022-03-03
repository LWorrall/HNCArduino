int redLed = 13;
int yellowLed = 12;
int greenLed = 11;
int blueLed = 10;

// put your setup code here, to run once:
void setup() {
  pinMode (redLed, OUTPUT)
  pinMode (yellowLed, OUTPUT)
  pinMode (greenLed, OUTPUT)
  pinMode (blueLed, OUTPUT)
}

  // put your main code here, to run repeatedly:
void loop() {
  //Gameplay loop
  counter = 0;
  int randomSequence[];
  randomNum = random(0,3);
  randomSequence[counter] = randomNum; //value in position 'counter' of 'randomSequence' is 'randomNum'.
  counter = ++counter;
  
}
