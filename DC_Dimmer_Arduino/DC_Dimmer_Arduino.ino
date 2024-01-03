#define DELAY_TIME 500
int dimmer = 9;
int action = 10;
int contEstado = 0;
int estados[] = { 0, 65, 130, 200, 254 };
void setup() {
  // put your setup code here, to run once:
  pinMode(dimmer, INPUT);
  pinMode(action, OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(dimmer)) {
    contEstado++;
    if (contEstado > 4)
      contEstado = 0;
    analogWrite(action, estados[contEstado]);
    //Serial.println(estados[contEstado]);
    delay(DELAY_TIME);
  }
  delay(50);
}
