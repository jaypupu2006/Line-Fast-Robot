// DO NOT EDIT //

#define PWMA 3
#define AIN1 2
#define AIN2 4

#define PWMB 5
#define BIN1 6
#define BIN2 7

void Motor1(int speedmotor2) {
  bool dir2 = (speedmotor2 >= 0 ? true : false);
  speedmotor2 = abs(speedmotor2);
  if (speedmotor2 > 255) {
    speedmotor2 = 255;
  }
  digitalWrite(BIN1, dir2);
  digitalWrite(BIN2, !dir2);
  analogWrite(PWMB, speedmotor2);
}
void Motor2(int speedmotor1) {
  bool dir1 = (speedmotor1 >= 0 ? true : false);
  speedmotor1 = abs(speedmotor1);
  if (speedmotor1 > 255) {
    speedmotor1 = 255;
  }
  digitalWrite(AIN1, dir1);
  digitalWrite(AIN2, !dir1);
  analogWrite(PWMA, speedmotor1);
}


void Motor(int leftsp, int rightsp) {
  Motor1(leftsp);
  Motor2(rightsp);
}

void MotorStop() {
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}
