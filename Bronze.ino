#include <AFMotor.h>
#include <Servo.h>

//turn on motors
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

Servo servo1;

AF_Stepper stepper(48, 2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor party!");

  // turn on servo
  servo1.attach(9);

  motor1.setSpeed(200);
  motor2.setSpeed(200);
  //motor2.run(RELEASE);
  motor3.setSpeed(200);
  //motor3.run(RELEASE);
  motor4.setSpeed(200);
  //motor4.run(RELEASE);
}

int i;

// Test the DC motor, stepper and servo ALL AT ONCE!
void loop() {
  motor2.run(BACKWARD); motor3.run(BACKWARD);
      delay(200);
  motor2.run(RELEASE); motor3.run(RELEASE);
  


  //pick code
  motor4.run(FORWARD);
     delay(2500);
motor4.run(RELEASE);
  
  
 motor2.run(FORWARD); motor3.run(FORWARD);
      delay(2000);
  motor2.run(RELEASE); motor3.run(RELEASE);
  
    motor1.run(FORWARD);
      delay(400);
  motor1.run(RELEASE);

  
  motor2.run(BACKWARD); motor3.run(BACKWARD);
      delay(1000);
  motor2.run(RELEASE); motor3.run(RELEASE);

 //drop code
  motor4.run(BACKWARD);
    delay(2500);
  motor4.run(RELEASE);

motor2.run(FORWARD); motor3.run(FORWARD);
 delay(1000);
motor2.run(RELEASE); motor3.run(RELEASE);

  motor1.run(BACKWARD);
  delay(400);
motor1.run(RELEASE); 
exit(0);
}
