#define SWITCH_PIN 8
#define LED_PIN 13

/* #define PULLUP */

#ifdef PULLUP
#  define IN INPUT_PULLUP
#else
#  define IN INPUT
#endif

#ifdef PULLUP
#  define PRESSED LOW
#else
#  define PRESSED HIGH
#endif

void setup()
{
    /* set the SWITCH_PIN in input mode and enable the pull-up resistor */
    Serial.begin(115200);
    pinMode(SWITCH_PIN, IN);
    pinMode(LED_PIN, OUTPUT);
    /*
      the equivalent of pinMode(SWITCH_PIN, INPUT_PULLUP) is:
        pinMode(SWITCH_PIN, INPUT);
        digitalWrite(SWITCH, HIGH);
    */
}

void loop()
{
    if(digitalRead(SWITCH_PIN) == PRESSED) {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("Setting to high");
        return;
    }
    digitalWrite(LED_PIN, LOW);
    Serial.println("Setting to low");
    /* or */
    /* digitalWrite(LED_PIN, digitalRead(SWITCH_PIN) == PRESSED ? HIGH : LOW); */
}
