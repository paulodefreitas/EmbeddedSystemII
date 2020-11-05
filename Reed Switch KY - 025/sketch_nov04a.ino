// define the pin we will connect to
int buzzer = 12 ; 
  
void setup ()
{
  // set our pin to output mode
  pinMode (buzzer, OUTPUT) ;
}
  
  
void loop ()
{
  // loop through frequencies to generate alarm sound
  unsigned char i;
  while (1)
  {
    //Frequency 1
    for (i = 0; i <80; i++) 
    {
      digitalWrite (buzzer, HIGH) ;
      delay (1) ;
      digitalWrite (buzzer, LOW) ;
      delay (1) ;
    }
    //Frequency 2
    for (i = 0; i <100; i++) 
    {
      digitalWrite (buzzer, HIGH) ;
      delay (2) ;
      digitalWrite (buzzer, LOW) ;
      delay (2) ;
    }
  }
}
