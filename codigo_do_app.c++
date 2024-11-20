#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configuração do LCD I2C
LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço I2C, colunas, linhas

void setup() {
  // Inicializa o LCD
  lcd.init();       // Inicializa o LCD
  lcd.backlight();  // Ativa a luz de fundo do LCD
}

void loop() {
  // Simula valores dinâmicos que poderiam ser exibidos no LCD
  int potencia = random(100, 300); // Potência aleatória entre 100W e 300W
  int cargas = random(1, 6);       // Número de cargas entre 1 e 5
  int porcentagem = random(50, 100); // Porcentagem de eficiência entre 50% e 100%

  // Exibe os valores no LCD
  lcd.clear(); // Limpa o display

  lcd.setCursor(0, 0); // Primeira linha
  lcd.print("Potencia: ");
  lcd.print(potencia);
  lcd.print("W");

  lcd.setCursor(0, 1); // Segunda linha
  lcd.print("Cargas: ");
  lcd.print(cargas);
  lcd.print(" ");

  delay(3000); // Aguarda 3 segundos

  lcd.clear(); // Limpa o display

  lcd.setCursor(0, 0); // Primeira linha
  lcd.print("Painel: ");
  lcd.print(porcentagem);
  lcd.print("%");

  lcd.setCursor(0, 1); // Segunda linha
  lcd.print("de eficiencia");
  
  delay(3000); // Aguarda 3 segundos
}
