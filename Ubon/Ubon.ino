#include <TheCharmRobot.h>
void setup() {
  pinMode(A2,OUTPUT);
  s1.attach(A2);
  //erial.begin(9600);
  RobotSetup();  // Setup หุ่นยนต์
  SensorValue (46,45,46,47,48,44,46,48,758,697,694,735,754,694,790,843); //ค่าแสง
  TurnSpeedLeft(120, 200, 50);   // ค่าเลี้ยวซ้าย TurnSpeedLeft(มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว);
  TurnSpeedRight(200, 120, 50);  // ค่าเลี้ยวขวา TurnSpeedRight(มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว);
  TrackLineColor(0); //สีของเส้น 1 = ขาว , 0 = ดำ
 
  OK();        // รอจนกว่าจะกดปุ่ม OK
  delay(500);  // หน่วงเวลา 0.5 วินาที
    
  // s1.write(180);
  //s1.write(-1);
 //delay(100); 

  // SerialSensor();     // Serial Monitor ค่าของ Sensor
   //SerialCalibrate();  // Serial Monitor ค่าของ Sensor ที่ Calibrate แล้ว
  //CaliberateRobotSensor();  // Serial Monitor Calibrate ค่าแสงหุ่นยนต์

  // TrackCross(100, 0.05, 0.5, 'r');     // PID จนกว่าจะเจอแยก TrackCross(Speed, Kp , Kd , 'คำสั่งเจอแยก'); >> 'l'=เลี้ยวซ้าย ,'r'=เลี้ยวขวา ,'p'=ตรง ,'s'=หยุด
  // TrackTime(80, 0.05, 0.5, 1000);      // PID ด้วยเวลา TrackTime(Speed, Kp , Kd, เวลา); >> 1000 = 1 วินาที
   //TrackDistance(100, 0.05, 0.5);       // PID จนกว่าจะเจอสิ่งกีดขวาง TrackDistance(Speed, Kp , Kd);  >> ปรับระยะด้านข้างของเซนเซอร์

   //Motor(100, 100);       // คำสั่งควบคุมมอเตอร์ Motor(ความเร็วมอเตอร์ซ้าย, ความเร็วมอเตอร์ขวา);  >> -255 -> 255 <<
   //delay(1000);           // หน่วงเวลา 0.5 วินาที
  // Motor(0, -100);       // คำสั่งควบคุมมอเตอร์ Motor(ความเร็วมอเตอร์ซ้าย, ความเร็วมอเตอร์ขวา);  >> -255 -> 255 <<
  // delay(500);           // หน่วงเวลา 0.5 วินาที
  // MotorStop();          // หยุดการทำงานมอเตอร์

  // Program1();           // ทำงานโปรแกรม 1
  // Program2();        // ทำงานโปรแกรม 2
  // Program3();        // ทำงานโปรแกรม 3

  //s1.write(90);
wg();
 
  //  pp();
  //  delay( 222);
  //    pp2();
  //    delay( 222);
  //delay(1000); 
//LL();
//UBONRRS7(120, 80, 100);//เลี้ยวขวาตัดเซนเซอร์ตัวที่  7  (มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว)
//UBONRRS0(120, 80, 100); //เลี้ยวขวาตัดเซนเซอร์ตัวที่ 0 (มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว)
//UBONLLS7(120, 80, 100); //เลี้ยวซ้ายตัดเซนเซอร์ตัวที่ 7 (มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว)
//UBONLLS0(120, 80, 100); //เลี้ยวซ้ายตัดเซนเซอร์ตัวที่ 0 (มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว)
 //TrackUBONS2(70, 0.05, 0.18, 's'); //หยุดเวลาsensor7,0จับ
 //pro5();

}

void loop() {

  //s1.write(180);
//  delay(1000); 
  MotorStop();  // หยุดการทำงานมอเตอร์
}
