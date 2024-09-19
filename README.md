# Target Challenge

Repositório destinado a resolução do teste prático do processo seletivo da empresa Target Sistemas.

## Questões do Desafio

### Primeira Questão 

>Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

Para resolver essa questão utilizei a linguagem C, obtendo mais performance por se tratar de uma linguagem de baixo nível. Aqui é possível ver o [**Arquivo da Solução**](respostas/questao_1.c).


### Segunda Questão

>Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

Para resolver essa questão também foi utilizada a linguagem C, aqui é possível ver o [**Arquivo da Solução**](respostas/questao_2.c).

### Terceira Questão

Observe o trecho de código abaixo: 

    ```c
    int INDICE = 12, SOMA = 0, K = 1; 
    enquanto K < INDICE faça { 
        K = K + 1; SOMA = SOMA + K; 
    } 
    imprimir(SOMA).
    ```

Ao final do processamento, qual será o valor da variável SOMA?


Para resolver essa questão, apenas compilei o código mostrado acima em C e obtive como output que o valor de **SOMA = 77**. Aqui é possível ver o [**Arquivo da solução**](respostas/questao_3.c).


### Quarta Questão

Descubra a lógica e complete o próximo elemento:

- a) 1, 3, 5, 7, ___
- b) 2, 4, 8, 16, 32, 64, ___
- c) 0, 1, 4, 9, 16, 25, 36, ___
- d) 4, 16, 36, 64, ___
- e) 1, 1, 2, 3, 5, 8, ___
- f) 2,10, 12, 16, 17, 18, 19, ___

Sequências preenchidas e explicadas abaixo:

- a) 1, 3, 5, 7, **9**  --> O próximo elemento é igual ao elemento anterior + 2.
- b) 2, 4, 8, 16, 32, 64, **128** --> O próximo elemento é igual a duas vezes o elemento anterior.
- c) 0, 1, 4, 9, 16, 25, 36, **49** --> O próximo elemento é seu índice ao quadrado.
- d) 4, 16, 36, 64, **100** --> Sequência de números pares ao quadrado.
- e) 1, 1, 2, 3, 5, 8, **13** --> Segue a sequência de Fibonacci.
- f) 2, 10, 12, 16, 17, 18, 19, **200** --> Sequência crescente de números que começas com a letra 'd'.

### Quinta Questão

Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?

**Solução:** Para resolver esse problema usando apenas duas idas até uma das salas das lâmpadas, basta que um interruptor seja ligado (Interruptor A), deixe ele ligado por um tempo, esse o suficiente para que a lâmpada ligada a ele aqueça. 

Então desligue o interruptor A e ligue o segundo interruptor (Interruptor B) e deixe-o ligado. 

Agora vá a uma das salas das lâmpadas, três coisas podem acontecer, a lâmpada esta apagada e fria, ou seja, é controlada pelo terceiro interruptor (Interruptor C) ou a lâmpada esta acesa e é controlada pelo interruptor B ou a lâmpada esta apagada e quente, sendo assim, controlada pelo interruptor A. 

Depois de definir qual interruptor controla a primeira lâmpada visitada, vá a próxima sala e faça o mesmo teste. Assim que definir o interruptor da segunda lâmpada, a última sala não precisa ser aberta e a lâmpada nela presente será controlada pelo interruptor que não controla nenhuma das lâmpadas visitadas.


### Dica

Para compilar os arquivos de código de maneira fácil e online, utilizar o site [onlinegdb](https://www.onlinegdb.com/).


