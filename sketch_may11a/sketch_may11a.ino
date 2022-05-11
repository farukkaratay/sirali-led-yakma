#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11
#define led11 12
#define led12 13



void setup()
{
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);
pinMode (led6, OUTPUT);
pinMode (led7, OUTPUT);
pinMode (led8, OUTPUT);
pinMode (led9, OUTPUT);
pinMode (led10, OUTPUT);
pinMode (led11, OUTPUT);
pinMode (led12, OUTPUT);


}
 
void loop() {
//1-12 SIRALI
digitalWrite(led1,HIGH);
delay(100);
digitalWrite(led2,HIGH);
delay(100);
digitalWrite(led3,HIGH);
delay(100);
digitalWrite(led4,HIGH);
delay(100);
digitalWrite(led5,HIGH);
delay(100);
digitalWrite(led6,HIGH);
delay(100);
digitalWrite(led7,HIGH);
delay(100);
digitalWrite(led8,HIGH);
delay(100);
digitalWrite(led9,HIGH);
delay(100);
digitalWrite(led10,HIGH);
delay(100);
digitalWrite(led11,HIGH);
delay(100);
digitalWrite(led12,HIGH);
delay(100);

digitalWrite(led1,LOW);
delay(100);
digitalWrite(led2,LOW);
delay(100);
digitalWrite(led3,LOW);
delay(100);
digitalWrite(led4,LOW);
delay(100);
digitalWrite(led5,LOW);
delay(100);
digitalWrite(led6,LOW);
delay(100);
digitalWrite(led7,LOW);
delay(100);
digitalWrite(led8,LOW);
delay(100);
digitalWrite(led9,LOW);
delay(100);
digitalWrite(led10,LOW);
delay(100);
digitalWrite(led11,LOW);
delay(100);
digitalWrite(led12,LOW);
delay(100);
//1-12 SIRALI SON
delay(200);
//12-1 SIRALI
digitalWrite(led12,HIGH);
delay(100);
digitalWrite(led11,HIGH);
delay(100);
digitalWrite(led10,HIGH);
delay(100);
digitalWrite(led9,HIGH);
delay(100);
digitalWrite(led8,HIGH);
delay(100);
digitalWrite(led7,HIGH);
delay(100);
digitalWrite(led6,HIGH);
delay(100);
digitalWrite(led5,HIGH);
delay(100);
digitalWrite(led4,HIGH);
delay(100);
digitalWrite(led3,HIGH);
delay(100);
digitalWrite(led2,HIGH);
delay(100);
digitalWrite(led1,HIGH);
delay(100);


digitalWrite(led12,LOW);
delay(100);
digitalWrite(led11,LOW);
delay(100);
digitalWrite(led10,LOW);
delay(100);
digitalWrite(led9,LOW);
delay(100);
digitalWrite(led8,LOW);
delay(100);
digitalWrite(led7,LOW);
delay(100);
digitalWrite(led6,LOW);
delay(100);
digitalWrite(led5,LOW);
delay(100);
digitalWrite(led4,LOW);
delay(100);
digitalWrite(led3,LOW);
delay(100);
digitalWrite(led2,LOW);
delay(100);
digitalWrite(led1,LOW);
delay(100);
//12-1 SIRALI SON

delay(200);
//full yanma
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led12,HIGH);

delay(500);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
//full yanma son

delay(500);

//full yanma
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led12,HIGH);

delay(500);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
//full yanma son

delay(500);
//full yanma
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led12,HIGH);

delay(500);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
//full yanma son

delay(500);
//4lü yanma
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(500);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);
delay(500);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led12,HIGH);

delay(500);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(500);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
delay(500);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
//4lü yanma son
delay(200);
//tersten 4lü yanma
digitalWrite(led12,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led9,HIGH);
delay(500);
digitalWrite(led8,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led5,HIGH);
delay(500);
digitalWrite(led4,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led1,HIGH);

delay(500);

digitalWrite(led12,LOW);
digitalWrite(led11,LOW);
digitalWrite(led10,LOW);
digitalWrite(led9,LOW);
delay(500);
digitalWrite(led8,LOW);
digitalWrite(led7,LOW);
digitalWrite(led6,LOW);
digitalWrite(led5,LOW);
delay(500);
digitalWrite(led4,LOW);
digitalWrite(led3,LOW);
digitalWrite(led2,LOW);
digitalWrite(led1,LOW);
//tersten 4lü yanma son
delay(200);

}
