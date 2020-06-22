#define WAIT_TIME           (500) // [ms]

int in = 0;


void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
    Serial.print(in);
    Serial.print("\n");
    if(100>=in)
    {
      if(in%15 == 0 )
      {
        Serial.print("FizzBuzz\n");
      }
      else if(in%5 == 0)
      {
        Serial.print("Fizz\n");
      }
      else if(in%3 == 0)
      {    
        Serial.print("Buzz\n");
      }
    }
    
    delay(WAIT_TIME);
    in++;
}
