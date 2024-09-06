# Técnicas de Programação e Análise de Algoritmos

## LEE01 - Lista de Exercícios Extracurricular 01

Este repositório contém os códigos utilizados na resolução dos problemas propostos na LEE01.

### Problemas e Arquivos Correspondentes:

- **A - Número Faltante:** [NumeroFaltante.c](./LEE01-TAA/NumeroFaltante.c)
- **B - Problema Fácil que Ninguém Resolveu:** [ConjecturaCollatz.c](./LEE01-TAA/ConjecturaCollatz.c)
- **C - É Primo ou Não É:** [Primo.c](./LEE01-TAA/Primo.c)
- **D - Divisibilidade por 3:** [DivisibilidadePor3.c](./LEE01-TAA/DivisibilidadePor3.c)

### Explicando os exercícios:

#### A - Número Faltante

Uma permutação de 𝑁 inteiros é uma reorganização específica dos números inteiros de 1 a 𝑁, de modo que cada número apareça exatamente uma vez na sequência resultante. Por exemplo, se 𝑁 = 10, uma permutação válida de 𝑁 seria:

`9, 4, 7, 2, 10, 1, 6, 8, 3, 5`

Neste exercício, dada uma permutação de 𝑁 inteiros, um número foi removido, e sua tarefa é identificar qual é o número faltante.

#### B - Problema Fácil que Ninguém Resolveu

Em 1937, o alemão Lothar Collatz formulou uma hipótese matemática ainda não demonstrada, conhecida como a **Conjectura de Collatz**. A conjectura afirma que, dada a aplicação de duas regras simples a um número inteiro 𝑁, o resultado sempre será 1 após uma série de operações:

- Se 𝑁 for par, divida por 2 → 𝑁 / 2
- Se 𝑁 for ímpar, multiplique por 3 e adicione 1 → 3𝑁 + 1

Sua tarefa é, dado um número inteiro 𝑁, aplicar as regras sucessivamente até que o valor seja 1.

#### C - É Primo ou Não É

Um **número primo** é qualquer número inteiro maior que 1 que só pode ser dividido por 1 e por ele mesmo. Dada uma lista de números inteiros, sua tarefa é identificar quais números são primos e quais não são.

#### D - Divisibilidade por 3

Na matemática, um número é divisível por 3 quando a soma dos seus dígitos resulta em um número divisível por 3. Por exemplo:

- `51` → 5 + 1 = 6 ✓
- `101` → 1 + 0 + 1 = 2 ×
- `234` → 2 + 3 + 4 = 9 ✓
  
Sua tarefa é, dado um número, determinar se ele é divisível por 3 ou não.

---

### Como Executar

1. Clone este repositório.
2. Compile e execute os arquivos `.c` correspondentes a cada problema.
