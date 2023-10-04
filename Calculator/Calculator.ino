#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const byte ROWS = 4; // Define o número de linhas do teclado (4 no caso de um teclado 4x4)
const byte COLS = 4; // Define o número de colunas do teclado (4 no caso de um teclado 4x4)
LiquidCrystal_I2C lcd(0x27, 16, 2);

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; // Define os pinos das linhas
byte colPins[COLS] = {5, 4, 3, 2}; // Define os pinos das colunas

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight(); // Ative o backlight (opcional)
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!"); // Escreva uma mensagem inicial no display
}

void loop() {
  char key = keypad.getKey(); // Lê a tecla pressionada

  if (key) {
    lcd.clear(); // Limpe o display antes de imprimir a próxima tecla
    lcd.setCursor(0, 0);
    lcd.print(key);
  }
}

