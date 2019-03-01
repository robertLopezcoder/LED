#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  //make blue up to LED#22 with the leading one being White.
for (int n = 22; n<NUM_LEDS;n+= 22){
  for(int i=0; i < n; i++){
    leds[i] = CRGB::Pink;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Orange;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Pink;
    FastLED.show();
    delay(30);
    leds[n-i] = CRGB::Black;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Pink;
    FastLED.show();
    delay(10);
    leds[n-1] = CRGB::Black;
  }
    for(int dot = 0; dot < NUM_LEDS; dot++) {
    leds[dot] = CRGB::Pink;
    FastLED.show();

    leds[dot] = CRGB::Black;
    delay(5000) ;
    }
  }
}
