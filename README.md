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
| <pre>5\n3\nABA\n11\nDDBBCCCBBEZ\n7\nFFGZZZY\n1\nZ\n2\nAB\n</pre> | <pre>NO\nNO\nYES\nYES\nYES\n</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão B — Obtain Two Zeroes (ops com ímpar/ par)</strong> — <code>20251025/B.cpp</code></summary>

- Dado a e b. Em um passo, pode-se: somar a com um inteiro ímpar positivo; ou subtrair de a um inteiro par positivo. Qual o menor número de passos para obter b a partir de a?
- Sempre é possível. Responder para t casos.

Exemplo:

| Input | Output |
|---|---|
| <pre>5\n2 3\n10 10\n2 4\n7 4\n9 3\n</pre> | <pre>1\n0\n2\n2\n1\n</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão C — XOR and Shuffle</strong> — <code>20251025/C.cpp</code></summary>

- Tem-se um array de n−1 inteiros; define-se x como o XOR de todos eles, adiciona-se x ao fim e embaralha-se, obtendo um array de tamanho n. Dado o array final, recuperar algum valor possível de x.

Exemplo:

| Input | Output |
|---|---|
| <pre>4\n4\n4 3 2 5\n5\n6 1 10 7 10\n6\n6 6 6 6 6 6\n3\n100 100 0\n</pre> | <pre>3\n7\n6\n0\n</pre> |

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
| <pre>2\n3 3\n1 0\n-1 6\n3 3\n-1 -1\n4 3\n</pre> | <pre>3.6055512755\n3.2015621187\n</pre> |

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
| <pre>3\n5 2\n2 9 2 4 1\n4 4\n1 3 2 1\n3 1\n1 3 1\n</pre> | <pre>2\n0\n1\n</pre> |

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
| <pre>6\n1\nABCD\n2\nAAAAAAAA\n2\nAAAABBBB\n2\n????????\n3\nABCABCABCABC\n5\nACADC??ACAC?DCAABC?C\n</pre> | <pre>4\n2\n4\n0\n9\n13\n</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão G — Dense Array</strong> — <code>20251025/G.cpp</code></summary>

- Um array é denso se, para adjacentes x,y, vale max(x,y)/min(x,y) ≤ 2. Pode inserir números em qualquer posição. Qual o mínimo a inserir?
- Para cada par adjacente, duplique o menor até 2*menor ≥ maior; o número de duplicações somado é a resposta.

Exemplo:

| Input | Output |
|---|---|
| <pre>6\n4\n4 2 10 1\n2\n1 3\n2\n6 1\n3\n1 4 2\n5\n1 2 3 4 3\n12\n4 31 25 50 30 20 34 46 42 16 15 16\n</pre> | <pre>5\n1\n2\n1\n0\n3\n</pre> |

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
| <pre>5\n6\n-1 7 -4 -2 5 -8\n8\n-1 0 0 -2 1 0 -3 0\n5\n2 -1 0 -3 -7\n5\n0 -17 0 1 0\n4\n-1 0 -2 -1\n</pre> | <pre>27 3\n7 2\n13 1\n18 1\n4 1\n</pre> |

</details>

<hr/>

<details>
<summary><strong>Questão I — Converter horário 24h → 12h (AM/PM)</strong> — <code>20251025/I.cpp</code></summary>

- Ler t horários em formato 24h (hh:mm) e imprimir em 12h, mantendo zeros à esquerda.

Exemplo:

| Input | Output |
|---|---|
| <pre>11\n09:41\n18:06\n12:14\n00:59\n00:00\n14:34\n01:01\n19:07\n11:59\n12:00\n21:37\n</pre> | <pre>09:41 AM\n06:06 PM\n12:14 PM\n12:59 AM\n12:00 AM\n02:34 PM\n01:01 AM\n07:07 PM\n11:59 AM\n12:00 PM\n09:37 PM\n</pre> |

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


