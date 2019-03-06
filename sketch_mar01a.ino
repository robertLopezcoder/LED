#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {

for (int n = 134; n<NUM_LEDS;n+= 134){ 
  for(int i=0; i < n; i++){ //sets the loop
    leds[i] = CRGB::Blue; //sets the color I want the LED to be 
    FastLED.show();
    delay(10); //sets the how fast the Led gets to show 
    leds[i] = CRGB::Red;
  }
  for(int i=0;i<n;i++){ // repeats loop but instead of going forward it comes back
    leds[n-i] = CRGB::Blue;
    FastLED.show();
    delay(10); // each delay is in milliseconds
    leds[n-i] = CRGB::Black;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[n-1] = CRGB::Black;
  }
    for(int dot = 0; dot < NUM_LEDS; dot++) { //sets a countdown using the LEDS 
    leds[dot] = CRGB::Blue;
    FastLED.show();

    leds[dot] = CRGB::Black;
    delay(500) ;
    }
  }
}
