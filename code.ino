#include <Arduino.h>

const int sensor1 = A0;
const int sensor2 = A1;
const int sensor3 = A2;

const int LED1 = A3;
const int LED1 = A4;
const int LED1 = A5;

int activeStep;
int lowerLimit = 10;
int upperLimit = 250;

void setup() {
  Serial.begin(9600);
  pinMode(sensor1, INPUT); //first step weight sensor 
  pinMode(sensor2, INPUT); //second step weight sensor 
  pinMode(sensor3, INPUT); //third step weight sensor 

  pinMode(LED1, OUTPUT); //first step LED
  pinMode(LED2, OUTPUT); //second step LED
  pinMode(LED3, OUTPUT); //third step LED

}

void loop() {
  float weight1 = analogRead(sensor1); //weight in kg
  float weight2 = analogRead(sensor2); //weight in kg
  float weight3 = analogRead(sensor3); //weight in kg

  delay(100);
}

count= readCount();
int weight =(((count-sample)/val)-2*((count-sample)/val));
Serial.print("weight:");
Serial.print((int)w);
Serial.println("g");
}
