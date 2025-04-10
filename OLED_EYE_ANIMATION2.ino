#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
#define OLED_RESET     -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#include <FluxGarage_RoboEyes.h>
roboEyes roboEyes;

unsigned long eventTimer; 
bool event1wasPlayed = 0; 
bool event2wasPlayed = 0;
bool event3wasPlayed = 0;
bool event4wasPlayed = 0;
bool event5wasPlayed = 0;
bool event6wasPlayed = 0;
bool event7wasPlayed = 0;
bool event8wasPlayed = 0;
bool event9wasPlayed = 0;
bool event10wasPlayed = 0;
bool event11wasPlayed = 0;
bool event12wasPlayed = 0;
bool event13wasPlayed = 0;
bool event14wasPlayed = 0;
bool event15wasPlayed = 0;
bool event16wasPlayed = 0;
bool event17wasPlayed = 0;
bool event18wasPlayed = 0;
bool event19wasPlayed = 0;
bool event20wasPlayed = 0;
bool event21wasPlayed = 0;

void blink() {
  roboEyes.close();  
  delay(200);       
  roboEyes.open(); 
}

void setup() {
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  
  roboEyes.begin(SCREEN_WIDTH, SCREEN_HEIGHT, 100);
  // roboEyes.setAutoblinker(ON, 3, 2); 
  // roboEyes.setIdleMode(ON, 2, 2); 
  roboEyes.setPosition(DEFAULT); 
  roboEyes.close(); 
  
  eventTimer = millis();
}

void loop() {
  roboEyes.update(); 

  if (millis() >= eventTimer + 1000 && event1wasPlayed == 0) {
    event1wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.open();
    blink();
  }
  
  if (millis() >= eventTimer + 2000 && event2wasPlayed == 0) {
    event2wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(HAPPY);
    roboEyes.anim_laugh();
    blink();
  }

  if (millis() >= eventTimer + 3000 && event21wasPlayed == 0) {
    event21wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(HAPPY);
    roboEyes.anim_laugh();
    roboEyes.setPosition(S);
    blink();
    
  }

  if (millis() >= eventTimer + 4000 && event15wasPlayed == 0) {
    event15wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(HAPPY);
    roboEyes.anim_laugh();
    roboEyes.setPosition(SE);
    blink();
    
  }

  if (millis() >= eventTimer + 5000 && event16wasPlayed == 0) {
    event16wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(HAPPY);
    roboEyes.anim_laugh();
    roboEyes.setPosition(SW);
    blink();
  }

  if (millis() >= eventTimer + 6000 && event14wasPlayed == 0) { 
    event14wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(DEFAULT);
    blink();
  }

  if (millis() >= eventTimer + 7000 && event3wasPlayed == 0) {
    event3wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(TIRED);
    blink();
  }

  if (millis() >= eventTimer + 8000 && event4wasPlayed == 0) {
    event4wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(TIRED);
    roboEyes.setPosition(S);
    blink();
  }

  if (millis() >= eventTimer + 9000 && event5wasPlayed == 0) {
    event5wasPlayed = 1; 
    roboEyes.setPosition(S);
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(TIRED);
    roboEyes.setPosition(SE);
    blink();
  }

  if (millis() >= eventTimer + 10000 && event6wasPlayed == 0) {
    event6wasPlayed = 1; 
    roboEyes.setPosition(S);
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(TIRED);
    roboEyes.setPosition(SW);
    blink();
  }

  if (millis() >= eventTimer + 11000 && event20wasPlayed == 0) { 
    event20wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(DEFAULT);
    blink();
  }

  if (millis() >= eventTimer + 12000 && event7wasPlayed == 0) {
    event7wasPlayed = 1;
    roboEyes.setMood(DEFAULT);
    roboEyes.setCuriosity(ON);
    roboEyes.setPosition(E);
    blink();
  }

  if (millis() >= eventTimer + 13000 && event8wasPlayed == 0) {
    event8wasPlayed = 1;
    roboEyes.setMood(DEFAULT);
    roboEyes.setCuriosity(ON);
    roboEyes.setPosition(W);
    blink();
  }

  if (millis() >= eventTimer + 14000 && event17wasPlayed == 0) {
    event17wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(DEFAULT);
    blink();
  }

  if (millis() >= eventTimer + 15000 && event9wasPlayed == 0) {
    event9wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(ANGRY);
    blink();
  }

  if (millis() >= eventTimer + 16000 && event10wasPlayed == 0) {
    event10wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(ANGRY);
    roboEyes.setPosition(S);
    blink();
  }

  if (millis() >= eventTimer + 17000 && event11wasPlayed == 0) {
    event11wasPlayed = 1; 
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(ANGRY);
    roboEyes.setPosition(SE);
    blink();
  }

  if (millis() >= eventTimer + 18000 && event12wasPlayed == 0) {
    event12wasPlayed = 1;
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(ANGRY);
    roboEyes.setPosition(SW);
    blink();
  }

  if (millis() >= eventTimer + 19000 && event19wasPlayed == 0) { 
    event19wasPlayed = 1;
    roboEyes.setPosition(DEFAULT);
    roboEyes.setMood(DEFAULT);
    blink();
  }
  
  if (millis() >= eventTimer + 20000) {
    roboEyes.setCuriosity(OFF);
    roboEyes.setPosition(DEFAULT);
    roboEyes.close(); 
    roboEyes.setMood(DEFAULT);
    
    eventTimer = millis();
    event1wasPlayed = 0;
    event2wasPlayed = 0;
    event3wasPlayed = 0;
    event4wasPlayed = 0;
    event5wasPlayed = 0;
    event6wasPlayed = 0;
    event7wasPlayed = 0;
    event8wasPlayed = 0;
    event9wasPlayed = 0;
    event10wasPlayed = 0;
    event11wasPlayed = 0;
    event12wasPlayed = 0;
    event13wasPlayed = 0;
    event14wasPlayed = 0;
    event15wasPlayed = 0;
    event16wasPlayed = 0;
    event17wasPlayed = 0;
    event18wasPlayed = 0;
    event19wasPlayed = 0;
    event20wasPlayed = 0;
    event21wasPlayed = 0;
  }
}
