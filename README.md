 Otimização de Energia Solar para Residências

 📋 Descrição do Projeto
Este projeto visa otimizar o uso de energia solar em residências utilizando o Arduino como base. O sistema monitora a **potência gerada**, a **eficiência do painel solar** e o **nível de carga da bateria** (simulados). Os dados são exibidos em um LCD, fornecendo informações em tempo real para auxiliar no gerenciamento da energia.

---

 🛠️ Componentes Utilizados
 Hardware:
- Arduino Uno (ou compatível)
- Módulo LCD 16x2 com comunicação I2C
- Potenciômetro (simulação de sensor de tensão da bateria)
- LDR (simulação de eficiência do painel solar)
- Resistores de 10kΩ
- Protoboard e fios de conexão

 Software:
- Simulador: [Wokwi](https://wokwi.com/)
- Linguagem: C++ para Arduino
- IDE Arduino ou integração no Wokwi

---

 🚀 Como Funciona
1. **Medição de Potência**: Simulada usando um potenciômetro, a potência gerada é exibida no LCD em watts (W).
2. **Eficiência do Painel**: O LDR mede a luminosidade para estimar a eficiência do painel solar em porcentagem (%).
3. **Nível de Carga da Bateria**: A carga da bateria é simulada pela leitura analógica de um potenciômetro.

O sistema alterna entre as informações no LCD, exibindo dados essenciais em tempo real.

---

 ⚙️ Configuração do Ambiente
 Requisitos:
- Arduino IDE (ou simulação no Wokwi)
- Biblioteca: `Wire.h` (padrão na IDE Arduino)
- Biblioteca: `LiquidCrystal_I2C.h`  
  Instale na IDE Arduino via **Gerenciador de Bibliotecas**:
  1. Vá para **Ferramentas > Gerenciar Bibliotecas**.
  2. Pesquise por **LiquidCrystal I2C** e instale a versão mais recente.

 Montagem:
1. Conecte o LCD ao Arduino via interface I2C:
   - **VCC e GND**: alimentação.
   - **SDA e SCL**: comunicação.
2. Conecte o potenciômetro ao pino A0 para simular a tensão da bateria.
3. Monte o LDR com um divisor resistivo conectado ao pino A1.

---

 📂 Código Fonte
O código completo está disponível no arquivo [`main.ino`](./main.ino). Para usar:
1. Faça o upload do código para o Arduino.
2. Certifique-se de que o LCD esteja conectado corretamente.
3. No Wokwi, importe o arquivo ou copie e cole o código na IDE Arduino.

---

 🖥️ Instruções de Uso
1. Execute a simulação no [Wokwi](https://wokwi.com/).
2. Ajuste o potenciômetro para alterar os valores de potência e carga.
3. Observe as leituras no LCD, que alternam entre:
   - **Potência gerada em watts**.
   - **Número de cargas conectadas**.
   - **Eficiência do painel em porcentagem**.

---

 🔗 Link para a Simulação no Wokwi
[**Clique aqui para acessar o modelo no Wokwi**](#)  
*(Insira o link gerado pelo Wokwi após finalizar sua montagem.)*

---

 🧾 Licença
Este projeto é distribuído sob a licença MIT. Consulte o arquivo [LICENSE](./LICENSE) para mais detalhes.
