Feito por: 
Marcelo Affonso Fonseca - RM:559790
Ana Luiza Santana da Rocha - RM:561194

link do simulador: https://wokwi.com/projects/415047210914465793

# Sistema de Monitoramento de Energia Solar

## Descrição do Projeto
Este projeto simula um sistema básico de monitoramento de energia solar, exibindo dados como potência gerada, número de cargas conectadas e a eficiência estimada do painel solar. Os valores exibidos são dinâmicos, simulando variações reais que ocorrem em um sistema solar devido a fatores como mudanças na intensidade da luz solar e nas condições de carga.

Este código foi desenvolvido por:
- **Marcelo Affonso Fonseca**
- **Ana Luiza Santana da Rocha**

---

##  Componentes Utilizados
### Hardware:
- Arduino Uno (ou compatível)
- Módulo LCD 16x2 com comunicação I2C
- Protoboard e fios de conexão

### Software:
- Simulador: [Wokwi](https://wokwi.com/)
- Linguagem: C++ para Arduino
- IDE Arduino ou integração no Wokwi

---

## Como Funciona
O sistema exibe três informações principais de maneira alternada no LCD:

1. **Potência Gerada**:  
   Um valor aleatório entre 100W e 300W simula a potência produzida pelo painel solar. Esta variação representa as mudanças reais na geração de energia devido à intensidade da luz solar ao longo do dia.

2. **Cargas Conectadas**:  
   Um valor aleatório entre 1 e 5 simula a quantidade de dispositivos ou aparelhos conectados ao sistema. Este número reflete a dinâmica de consumo energético em uma residência.

3. **Eficiência do Painel Solar**:  
   Uma porcentagem aleatória entre 50% e 100% simula a eficiência do painel solar. Isso pode variar com base na luminosidade, sujeira no painel ou temperatura.

### Por Que os Valores Variam?  
Os valores foram programados para variar aleatoriamente para simular um cenário realista, onde fatores externos influenciam o desempenho do sistema solar.  
- **Potência** depende da intensidade da luz solar.  
- **Cargas conectadas** refletem o consumo dinâmico de energia.  
- **Eficiência** é afetada por condições climáticas e características dos painéis.

---

## Configuração do Ambiente
### Requisitos:
- Arduino IDE (ou simulação no Wokwi)
- Biblioteca: `Wire.h` (padrão na IDE Arduino)
- Biblioteca: `LiquidCrystal_I2C.h`  
  Instale na IDE Arduino via **Gerenciador de Bibliotecas**:
  1. Vá para **Ferramentas > Gerenciar Bibliotecas**.
  2. Pesquise por **LiquidCrystal I2C** e instale a versão mais recente.

### Montagem:
1. Conecte o LCD ao Arduino via interface I2C:
   - **VCC e GND**: alimentação.
   - **SDA e SCL**: comunicação.
2. Certifique-se de que o endereço I2C do LCD é **0x27**.

---

## Código Fonte
```cpp
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
