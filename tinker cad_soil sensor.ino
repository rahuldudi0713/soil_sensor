//This Code operates Three leds and 1 DC moter by sensing the
//data from soil moisture sensor.
#define soilSensor1 A0


#define blueLED3 11
#define orangeLED2 12
#define redLED1 13
#define moter 10


// int goodMoisture = 300;

void setup() {
  pinMode(blueLED3, OUTPUT);
  pinMode(orangeLED2, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(moter, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int sensorValue1 = analogRead(soilSensor1);
  
  Serial.println("Sensor 1 =  ");
  Serial.println(sensorValue1);
  

  if (sensorValue1 > 800 ){
    digitalWrite(blueLED3, HIGH);
    digitalWrite(orangeLED2, LOW);
    digitalWrite(redLED1, LOW);
    digitalWrite(moter, LOW);
  }  
  if (sensorValue1 > 300 && sensorValue1 < 800){
    digitalWrite(blueLED3, LOW);
    digitalWrite(orangeLED2, HIGH);
    digitalWrite(moter, LOW);
    digitalWrite(redLED1, LOW); 
  }
 if(sensorValue1 <350){
    digitalWrite(blueLED3, LOW);
    digitalWrite(redLED1, HIGH);
    digitalWrite(orangeLED2, LOW);
    digitalWrite(moter, HIGH);
  }

 
  
  delay(1000);
}
