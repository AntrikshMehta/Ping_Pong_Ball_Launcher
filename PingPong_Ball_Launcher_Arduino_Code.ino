#include <Servo.h>

Servo myservo;
int pos = 90;
int enablePinA = 10;
int motorPin1 = 9; 
int motorPin2 = 8; 

int enablePinB = 7;
int motorPin3 = 6; 
int motorPin4 = 5;

void setup(){
  myservo.attach(3);
  myservo.write(pos);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePinA, OUTPUT); 
  pinMode(enablePinB, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT); 
  Serial.begin(9600);
}

void loop()
{
while (Serial.available())
{
  
String data = Serial.readStringUntil('\n'); 
Serial.print(data);
if ((data.toInt())<=180 && (data.toInt())>=0){
  Serial.print("Moving to: ");
  Serial.print(data);
  Serial.println(" Degrees");
  myservo.write(data.toInt());
}
else if (data == "181"){
  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, LOW); 
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  Serial.println(" motor off");
}
else if (data == "182"){
  analogWrite(enablePinA,50);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 50rpm");
}
else if (data == "183"){
  analogWrite(enablePinA,75);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 75rpm");
}
else if (data == "184"){
  analogWrite(enablePinA,100);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 100rpm");
}
else if (data == "185"){
  analogWrite(enablePinA,125);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 125rpm");
}
else if (data == "186"){
  analogWrite(enablePinA,150);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 150rpm");
}
else if (data == "187"){
  analogWrite(enablePinA,175);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 175rpm");
}
else if (data == "188"){
  analogWrite(enablePinA,200);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);  
  Serial.println(" 200rpm");
}
else if (data == "189"){
  analogWrite(enablePinA,225);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 225rpm");
}

else if (data == "190"){
  analogWrite(enablePinA,250);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  Serial.println(" 250rpm");
}

else if (data == "191"){
  analogWrite(enablePinB,75);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  Serial.println(" 75rpm motor 2");
}
 
else if (data == "192"){
  analogWrite(enablePinB,150);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  Serial.println(" 150rpm motor 2");
}

else if (data == "193"){
  analogWrite(enablePinB,200);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  Serial.println(" 200rpm motor 2");
}

else if (data == "194"){
  analogWrite(enablePinB,250);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  Serial.println(" 250rpm motor 2");
}
}
}
