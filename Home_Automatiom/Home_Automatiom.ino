char Incoming_value = 2;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(2, OUTPUT);
  digitalWrite(2,HIGH);       
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1')             
      digitalWrite(2, LOW);  
    else if(Incoming_value == '2')       
      digitalWrite(2, HIGH);   
  }                            
} 
