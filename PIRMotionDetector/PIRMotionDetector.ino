/*
Simple code to take input from a PIR motion detector and register movement by turning on an LED
PIRmotionPin
code originally hacked from Arduino button examples and sparkfun site
*/
// constants won't change. They're used here to 
// set pin numbers:
const int PIRmotionPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(PIRmotionPin, INPUT);   
  Serial.begin(9600);

}

void loop(){
  // read the state of the pushbutton value:
  buttonState = analogRead(PIRmotionPin);

  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState >500) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}

