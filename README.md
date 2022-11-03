# PS_IoT_2Semestre2022

## Disciplina: AI ENGINEERING, COGNITIVE AND SEMANTIC COMPUTATION & IOT

## The Five

Isabella Oliveira Queiroz RM: 83588 4SIS

Gabriel Espanhol Henrique Santos RM: 83955 4SIS

Leonardo dos Santos Mesquita RM: 83952 4SIS

Patrick Luiz Arruda RM: 83941 4SIS

Leonardo Jordão Lopes RM: 83659 4SIS

### Parte 1 [5 pontos] Link do projeto: https://www.tinkercad.com/things/5w4jqXmWkB2

Objetivo era simular um estacionamento de shopping

● 2 (dois) sensores ultrassônicos;
● 2 (dois) LEDs vermelhos;
● 2 (dois) LEDs verdes
● 1 (um) display LCD.

imagem do circuito:

![alt text](https://github.com/gabrielespanhol/PS_IoT_2Semestre2022/blob/main/Parte1/Arduino_Sensores.png)

### Parte 2. [5 pontos] Inspirado em uma arquitetura simples IoT, gateway utilizando o Node-Red.

Fluxo1 - O gateway envia via protocolo MQTT. Simula um estacionamento com 2 vagas (vaga A e vaga B) utilizando o node “inject”.

Fluxo2 - Dashboard que recebe os dados via protocolo MQTT e exibe o status em um Dashboard

fluxo 1 producer:

![alt text](https://github.com/gabrielespanhol/PS_IoT_2Semestre2022/blob/main/Parte2/Fluxo_Producer.png)

fluxo 2 Consumer:

![alt text](https://github.com/gabrielespanhol/PS_IoT_2Semestre2022/blob/main/Parte2/Fluxo_Consumer.png)

Dashboard vagas:

![alt text](https://github.com/gabrielespanhol/PS_IoT_2Semestre2022/blob/main/Parte2/Dashboard_Vagas.png)
