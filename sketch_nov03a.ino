
int estadoBotonPin2 = 0;
int estadoBotonPin3 = 0;
void setup () {
 
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
 estadoBotonPin2 = digitalRead(2);
 estadoBotonPin3 = digitalRead(3);
 Serial.print("Estado del botón 2: ");
 Serial.println(estadoBotonPin2);
 Serial.print("Estado del botón 3: ");
 Serial.println(estadoBotonPin3);
}
