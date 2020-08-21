

int standby;
int countdown;

int ledred = 2;
int ledblu = 5;
int ledgrn = 6;
int pyro1 = 24;
int buzzer = 21;




void setup() {
  pinMode(ledblu, OUTPUT);
  pinMode(ledgrn, OUTPUT);
  pinMode(ledred, OUTPUT);
  pinMode(pyro1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  whiteled();
  stby();
  finalcountdown();
  digitalWrite(buzzer, HIGH);
  digitalWrite(pyro1, HIGH);
  delay(4000);
  
  
}

void loop() {
launch();
  
}


void stby () {
    for (standby = 0; standby < 8; ++standby) {
    digitalWrite(ledblu, HIGH);
    delay(500);
    digitalWrite(ledblu, LOW);
    digitalWrite(ledgrn, HIGH);
    delay(500);
    digitalWrite(ledgrn, LOW);
    digitalWrite(ledred, HIGH);
    delay(500);
    digitalWrite(ledred, LOW);
    
  }
}
void whiteled () {
  digitalWrite(ledred, HIGH);
  digitalWrite(ledblu, HIGH);
  digitalWrite(ledgrn, HIGH);
  delay(5000);
  digitalWrite(ledred, LOW);
  digitalWrite(ledblu, LOW);
  digitalWrite(ledgrn, LOW);
}
void finalcountdown () {
    for (countdown = 0; countdown < 10; ++countdown) {
    digitalWrite(ledblu, HIGH);
    delay(750);
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledblu, LOW);
    delay(250);
    digitalWrite(buzzer, LOW);
    
  }
  
}
void launch () {
  
  digitalWrite(ledgrn, HIGH);
  delay(1000);
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledgrn, LOW);
  delay(200);
  digitalWrite(buzzer, LOW);
  digitalWrite(ledred, HIGH);
  delay(1000);
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledred, LOW);
  delay(200);
  digitalWrite(buzzer, LOW);
}
