void setup() {
  pinMode(LED_BUILTIN, OUTPUT); /* Define o LED BUILTIN (localizado na identificação L do Arduino) como OUTPUT */
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); /* Seta o valor do LED BUILTIN como alto, ligando o LED embedado */
  delay(1000); /* Aguarda 1 segundo */ 
  digitalWrite(LED_BUILTIN, LOW); /* Seta o valor do LED BUILTIN como baixo, desligando o LED embedado */
  delay(500); /* Aguarda meio segundo */
}