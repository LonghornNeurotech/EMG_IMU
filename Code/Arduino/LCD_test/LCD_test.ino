#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The parameter -1 indicates that the OLED display does not have a shared reset pin
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Initialize with the I2C address 0x3C (common for these 0.96" modules)
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.begin(9600);
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  display.clearDisplay();       // Clear the internal buffer
  
  display.setTextSize(1);       // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text (will show as yellow or blue depending on the row layout)
  display.setCursor(0,0);       // Start at top-left corner
  
  display.println(F("Hello, World!"));
  
  display.display();            // Actually push the buffer to the screen hardware
}

void loop() {
  // put your main code here, to run repeatedly:

}
