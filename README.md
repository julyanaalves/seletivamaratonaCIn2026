# Seletiva Maratona CIn 2026

Repositório com soluções de problemas de contests (Codeforces/afins) organizadas por dia. Cada dia tem uma seção retrátil com as questões daquele dia; dentro de cada questão há link para o arquivo-fonte e exemplos de entrada/saída em tabela.

- Linguagem principal: C++17
- Ambiente alvo: Windows (PowerShell) + g++
- Estrutura de pastas: `YYYYMMDD/Letra.cpp` (ex.: `20251025/D.cpp`)

## Como compilar/rodar localmente (Windows)

Use g++ (MinGW/WSL). Exemplos (PowerShell):

```powershell
# Compilar um arquivo
g++ -std=c++17 -O2 -Wall -Wextra -o .\20251025\D.exe .\20251025\D.cpp

# Executar
.\20251025\D.exe
```

Ajuste o nome do arquivo conforme a questão.

---

<details>
<summary><strong>Dia 25/10/2025</strong></summary>

### Arquivos do dia
- `20251025/A.cpp`
- `20251025/B.cpp`
- `20251025/C.cpp`
- `20251025/D.cpp`
- `20251025/E.cpp`
- `20251025/F.cpp`
- `20251025/G.cpp`
- `20251025/H.cpp`
- `20251025/I.cpp`
- `20251025/J.cpp` (pendente)
- `20251025/K.cpp` (pendente)
- `20251025/L.cpp` (pendente)
- `20251025/M.cpp` (pendente)
- `20251025/N.cpp` (pendente)
<details>
<summary><strong>Questão A — Tasks for Polycarp</strong> — <code>20251025/A.cpp</code></summary>

- Polycarp registra, por n dias, qual tarefa (A..Z) resolveu a cada dia. O professor não quer que ele retome uma tarefa após trocá-la: cada letra deve aparecer em um bloco contíguo.
- Dada a string de tamanho n, responder YES se não há suspeita (cada letra forma exatamente um bloco) e NO caso contrário.

Exemplo:

| Input | Output |
|---|---|
| <pre>
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB
</pre> | <pre>
NO
NO
YES
YES
YES
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão B — Obtain Two Zeroes (ops com ímpar/ par)</strong> — <code>20251025/B.cpp</code></summary>

- Dado a e b. Em um passo, pode-se: somar a com um inteiro ímpar positivo; ou subtrair de a um inteiro par positivo. Qual o menor número de passos para obter b a partir de a?
- Sempre é possível. Responder para t casos.

Exemplo:

| Input | Output |
|---|---|
| <pre>
5
2 3
10 10
2 4
7 4
9 3
</pre> | <pre>
1
0
2
2
1
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão C — XOR and Shuffle</strong> — <code>20251025/C.cpp</code></summary>

- Tem-se um array de n−1 inteiros; define-se x como o XOR de todos eles, adiciona-se x ao fim e embaralha-se, obtendo um array de tamanho n. Dado o array final, recuperar algum valor possível de x.

Exemplo:

| Input | Output |
|---|---|
| <pre>
4
4
4 3 2 5
5
6 1 10 7 10
6
6 6 6 6 6 6
3
100 100 0
</pre> | <pre>
3
7
6
0
</pre> |

</details>

<hr/>

<hr/>

<details>
<summary><strong>Questão D — Lanternas (caminho iluminado)</strong> — <code>20251025/D.cpp</code></summary>

- Dado O=(0,0), P, e lanternas A e B com mesmo raio w; encontrar o menor w tal que exista caminho de O até P contido na união dos dois discos (bordas inclusas).
- Solução: mínimo entre quatro cenários que garantem conectividade do caminho:
  - w = max(|OA|, |PA|)
  - w = max(|OB|, |PB|)
  - w = max(|OA|, |PB|, |AB|/2)
  - w = max(|OB|, |PA|, |AB|/2)

Exemplo:

| Input | Output |
|---|---|
| <pre>
2
3 3
1 0
-1 6
3 3
-1 -1
4 3
</pre> | <pre>
3.6055512755
3.2015621187
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão E — Pilhas "too tall" com operações de tamanho k</strong> — <code>20251025/E.cpp</code></summary>

- Uma pilha i (1 < i < n) é "too tall" se a[i] > a[i-1] + a[i+1]. Operação: escolher k consecutivas e somar 1 a todas.
- Máximo simultâneo após operações:
  - Se k == 1: ⌊(n − 1)/2⌋
  - Se k > 1: igual ao número de pilhas que já são "too tall" inicialmente

