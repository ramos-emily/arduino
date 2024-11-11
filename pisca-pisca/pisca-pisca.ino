const byte LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode (LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH); //liga o LED
  delay(1000); //Espera 1s
  digitalWrite(LED, LOW); //Apaga o LED
  delay(1000); //Espera 1s
}
 