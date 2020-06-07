#define LED_PIN 11 // The pin number LED connected to
#define SHORT_DELAY 250 // 1/4 second short delay
#define LONG_DELAY  500 // 1/2 second long  dealy

/**
 * The set-up routine invoked after power on/reset
 */
void setup() 
{  
  pinMode(LED_PIN, OUTPUT); // initialize digital pin as an output.
}

/**
 * The program thread performaing infinite loop
 */
void loop() 
{
  morseCodeMessage("---..."); // SOS
}

/**
 * The fucntion to dispaly the Morse code message
 * @param message the message to display on LED
 */
void morseCodeMessage(char* message) {
  for (int i = 0; message[i]; ++i)
  {
    int del = (message[i] == '-') ? LONG_DELAY : SHORT_DELAY;
    digitalWrite(LED_PIN, HIGH);
    delay(del);
    digitalWrite(LED_PIN, LOW);
    delay(del);
  }
}