 #include <Servo.h>        //Servo library
 
 Servo servo_1;      //initialize a servo object for the connected servo  
 Servo servo_2;
 Servo servo_3;
              
 int angle_1 = 0;    
  int angle_2 = 0;    
 int angle_3 = 0;    

 void setup() 
 { 
  servo_1.attach(9);   // attach the signal pin of servo to pin9 of arduino
  servo_2.attach(13);
  servo_3.attach(11); 
 } 
 
 void loop() 
 { 
  servo_1.write(angle_1);                   //command to rotate the servo to the specified angle 
  delay(5);
   servo_2.write(angle_2);                   //command to rotate the servo to the specified angle 
  delay(5); 
  servo_3.write(angle_3);                   //command to rotate the servo to the specified angle 
  delay(5);             
  //controlling the 3 fingers 
 }  
