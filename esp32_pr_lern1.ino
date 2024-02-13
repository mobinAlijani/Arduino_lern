short LED1 = 23;
short LED2 = 22;
short LED3 = 1;
short LED4 = 3;
short BASER = 21;


short DELAY_TIME = 500;

void setup() {
  // put your setup code here, to run once:
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
 pinMode(BASER,OUTPUT);
 digitalWrite(BASER,HIGH);
 delay(1000);
 digitalWrite(BASER,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED1,HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED2,HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED3,HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED4,HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED4,LOW);
  delay(DELAY_TIME);
  digitalWrite(LED3,LOW);
  delay(DELAY_TIME);
  digitalWrite(LED2,LOW);
  delay(DELAY_TIME);
  digitalWrite(LED1,LOW);
  delay(DELAY_TIME);
}
