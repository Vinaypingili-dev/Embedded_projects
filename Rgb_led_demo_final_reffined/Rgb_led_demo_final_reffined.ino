int Pin2 = 3;
int Pin3 = 5;
int Pin4 = 6;



void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  int i = 0;

  delay(2000);
  digitalWrite( Pin2, HIGH);
  digitalWrite( Pin3, HIGH);
  digitalWrite( Pin4, HIGH);
  Serial.println("ALL LED's are ON");

  delay(2000);
  digitalWrite( Pin2, HIGH);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  Serial.println("ONly BLUE");

  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, HIGH);
  digitalWrite( Pin4, LOW);
  Serial.println("ONly Green");

  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, HIGH);
  Serial.println("ONly RED");




  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  Serial.println("ALL LED's are OFF");

  delay(1000);
  digitalWrite( Pin2, HIGH);
  digitalWrite( Pin3, HIGH);
  Serial.println("ALL LED's are Blue & Green");
  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  
  delay(1000);
  digitalWrite( Pin3, HIGH);
  digitalWrite( Pin4, HIGH);
  Serial.println("ALL LED's are RED & Green");
  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  
  delay(1000);
  digitalWrite( Pin2, HIGH);
  digitalWrite( Pin4, HIGH);
  Serial.println("ALL LED's are Blue & Red");
  delay(2000);
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);

  for (i = 0; i < 225; i++){
    analogWrite( Pin2, i);
    digitalWrite( Pin3, HIGH);
    digitalWrite( Pin4, HIGH);
    Serial.println("Blue varring Green and Red ON");
    delay(10);

  }

  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  delay(2000);

  for (i = 0; i < 225; i++){
    analogWrite( Pin3, i);
    digitalWrite( Pin2, HIGH);
    digitalWrite( Pin4, HIGH);
    Serial.println("Green varring Blue and Red ON");
    delay(10);

  }

  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  delay(2000);


  for (i = 0; i < 225; i++){
    analogWrite( Pin4, i);
    digitalWrite( Pin3, HIGH);
    digitalWrite( Pin2, HIGH);
    Serial.println("Red varring Green and Blue ON");
    delay(10);

  }
  digitalWrite( Pin2, LOW);
  digitalWrite( Pin3, LOW);
  digitalWrite( Pin4, LOW);
  delay(2000);
  // put your main code here, to run repeatedly:
}
