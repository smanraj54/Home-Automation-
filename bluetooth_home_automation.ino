void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
}
int aa=0,Bits=2,output=0;
void loop() {
  output=0;
  for(int t=0;t<Bits;t)
{
  if(Serial.available())
  {
    t++;
    int m=Serial.read()-48;
    if(t==2)output=output+m;
    else output=m*10;
    Serial.print(m);
  }
}
Serial.print("  ");
Serial.println(output);
func(output);
}




void func(int output)
{
  if(output%2)digitalWrite(13,LOW);
else digitalWrite(13,HIGH);

if(output==11)digitalWrite(3,LOW);
else if(output==12)digitalWrite(3,HIGH);
if(output==13)digitalWrite(4,LOW);
else if(output==14)digitalWrite(4,HIGH);
if(output==15)digitalWrite(5,LOW);
else if(output==16)digitalWrite(5,HIGH);
if(output==17)digitalWrite(6,LOW);
else if(output==18)digitalWrite(6,HIGH);
if(output==19)digitalWrite(7,LOW);
else if(output==20)digitalWrite(7,HIGH);


}

