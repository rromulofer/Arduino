// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);
  
}

void loop()
{
  int estadobotao;
  
  estadobotao = digitalRead(7);
  
  digitalWrite(10, estadobotao);
  digitalWrite(9, !estadobotao);
}
