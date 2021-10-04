void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial2.available()) {
    int recv = Serial2.parseInt();
    bool convert = isDivisibleBy5(recv);
    Serial.print("Result: "); Serial.println(convert);
  }
}
bool isDivisibleBy5(int number) {
  if (number % 5 == 0) {
    return true;
  }
  else {
    return false;
  }
}
