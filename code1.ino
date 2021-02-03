#define Current_sensor A0  //The sensor analog input pin

float i;

void setup() {

Serial.begin(9600);
pinMode(Current_sensor, INPUT);

}

void loop() {
  i = analogRead(Current_sensor);
  Serial.println(i);
  delay(100);
  //Modifying or removing the delay will change the way the signal is shown 
  //set it until you get the correct sinewave shap

}
