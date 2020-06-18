void setup() 
{   
	for(int i=8;i<14;i++)   
	pinMode(i, OUTPUT); 
}  
void loop() 
{   
	for(int i=8;i<14;i++){   
		digitalWrite(i, HIGH);   
		delay(1000); // Wait for 1000 millisecond(s)  
	}   
	for(int i=13;i>7;i--){   
		digitalWrite(i, LOW);   delay(1000); // Wait for 1000 millisecond(s)   
	}   
}