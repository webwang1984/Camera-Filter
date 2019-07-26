// Define pin connections & motor's steps per revolution
const int dirPin = 2;
const int stepPin = 9;
const int stepsPerRevolution = 27;

int Led=13;//定义LED 接口
int buttonpin=3; //定义光遮断传感器接口
int val;//定义数字变量val

void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(Led,OUTPUT);//定义LED 为输出接口
  pinMode(buttonpin,INPUT);//定义光遮断传感器为输出接口
}
void loop()
{

  val=digitalRead(buttonpin);//将数字接口3的值读取赋给val
  if(val==HIGH)//当光遮断传感器检测有信号时，LED 闪烁
  {
    digitalWrite(Led,HIGH);
  }
  else
  {
    digitalWrite(Led,LOW);
  }
  // Set motor direction clockwise
 // digitalWrite(dirPin, HIGH);

  // Spin motor slowly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(800);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(800);
    
  }
delay(500); // Wait a second
  
  



  
}  
  // Set motor direction counterclockwise
 // digitalWrite(dirPin, LOW);

  // Spin motor quickly
  //for(int x = 0; x < stepsPerRevolution; x++)
 // {
  //  digitalWrite(stepPin, HIGH);**
  //  delayMicroseconds(1000);
  //  digitalWrite(stepPin, LOW);
  //  delayMicroseconds(1000);
//  }
  //delay(1000); // Wait a second
//}
