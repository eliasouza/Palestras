int i = 0;// Variavel para contar o numero de vezes que o LED piscou
void loop() {
  digitalWrite(led, HIGH); // Atribui nivel logico alto ao pino do LED, acendendo-o
  delay(1000);             // Espera 1000 milissegundos (um segundo)
  digitalWrite(led, LOW);  // Atribui nivel logico baixo ao pino do LED, apagando-o
  delay(1000);             // Espera 1000 milissegundos (um segundo)
  i++;                     // Incrementa o numero de "piscadas"
  if(i == 3) {
    delay(5000);           // Espera 5 segundos para piscar o LED de novo  
    i = 0;                 // Reinicia o contador de numero de "piscadas"
  }
}
