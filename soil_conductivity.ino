
const int piezoPin = 9; 

int sensorValue = 0;
int sensorPin = A5;  

void setup(){
  pinMode(piezoPin, OUTPUT); 
  Serial.begin(9600);
  }

 void loop(){
    sensorValue = analogRead(sensorPin); 
    tone(piezoPin, sensorValue); 
    
    Serial.println(sensorValue);
    delay(10);
  }

  
