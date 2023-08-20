// Pin definitions
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8}; // Pins connected to a-g segments
const int digitPins[] = {9, 10, 11, 12}; // Pins connected to digit selection

// Digit patterns for numbers 0 to 9
const byte digitPatterns[] = {
  B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B11100000,  // 7
  B11111110,  // 8
  B11100110   // 9
};

// Variable to hold the current digit index
int currentDigit = 0;

void setup() {
  // Initialize digit pins as outputs
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i] OUTPUT);
  }

  // Initialize segment pins as outputs
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  // Display the current digit
  displayDigit(currentDigit);

  // Increment the digit index
  currentDigit++;

  // Reset digit index if it exceeds 9
  if (currentDigit > 9) {
    currentDigit = 0;
  }

  // Delay between digits
  delay(1000);
}

void displayDigit(int digit) {
  // Turn off all segments
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], HIGH);
  }

  // Activate the desired segments for the given digit
  for (int i = 0; i < 7; i++) {
    // Check the corresponding bit in the digit pattern
    if (bitRead(digitPatterns[digit], i) == 0) {
      digitalWrite(segmentPins[i], LOW); // Turn on segment
    }
  }

  // Activate the desired digit
  for (int i = 0; i < 4; i++) {
    if (i == currentDigit) {
      digitalWrite(digitPins[i], LOW); // Turn on digit
    } else {
      digitalWrite(digitPins[i], HIGH); // Turn off digit
    }
  }
}
