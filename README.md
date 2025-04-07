
# Jogo de Batalha Naval em C - Desafio da Faculdade

Este projeto foi desenvolvido como parte dos desafios propostos pela disciplina de **Introdução à Programação de Computadores** no curso de **Engenharia de Software**. O objetivo foi construir, em três etapas, uma versão progressivamente mais completa do clássico jogo **Batalha Naval**, utilizando a linguagem C. Cada nível adiciona novos conceitos de lógica de programação, manipulação de matrizes, validação e visualização em console.

---

## 🧩 Nível Novato — Tabuleiro e Navios Lineares

### Objetivo:
Criar a base do jogo com um **tabuleiro 10x10** e **dois navios** posicionados de forma **horizontal ou vertical**.

### Funcionalidades:
- Criação e inicialização do tabuleiro com valor `0` (água).
- Posicionamento fixo de **dois navios de tamanho 3** com valor `3`, definidos diretamente no código.
- Validação para que os navios:
  - Estejam **dentro dos limites** do tabuleiro.
  - **Não se sobreponham**.
- Exibição do tabuleiro no console, usando `printf()` com alinhamento visual.

---

## 🧭 Nível Aventureiro — Navios Diagonais

### Objetivo:
Adiciona complexidade com o posicionamento de **quatro navios**, sendo **dois deles diagonais**.

### Funcionalidades Adicionais:
- Dois navios posicionados **diagonalmente** (do tipo `tabuleiro[i][i]` ou `tabuleiro[i][9 - i]`).
- Os outros dois continuam sendo horizontais ou verticais.
- Continuação da lógica de:
  - Validação de limites.
  - Prevenção de sobreposição.
- Navios continuam sendo representados pelo valor `3`.
- O tabuleiro é exibido com todos os navios corretamente posicionados.

---

## 🧠 Nível Avançado — Habilidades Especiais com Áreas de Efeito

### Objetivo:
Implementar **habilidades especiais** que afetam o tabuleiro com diferentes **áreas de efeito** (como ataque em cone, cruz e octaedro).

### Funcionalidades Avançadas:
- Criação de três **matrizes de habilidade** (5x5) com formas:
  - **Cone**: Expansão triangular para baixo.
  - **Cruz**: Interseção vertical e horizontal.
  - **Octaedro**: Forma de losango simétrico.
- As matrizes utilizam:
  - `1` para representar a área afetada.
  - `0` para áreas não afetadas.
- Lógica para sobrepor essas habilidades no tabuleiro:
  - Centro da habilidade definido diretamente no código.
  - Validação para que não ultrapassem os limites do tabuleiro.
  - Posições afetadas recebem valor `5` (sem sobrepor navios).
- Exibição clara no console:
  - `0` = água
  - `3` = navio
  - `5` = área de efeito da habilidade

---

## 💡 Conceitos Aplicados

- Manipulação de **matrizes bidimensionais**.
- Uso de **funções** para modularização e organização do código.
- Aplicação de **laços aninhados** e **condicionais**.
- Validação de **coordenadas e limites de matriz**.
- Princípios de **documentação e legibilidade de código**.

---

## 📘 Como Executar

1. Copie o código para um arquivo `.c` (ex: `batalha_naval.c`).
2. Compile com `gcc`:
   ```bash
   gcc batalha_naval.c -o batalha_naval
   ```
3. Execute o programa:
   ```bash
   ./batalha_naval
   ```

---

## 🎓 Sobre o Projeto

Este projeto foi desenvolvido com fins educacionais para praticar:
- Estruturas básicas da linguagem C.
- Pensamento lógico e visualização de estruturas no console.
- Organização de código e boas práticas de programação.

Trata-se de um exercício fundamental para consolidar a base da programação estruturada, com aplicação em jogos e simulações.

---

## 👨‍💻 Autor

**João Victor Oliveira Santos**  
Curso de Engenharia de Software 
Logica de Programação em C
Faculdade: Estácio de Sá
