
const int vrx= A0;
const int vxy= A1;
int xvalue=0;
int yvalue=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
xvalue= analogRead(vrx);
yvalue=analogRead(yvalue);
Serial.println(xvalue);
delay(1000);
Serial.println(yvalue);
delay(1000);
}
