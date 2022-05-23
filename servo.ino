#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int jystckX;
int jystckY;

int servo1_derece;
int servo2_derece;
int servo3_derece;
int servo4_derece;

void setup() {
  // digital pwm pinleri
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  // joystick X ve Y degerlerini okuma
  jystckX = analogRead(A4);
  jystckY = analogRead(A5);

  // servolari joystick degerlerine gore calistirma
  servo1_derece = map(jystckX, 0, 1023, 0, 180);
  servo2_derece = map(jystckY, 0, 1023, 0, 180);
  servo3_derece = 180 - map(jystckY, 0, 1023, 0, 180);
  servo4_derece = map(jystckX, 0, 1023, 0, 180);

  servo1.write(servo1_derece);
  servo2.write(servo2_derece);
  servo3.write(servo3_derece);
  servo4.write(servo4_derece);
}
