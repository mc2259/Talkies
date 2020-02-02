const int trig=9;

const int echo=6;

double duration;

double instspeed;

double a;

double b;

double distance;

void setup() {

  pinMode(trig,OUTPUT);

  pinMode(echo,INPUT);

  pinMode(13,OUTPUT);

  Serial.begin(9600);

}

double d()

{

  digitalWrite(trig,LOW);

  delay(2);

  digitalWrite(trig,HIGH);

  delay(10);

  digitalWrite(trig,LOW);

duration=  pulseIn(echo,HIGH);

distance=duration*0.017;

return distance;

}

void loop() {

  a=d();

  delay(100);

  b=d();

  instspeed=abs((b-a)/0.1);

  if(instspeed!=0.00)

                  {

                    Serial.print("speed");

                    Serial.println(d());

                  //Serial.println(" ");

                 // Serial.print(a);

                 // Serial.print(" ");

                //  Serial.print(b);

                 // Serial.println(" ");

                 }

  if(d()<180)

 digitalWrite(13,HIGH);

  else

 digitalWrite(13,LOW);

}
