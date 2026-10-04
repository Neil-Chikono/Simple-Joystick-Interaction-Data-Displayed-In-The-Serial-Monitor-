const int yAxis = A4;
const int xAxis = A5;
const int swPin = 3;
int yValue;
int xValue; 
float joyStick; 

void setup() { 

  Serial.begin(9600) ;
  pinMode(swPin, INPUT) ;
  digitalWrite( swPin, HIGH);
}

void loop() {

xValue=analogRead(xAxis);
yValue=analogRead(yAxis); 

Serial.print(xValue); 
Serial.print("   ");
Serial.println(yValue);

delay(100);


 /// it will keep updating the values of of x and y in the loop

  
}
