#define BLYNK_TEMPLATE_ID "TMPL68QdODIQv"
#define BLYNK_TEMPLATE_NAME "Hareket"
#define BLYNK_AUTH_TOKEN "YFmNvccNozIgGOQbrigVSxdHZ6EprfeL"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

int sonucDeprem;
int sonucGaz;
bool sonucSu;

long sure;
long mesafeData;

int hrkt = D1;
int buzzer = D0;
int smokeA0 = A0;
int trig = D7;
int echo = D6;
int su = D2;

int led1 = D3;
int led2 = D4;
int led3 = D5;
int led4 = D8;

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Note 10";
char pass[] = "19811981.";

BlynkTimer timer;

BLYNK_WRITE(V4) {
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH); 
  } else {
    digitalWrite(buzzer, LOW);
  }
}

BLYNK_WRITE(V0) {
  if (param.asInt() == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}

void setup(){
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2500L, deprem);
  timer.setInterval(2500L, gaz);
  timer.setInterval(2500L, mesafe);
  timer.setInterval(2500L, yagmur);

  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(smokeA0, INPUT);
  pinMode(su, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void gaz() {
  sonucGaz = analogRead(smokeA0);
  Blynk.virtualWrite(V1, sonucGaz);
  Serial.print("Pin A0: ");
  Serial.println(sonucGaz);

  if (sonucGaz > 500) {
    Blynk.logEvent("gaz_alarmi", "LÜTFEN ORTAMI HAVALANDIRIN VE ATEŞ YAKMAYIN !!!");
    for(int k = 0; k < 10; k++){
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
      delay(500);
    }
  }
}

void deprem() {
  sonucDeprem = digitalRead(hrkt);

  if (sonucDeprem == 1) {
    Blynk.virtualWrite(V4, 1); // Hareket algılandığında V4'ü tetikler ve Buzzer'ı açar
    Blynk.logEvent("deprem_alarmi", "LÜTFEN SIĞINIĞA GİDİNİZ !!!");
    digitalWrite(buzzer, HIGH);
  }
  Serial.print("Deprem: ");
  Serial.println(sonucDeprem);
}

void yagmur() {
  sonucSu = digitalRead(su);

  if (sonucSu == false) {
    Blynk.logEvent("yagmur_alarm", "EVİ SU BASIYOR !!!");
    for(int m=0; m<10; m++){
      digitalWrite(buzzer, HIGH);
      delay(1000);
      digitalWrite(buzzer, LOW);
      delay(1000);
    }
  }
  Serial.print("Su: ");
  Serial.println(sonucSu);
}

void mesafe() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  sure = pulseIn(echo, HIGH);
  mesafeData = (sure / 2) / 29.1;
  Blynk.virtualWrite(V3, mesafeData);

  Serial.print("Mesafe: ");
  Serial.println(mesafeData);

  if (mesafeData < 40) {
    Blynk.logEvent("mesafe", "EVDE HIRSIZ OLABİLİR !!! DİKKAT EDİN !");
    for(int k = 0; k < 10; k++){
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
  }
}

void loop() {
  Blynk.run();
  timer.run();
}