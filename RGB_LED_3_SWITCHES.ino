int button1State;
int button2State; 
int button3State;   

void setup() {
  pinMode(3, INPUT_PULLUP);   
  pinMode(9, INPUT_PULLUP);  
  pinMode(11, INPUT_PULLUP); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);    
  Serial.begin(9600);            
}

void loop() {
  button1State = digitalRead(3);   
  button2State = digitalRead(9); 
  button3State = digitalRead(11); 

  if (button1State == LOW) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(10,LOW);
   
  }

   else if (button2State == LOW) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(10,LOW); 
    
  }
   
   else if (button3State == LOW) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(10,HIGH);
    
   }
   
 

}
