// Definição dos pinos
const int pinoLedR = 9;      // Pino do LED vermelho
const int pinoLedG = 10;     // Pino do LED verde
const int pinoLedB = 11;    // Pino do LED azul

const int botao = 2;
int cont = 0;

void setup() {
  pinMode(botao, INPUT);
  pinMode(pinoLedR, OUTPUT);
  pinMode(pinoLedG, OUTPUT);
  pinMode(pinoLedB, OUTPUT);
//  Serial.begin(9600);
}

void loop() {
  int pot = analogRead(A0);
  int pot_led = pot / 4;

  if (digitalRead(botao) == HIGH) {
    cont++;
    if (cont > 3) {
      cont = 1;
    }
    delay(200);
  }
  switch (cont) {
    case 1:
      analogWrite(pinoLedR, pot_led);
      break;
    case 2:
      analogWrite(pinoLedG, pot_led);
      break;
    case 3:
      analogWrite(pinoLedB, pot_led);
      break;
  }
//  Serial.print("Cont: ");
//  Serial.println(cont);

  delay(100);
}
