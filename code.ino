
const int sensor1 = 0;
/*const int sensor2 = 1;
const int sensor3 = 2;*/

void setup()
{
  Serial.begin(9600);
  pinMode(sensor1, INPUT); // first step weight sensor
  /* pinMode(sensor2, INPUT); //second step weight sensor
   pinMode(sensor3, INPUT); //third step weight sensor */

  /*pinMode(LED1, OUTPUT); //first step LED
  pinMode(LED2, OUTPUT); //second step LED
  pinMode(LED3, OUTPUT); //third step LED*/
}

void loop()
{
  float weight1 = analogRead(sensor1); // weight in kg
  /*float weight2 = analogRead(sensor2); //weight in kg
  float weight3 = analogRead(sensor3); //weight in kg*/

  delay(100);

  Serial.print("Weight: ");
  Serial.print(weight1);
  Serial.println("g");
}
