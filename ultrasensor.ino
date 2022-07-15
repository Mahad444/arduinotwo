#define echoPin 4
#define trigPin 5
long duration,distance;
//int sound=250;




void setup() {
  // put your setup code here, to run once:
  //put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(trigPin,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  Serial.print("Distance in cm");
  Serial.println(distance);
  delay(100);

}
if distance<=5);{
Serial.print("You are in MY bubble");
  }
if (distance >5<10);
{
Serial.print("You are in my bubble");
}
if (distacne >10);{
Serial.print("You are Outside the bubble");
}
