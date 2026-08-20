# ED2 — Sorting — Lista 01

Exercícios de fixação de **Estrutura de Dados II** — Algoritmos de ordenação (Bubble Sort, Selection Sort, Insertion Sort) e suas variações.

> Instituto Federal do Triângulo Mineiro — Campus Patrocínio
> Curso: Tecnologia em Análise e Desenvolvimento de Sistemas — 4º Período
> Professor: Júnio Moreira
> Data: 12/08/2026 · **Entrega: 26/08/2026**

---

## 📁 Estrutura do Projeto

```
ed2-sorting-list01-cpp/
├── CMakeLists.txt
├── README.md
└── src/
    ├── Exer01_BubbleSortString.cpp
    ├── Exer02_SelectionSortDesc.cpp
    ├── Exer03_SelectionSortKSwaps.cpp
    ├── Exer04_InsertionSortCountShifts.cpp
    └── Exer05_InsertionSortDescFromEnd.cpp
```

Cada arquivo `.cpp` é **autônomo** (tem sua própria `main()`) e é compilado como um executável independente. Todos seguem o mesmo padrão de três blocos:

| Bloco | Responsabilidade |
|---|---|
| **Lógica pura** | Implementa o algoritmo em si, usando STL (`vector`, `string`, etc). Não faz `cin`/`cout`. |
| `onlineJudge()` | Adaptador: lê a entrada com `cin`, chama a lógica pura, imprime com `cout`. |
| `runExer...()` | Roda os exemplos do enunciado localmente e compara com o gabarito (`[PASSOU]` / `[FALHOU]`). |

---

## 📝 Exercícios

| # | Arquivo | Problema | Técnica | Complexidade |
|---|---|---|---|---|
| 1 | `Exer01_BubbleSortString.cpp` | Ordenar caracteres de uma string alfabeticamente | Bubble Sort | O(n²) |
| 2 | `Exer02_SelectionSortDesc.cpp` | Ordenar vetor em ordem decrescente | Selection Sort (variação) | O(n²) |
| 3 | `Exer03_SelectionSortKSwaps.cpp` | Estado do vetor após k trocas do Selection Sort | Selection Sort (simulação parcial) | O(k·n) |
| 4 | `Exer04_InsertionSortCountShifts.cpp` | Ordenar e contar deslocamentos no `while` | Insertion Sort (instrumentado) | O(n²) |
| 5 | `Exer05_InsertionSortDescFromEnd.cpp` | Ordenar decrescente construindo do fim para o início | Insertion Sort (variação) | O(n²) |

<details>
<summary><strong>Detalhes de cada exercício (entrada, saída e exemplo)</strong></summary>

### 1. Ordenação de Caracteres em String com Bubble Sort
**Entrada:** string `S` de tamanho N, composta por letras minúsculas.
**Saída:** a string com os caracteres ordenados alfabeticamente. **Deve usar estritamente Bubble Sort.**

```
Entrada          Saída
estrutura        aeerrsttu
```

### 2. Ordenação Decrescente de Vetor com Selection Sort
**Entrada:** N e o vetor `V`.
**Saída:** o vetor ordenado em ordem **decrescente**, usando a lógica do Selection Sort (selecionar o maior da sublista não ordenada a cada passo).

```
Entrada          Saída
5                5 4 3 2 1
3 1 4 5 2
```

### 3. Simulação Parcial do Selection Sort com k Trocas
**Entrada:** N, k e o vetor `A`.
**Saída:** o estado do vetor imediatamente após executar as **primeiras k trocas** do Selection Sort padrão (crescente).

```
Entrada          Saída
5 2              13 14 29 37 64
29 64 14 37 13
```

### 4. Contagem de Deslocamentos no Insertion Sort
**Entrada:** N (fixo em 10) e o vetor de 10 elementos.
**Saída:** primeira linha com o vetor ordenado crescente; segunda linha com o **total de cópias/deslocamentos** realizados dentro do `while` (`array[j+1] = array[j]`).

```
Entrada                              Saída
10                                    12 27 33 41 56 62 67 69 72 74
72 12 62 69 27 67 41 56 33 74         26
```

### 5. Insertion Sort com Sublista Ordenada no Final
**Entrada:** N e o vetor.
**Saída:** o vetor ordenado em ordem **decrescente**, construindo a sublista ordenada a partir do **final** do vetor em direção ao início (percorrendo da direita para a esquerda).

```
Entrada          Saída
6                12 9 7 5 3 1
12 7 9 1 5 3
```

</details>

---

## 🚀 Como Executar no CLion

1. Abra o projeto e recarregue o CMake (**Reload CMake Project**, ícone de sincronizar que aparece ao editar o `CMakeLists.txt`).
2. No seletor de alvos de execução (topo da janela), escolha o exercício desejado.
3. Clique em **Run** (▶) ou **Debug** (🐞).

> **Dica:** cada arquivo alterna entre dois modos dentro do `int main()`:
> - **Modo teste local** (padrão): roda `runExer...()` com os exemplos do enunciado.
> - **Modo juiz online**: comente a chamada de `runExer...()` e descomente `onlineJudge()` antes de submeter no juiz.

```cpp
int main() {
    runExer01BubbleSortString();  // <- modo teste local (ativo)
    // onlineJudge();             // <- modo juiz online (comentado)
    return 0;
}
```

---

## 💻 Como Executar pelo Terminal (sem CLion)

Caso prefira compilar manualmente com `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -o exer01 src/Exer01_BubbleSortString.cpp
./exer01
```

Para testar o modo juiz online via terminal, redirecione um arquivo de entrada:

```bash
echo "estrutura" | ./exer01
```

---

## ⚠️ Atenção ao enunciado

- **Questão 1** exige explicitamente o uso do **Bubble Sort** — não use `std::sort` ou outro algoritmo, mesmo que dê o resultado certo.
- **Questão 2** é uma *variação* do Selection Sort (busca o **maior**, não o menor) — implemente a lógica manualmente, não use `sort` com comparador decrescente.
- **Questão 3** pede o estado **intermediário** do vetor, não o vetor totalmente ordenado — cuidado para não rodar o algoritmo completo.
- **Questão 4** exige contar deslocamentos **apenas** dentro do `while` interno do Insertion Sort — não contar comparações nem outras atribuições.
- **Questão 5** constrói a sublista ordenada a partir do **fim** do vetor — a lógica de inserção é espelhada em relação ao Insertion Sort tradicional.

---

## ✅ Pré-requisitos

- Compilador C++17 ou superior (GCC, Clang ou MSVC)
- CMake ≥ 3.20
- CLion (recomendado) ou qualquer IDE/editor de sua preferência

---

## 📚 Referência

Lista de exercícios original: *Exercícios de Fixação — Estrutura de Dados II* (12/08/2026 · entrega 26/08/2026).
