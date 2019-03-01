#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {

for (int n = 135; n<NUM_LEDS;n+= 135){
  for(int i=0; i < n; i++){
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[i] = CRGB::Red;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[n-i] = CRGB::Black;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Blue;
    FastLED.show();
    delay(10);
    leds[n-1] = CRGB::Black;
  }
    for(int dot = 0; dot < NUM_LEDS; dot++) {
    leds[dot] = CRGB::Blue;
    FastLED.show();

    leds[dot] = CRGB::Black;
    delay(500) ;
    }
  }
}
