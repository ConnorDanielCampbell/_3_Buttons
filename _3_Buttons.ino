/*
 DIGF 2B03
 Connor Campbell - 2389765
 LAB 2
 Button used to alternate between 3 different LEDs 
 Base codes: 
 Button example, by DojoDave <http://www.0j0.org> (modified 30 Aug 2011 by Tom Igoe)
 http://www.arduino.cc/en/Tutorial/Button
 Button State Change example by Tom Igoe
 http://arduino.cc/en/Tutorial/ButtonStateChange
 Blink example
 http://arduino.cc/en/Tutorial/Blink
 */
 
 
const int button2 = 2;     // the number of the pushbutton pin
const int button3 = 3;
const int button4 = 4;
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState2 = 0;         // variable for reading the pushbutton status
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(button2, INPUT);     
  pinMode(button3, INPUT);  
  pinMode(button4, INPUT);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH); 
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(800); 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  
   if (buttonState3 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH); 
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(400); 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  
  
   if (buttonState4 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH); 
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(200); 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  
}
