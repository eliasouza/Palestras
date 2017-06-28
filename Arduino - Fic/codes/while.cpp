  int i = 0; // Variavel para contar o numero de vezes que o LED piscou  
  // Pisca o LED tres vezes
  while(i < 3) {
    digitalWrite(led, HIGH); // Atribui nivel logico alto ao pino do LED, acendendo-o
    delay(1000);            // Espera 1000 milissegundos (um segundo)
    digitalWrite(led, LOW); // Atribui nivel logico baixo ao pino do LED, apagando-o
    delay(1000);            // Espera 1000 milissegundos (um segundo)
    i = i + 1;              // Aumenta o numero de vezes que o LED piscou
  }
  delay(5000);              // Espera 5 segundos para piscar o LED de novo
