const int led = 13 ;
const int buzzer= 2;
const int trigpin = 10; //generates pulses for detection 
const int echopin= 9;  // recieves if there is a revertion of the detection 

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
}
void loop() {
digitalWrite(led,LOW);
digitalWrite(trigpin,LOW);
delay(100);
noTone(buzzer);
digitalWrite(trigpin,HIGH);
digitalWrite(trigpin,LOW);
float distance = pulseIn(echopin,HIGH);
distance=distance*0.0001657;
float dist_inches=distance*39.37;
if(dist_inches < 8){
  digitalWrite(led,HIGH);
  tone(buzzer,1000);
 delay(1000);
   noTone(buzzer);
}
else {
    digitalWrite(led,LOW);
      noTone(buzzer);
}
}
