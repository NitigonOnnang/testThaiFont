#include <TFT_eSPI.h>      
TFT_eSPI tft = TFT_eSPI();
uint16_t bg = TFT_BLACK;
uint16_t fg = TFT_WHITE;
void setup() {
  SPIFFS.begin();
  tft.begin();
  tft.setRotation(1);
  
}
void loop() {
  tft.loadFont("THNiramitAS-24");
  tft.setTextColor(fg, bg);
  tft.showFont(3000);
  tft.unloadFont();
  /////////////////////////////////////
  tft.loadFont("THNiramitAS-36");
  tft.fillScreen(bg);
  tft.setCursor(5,30);
  tft.setTextColor(TFT_YELLOW, bg);
  tft.println("ธรรมใดก็ไร้ค่า ถ้าไม่ทำ");
  tft.setCursor(40,60);
  tft.setTextColor(TFT_GREEN,TFT_YELLOW);
  tft.println("๐ ๑ ๒ ๓ ๔ ๕ ");
  tft.setCursor(45,85);
  tft.println(" ๖ ๗ ๘ ๙ ๛");
  delay(3000);
  tft.unloadFont();
}
