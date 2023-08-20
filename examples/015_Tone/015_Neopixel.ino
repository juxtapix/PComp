// Adafruit Neopixel - Simple
#include <Adafruit_NeoPixel.h>

#define PIN       2     // Set pin 2 as the neopixel data pin
#define NUMPIXELS 16     // Number of Pixels
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();       // INITIALIZE NeoPixel object
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(0, pixels.Color(i, 0, 0));
    pixels.setPixelColor(1, pixels.Color(i, 0, 0));
    pixels.setPixelColor(2, pixels.Color(i, 0, 0));
    pixels.setPixelColor(3, pixels.Color(i, 0, 0));
    pixels.setPixelColor(4, pixels.Color(i, 0, 0));
    pixels.setPixelColor(5, pixels.Color(i, 0, 0));
    pixels.setPixelColor(6, pixels.Color(i, 0, 0));
    pixels.setPixelColor(7, pixels.Color(i, 0, 0));
    pixels.show();
    delay(30);
  }

  for (int i = 255; i >= 0; i--) {
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(0, pixels.Color(i, 0, 0));
    pixels.setPixelColor(1, pixels.Color(i, 0, 0));
    pixels.setPixelColor(2, pixels.Color(i, 0, 0));
    pixels.setPixelColor(3, pixels.Color(i, 0, 0));
    pixels.setPixelColor(4, pixels.Color(i, 0, 0));
    pixels.setPixelColor(5, pixels.Color(i, 0, 0));
    pixels.setPixelColor(6, pixels.Color(i, 0, 0));
    pixels.setPixelColor(7, pixels.Color(i, 0, 0));
    pixels.show();
    delay(30);
  }

  delay(100);
}
