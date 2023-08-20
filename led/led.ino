// Pin definitions
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;

// Time intervals (in milliseconds)
const int blinkInterval = 500;  // Blink interval for each LED

void setup() {
  // Set LED pins as outputs
  // pinMode(led2, OUTPUT);
  // pinMode(led3, OUTPUT);
  // pinMode(led4, OUTPUT);
  // pinMode(led5, OUTPUT);
  // pinMode(led6, OUTPUT);
  // pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  // pinMode(led9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(led2, HIGH); 
  // digitalWrite(led3, LOW); 
  // digitalWrite(led4, HIGH); 
  // digitalWrite(led5, LOW); 
  // digitalWrite(led6, HIGH); 
  // digitalWrite(led7, LOW); 
  digitalWrite(led8, HIGH); 
  // digitalWrite(led9, LOW); 


  delay(1000);         // Wait for the specified interval

  digitalWrite(led2, LOW); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW); 
  digitalWrite(led5, HIGH); 
  digitalWrite(led6, LOW); 
  digitalWrite(led7, HIGH); 
  digitalWrite(led8, LOW); 
  digitalWrite(led9, HIGH); 

  delay(1000);         // Wait for the specified interval
}
