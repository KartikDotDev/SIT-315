// C++ code
//

const byte temperature = A2;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(temperature, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float temp = analogRead(temperature);
 
  
  temp = (double)temp / 1024; 
  temp = ((temp * 5) - 0.5)*100; 
   
  

  Serial.print("Current Temperature: ");
  Serial.println(temp);
  
  if(temp>30){
  	digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    
  }
}
