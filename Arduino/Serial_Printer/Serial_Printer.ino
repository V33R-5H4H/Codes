int x;
void setup() 
{
  Serial.begin(9600);
 x=11;
}

void loop() 
{  
  Serial.println(x);
  
  x++;
}
