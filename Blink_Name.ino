// Define the pin numbers for LED and button
const int led = 13; // LED connected to pin 13
const int btn = 10; // Button connected to pin 10

// Function to set up initial configuration
void setup() {

  Serial.begin(9600); // Initialize serial communication

  pinMode(led, OUTPUT); // Set LED pin as output
  pinMode(btn, INPUT);  // Set button pin as input
}

// Function to emit a short Morse code signal (dot)
void dot() {
  digitalWrite(13, HIGH); // Turn on LED
  delay(300);       // Keep LED on for 300ms
  digitalWrite(13, LOW);  // Turn off LED
  delay(900);   // Delay after LED is off for 900ms
}

// Function to emit a long Morse code signal (dash)
void dash() {
  digitalWrite(13, HIGH); // Turn on LED
  delay(900);  // Keep LED on for 900ms
  digitalWrite(13, LOW);  // Turn off LED
  delay(900);  // Delay after LED is off for 900ms
}

// Function to convert a character to its Morse code representation
void create_morse(char alpha) {
  switch (alpha) {
      // Morse code patterns for letters
    case 'a':
    case 'A':
      dot();
      dash();
      break;
    case 'b':
    case 'B':
      dash();
      dot();
      dot();
      dot();
      break;
    case 'c':
    case 'C':
      dash();
      dot();
      dash();
      dot();
      break;
    case 'd':
    case 'D':
      dash();
      dot();
      dot();
      break;
    case 'e':
    case 'E':
      dot();
      break;
    case 'f':
    case 'F':
      dot();
      dot();
      dash();
      dot();
      break;
    case 'g':
    case 'G':
      dash();
      dash();
      dot();
      break;
    case 'h':
    case 'H':
      dot();
      dot();
      dot();
      dot();
      break;
    case 'i':
    case 'I':
      dot();
      dot();
      break;
    case 'j':
    case 'J':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'k':
    case 'K':
      dash();
      dot();
      dash();
      break;
    case 'l':
    case 'L':
      dot();
      dash();
      dot();
      dot();
      break;
    case 'm':
    case 'M':
      dash();
      dash();
      break;
    case 'n':
    case 'N':
      dash();
      dot();
      break;
    case 'o':
    case 'O':
      dash();
      dash();
      dash();
      break;
    case 'p':
    case 'P':
      dot();
      dash();
      dash();
      dot();
      break;
    case 'q':
    case 'Q':
      dash();
      dash();
      dot();
      dash();
      break;
    case 'r':
    case 'R':
      dot();
      dash();
      dot();
      break;
    case 's':
    case 'S':
      dot();
      dot();
      dot();
      break;
    case 'u':
    case 'U':
      dot();
      dot();
      dash();
      break;
    case 'v':
    case 'V':
      dot();
      dot();
      dot();
      dash();
      break;
    case 'w':
    case 'W':
      dot();
      dash();
      dash();
      break;
    case 'x':
    case 'X':
      dash();
      dot();
      dot();
      dash();
      break;
    case 'y':
    case 'Y':
      dash();
      dot();
      dash();
      dash();
      break;
    case 'z':
    case 'Z':
      dash();
      dash();
      dot();
      dot();
      break;
    default: break; // Ignore non-letter characters
  }
}

// Main loop
void loop() {

  int val = digitalRead(btn); // Read button state

  if (val == HIGH) { //When button is pressed
 

char name[] = "tanya";  // Name to be converted to Morse code stored in char array. Can further be replaced by any name to be converted into morse code

// Convert and emit Morse code for each letter in the name
    for (int i = 0; i < sizeof(name); i++) {
      char alpha = name[i];
      create_morse(alpha);
    }
  } else

  {
    
 digitalWrite(13, LOW); // Turn off LED if button is not pressed
      
  }
}
