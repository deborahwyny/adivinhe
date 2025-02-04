# Jogo de Adivinhação em C

Este é um jogo simples de adivinhação onde o jogador deve descobrir um número secreto gerado aleatoriamente entre **0 e 100**. O jogo inclui diferentes níveis de dificuldade e dicas para ajudar o jogador.

---

## **Visão Geral**
O jogo funciona da seguinte forma:
1. O jogador escolhe um nível de dificuldade (Fácil, Médio ou Difícil).
2. Um número secreto é gerado aleatoriamente.
3. O jogador faz chutes e recebe dicas se o número secreto é maior ou menor.
4. O jogo termina quando o jogador acerta o número ou esgota as tentativas.

---

## **Funcionalidades**
- Interface inicial com arte ASCII.
- Três níveis de dificuldade:
  - **Fácil**: 16 tentativas.
  - **Médio**: 10 tentativas.
  - **Difícil**: 6 tentativas.
- Validação de entrada para números negativos.
- Dicas após cada chute ("maior" ou "menor").

---

## **Estrutura do Código**
O código é estruturado da seguinte forma:

### **Bibliotecas Utilizadas**
- `<stdio.h>`: Para funções de entrada/saída (`printf`, `scanf`).
- `<stdlib.h>`: Para funções utilitárias (`rand`, `srand`).
- `<time.h>`: Para geração de números aleatórios baseados no tempo.

### **Função Principal (`main`)**
- Exibe a interface inicial.
- Gera o número secreto.
- Gerencia o loop de tentativas.
- Fornece feedback ao jogador.

### **Variáveis Principais**
| Variável          | Tipo | Descrição                                      |
|--------------------|------|------------------------------------------------|
| `random_number`    | `int`| Número secreto gerado aleatoriamente (0-100).  |
| `guess`            | `int`| Chute inserido pelo jogador.                   |
| `level`            | `int`| Nível de dificuldade escolhido (1, 2 ou 3).    |
| `i`                | `int`| Contador de tentativas no loop `for`.          |

---

## **Como Executar**
1. Compile o código usando um compilador C (ex: `gcc`):
   ```bash
   gcc adivinhacao.c -o adivinhacao