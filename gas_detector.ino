#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 4
#define DHTTYPE DHT11
#define BUZZER_PIN 25
#define MQ7_PIN 34

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
  Serial.begin(115200);
  
  dht.begin();
  
  lcd.init();
  lcd.backlight();
  
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() 
{
  float humi  = dht.readHumidity();
  float tempC = dht.readTemperature();
  int sensorValue = analogRead(MQ7_PIN);

  // Check if DHT reading failed
  if (isnan(humi) || isnan(tempC)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humi);
  Serial.print("% | Temp: ");
  Serial.print(tempC);
  Serial.print(" C | CO: ");
  Serial.println(sensorValue);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(tempC, 1); 
  lcd.print((char)223); 
  lcd.print("C H:");
  lcd.print(humi, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("CO:");
  lcd.print(sensorValue);

  if (sensorValue > 2000)   // ESP32 analog max = 4095
  {
    digitalWrite(BUZZER_PIN, HIGH);
  } 
  else 
  {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(2000);
}
