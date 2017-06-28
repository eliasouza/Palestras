/*
Declaracao da variavel "led"
Indica que o LED esta conectado no pino digital 13 do Arduino (D13).
*/
int led = 13;

/*
Declaracao da funcao setup()
Esta funcao e chamada apenas uma vez, quando o Arduino e ligado ou reiniciado.
*/
void setup() {
  // Chama a funcao pinMode() que configura um pino como entrada ou saida
  pinMode(led, OUTPUT); // Configura o pino do LED como saida
}

/*
Declaracao da funcao loop()
Apos a funcao setup() ser chamada, a funcao loop() e chamada repetidamente ate
o Arduino ser desligado.
*/
void loop() {
  // Todas as linhas a seguir sao chamadas de funcao com passagem de parametros
  // As funcoes sao executadas em sequencia para fazer o LED acender e apagar
  digitalWrite(led, HIGH); // Atribui nivel logico alto ao pino do LED, acendendo-o
  delay(1000);             // Espera 1000 milissegundos (um segundo)
  digitalWrite(led, LOW);  // Atribui nivel logico baixo ao pino do LED, apagando-o
  delay(1000);             // Espera 1000 milissegundos (um segundo)

  // Apos terminar a funcao loop(), ela e executada novamente repetidas vezes,
  // e assim o LED continua piscando.
}
