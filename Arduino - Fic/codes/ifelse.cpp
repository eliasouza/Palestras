  int i; // Variavel para contar o numero de vezes que o LED piscou
  // Pisca o LED tres vezes
  for(i = 0; i < 3; i++) {
    if(i == 2) {
      digitalWrite(led, HIGH); // Atribui nivel logico alto ao pino do LED, acendendo-o
      delay(200);              // Espera 200 milissegundos (um segundo)
      digitalWrite(led, LOW);  // Atribui nivel logico baixo ao pino do LED, apagando-o
      delay(1800);             // Espera 1800 milissegundos (um segundo)
    } else {
      digitalWrite(led, HIGH); // Atribui nivel logico alto ao pino do LED, acendendo-o
      delay(1000);             // Espera 1000 milissegundos (um segundo)
      digitalWrite(led, LOW);  // Atribui nivel logico baixo ao pino do LED, apagando-o
      delay(1000);             // Espera 1000 milissegundos (um segundo)
    }
  }
  delay(5000);               // Espera 5 segundos para piscar o LED de novo
