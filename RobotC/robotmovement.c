task main{
  
  setMotor(leftMotor,63);
  setMotor(rightMotor,63);
  wait(3,seconds);
  setMotor(leftMotor,-63);
  setMotor(rightMotor,-63);
  wait(3,seconds);
  
  setMotor(leftMotor,127);
  setMotor(rightMotor,-127);
  wait(1,seconds);
}