Exemplo:

| Input | Output |
|---|---|
| <pre>
3
5 2
2 9 2 4 1
4 4
1 3 2 1
3 1
1 3 1
</pre> | <pre>
2
0
1
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão F — Prova com 4n questões (A/B/C/D/?): máximo de acertos</strong> — <code>20251025/F.cpp</code></summary>

- Há exatamente n respostas corretas de cada letra (A,B,C,D). Dada a marcação de Tim (com '?'), a pontuação máxima é:
  - sum_{L∈{A,B,C,D}} min(contagem_de_L_em_s, n)
- '?' não conta.

Exemplo:

| Input | Output |
|---|---|
| <pre>
6
1
ABCD
2
AAAAAAAA
2
AAAABBBB
2
????????
3
ABCABCABCABC
5
ACADC??ACAC?DCAABC?C
</pre> | <pre>
4
2
4
0
9
13
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão G — Dense Array</strong> — <code>20251025/G.cpp</code></summary>

- Um array é denso se, para adjacentes x,y, vale max(x,y)/min(x,y) ≤ 2. Pode inserir números em qualquer posição. Qual o mínimo a inserir?
- Para cada par adjacente, duplique o menor até 2*menor ≥ maior; o número de duplicações somado é a resposta.

Exemplo:

| Input | Output |
|---|---|
| <pre>
6
4
4 2 10 1
2
1 3
2
6 1
3
1 4 2
5
1 2 3 4 3
12
4 31 25 50 30 20 34 46 42 16 15 16
</pre> | <pre>
5
1
2
1
0
3
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão H — Maximize Sum with Sign Flips</strong> — <code>20251025/H.cpp</code></summary>

- Operação: escolher um subarray [l, r] e multiplicar todos os elementos por −1.
- Objetivo: maximizar a soma do array e encontrar o número mínimo de operações para alcançar essa soma máxima.
- Fatos chave:
  - A soma máxima possível é a soma dos valores absolutos: Σ |a[i]|.
  - O número mínimo de operações é igual ao número de blocos de números negativos quando ignoramos zeros (isto é, após remover todos os zeros, contamos quantos grupos contíguos de valores negativos existem).

Exemplo:

| Input | Output |
|---|---|
| <pre>
5
6
-1 7 -4 -2 5 -8
8
-1 0 0 -2 1 0 -3 0
5
2 -1 0 -3 -7
5
0 -17 0 1 0
4
-1 0 -2 -1
</pre> | <pre>
27 3
7 2
13 1
18 1
4 1
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão I — Converter horário 24h → 12h (AM/PM)</strong> — <code>20251025/I.cpp</code></summary>

- Ler t horários em formato 24h (hh:mm) e imprimir em 12h, mantendo zeros à esquerda.

Exemplo:

| Input | Output |
|---|---|
| <pre>
11
09:41
18:06
12:14
00:59
00:00
14:34
01:01
19:07
11:59
12:00
21:37
</pre> | <pre>
09:41 AM
06:06 PM
12:14 PM
12:59 AM
12:00 AM
02:34 PM
01:01 AM
07:07 PM
11:59 AM
12:00 PM
09:37 PM
</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão J — Em breve</strong> — <code>20251025/J.cpp</code></summary>

- Descrição: em breve.

Exemplo:

| Input | Output |
|---|---|
| <pre>—</pre> | <pre>—</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão K — Em breve</strong> — <code>20251025/K.cpp</code></summary>

- Descrição: em breve.

Exemplo:

| Input | Output |
|---|---|
| <pre>—</pre> | <pre>—</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão L — Em breve</strong> — <code>20251025/L.cpp</code></summary>

- Descrição: em breve.

Exemplo:

| Input | Output |
|---|---|
| <pre>—</pre> | <pre>—</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão M — Em breve</strong> — <code>20251025/M.cpp</code></summary>

- Descrição: em breve.

Exemplo:

| Input | Output |
|---|---|
| <pre>—</pre> | <pre>—</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão N — Em breve</strong> — <code>20251025/N.cpp</code></summary>

- Descrição: em breve.

Exemplo:

| Input | Output |
|---|---|
| <pre>—</pre> | <pre>—</pre> |

</details>

</details>

---


