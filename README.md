# 🏦 Sistema de Saque — Caixa Eletrônico

 | **Atividade 01: Algoritmos e Lógica de Programação**

Este é um programa desenvolvido em **Linguagem C** que simula o funcionamento do sistema de saques de um caixa eletrônico. O algoritmo calcula a menor quantidade possível de cédulas necessárias para entregar o valor solicitado pelo usuário.

---

## 🛠️ Regras de Negócio e Funcionamento

1. **Validação de Valor:** O sistema aceita apenas valores que sejam **múltiplos de 5**. Caso o usuário digite um valor inválido (como R\$ 42 ou R\$ 13), o sistema emitirá um alerta informando que o saque não é possível.
2. **Otimização de Cédulas:** O algoritmo prioriza sempre as notas de maior valor para minimizar a quantidade total de papel-moeda entregue.
3. **Cédulas Disponíveis:**

   | 💵 Nota | Valor |
   | :--- | :--- |
   | Nota de 100 | R\$ 100,00 |
   | Nota de 50 | R\$ 50,00 |
   | Nota de 20 | R\$ 20,00 |
   | Nota de 10 | R\$ 10,00 |
   | Nota de 5 | R\$ 5,00 |

---

## 🚀 Como Executar o Projeto

Para compilar e rodar o programa na sua máquina, certifique-se de ter um compilador de C instalado (como o `gcc`).

1. **Clone o repositório:**
   ```bash
   git clone https://github.com
   ```

2. **Acesse a pasta do projeto:**
   ```bash
   cd ATIVIDADE-01-ALG-E-LOG---SISTEMA-DE-SAQUE-EM-LINGUAGEM-C
   ```

3. **Compile o código:**
   ```bash
   gcc -o sistema_saque main.c
   ```

4. **Execute o programa:**
   ```bash
   ./sistema_saque
   ```

---

## 💻 Exemplo de Execução

**Entrada:**
```text
Digite o valor que deseja sacar: R$ 285
```

**Saída Esperada:**
```text
Saque realizado com sucesso!
Notas entregues:
- 2 nota(s) de R$ 100
- 1 nota(s) de R$ 50
- 1 nota(s) de R$ 20
- 1 nota(s) de R$ 10
- 1 nota(s) de R$ 5
Total de cédulas: 6
```

---

## 🧠 Tecnologias Utilizadas

*   **Linguagem C**
*   Lógica baseada em operadores de divisão (`/`) e resto da divisão (`%`) para contagem das notas.

---
Desenvolvido como atividade acadêmica para fins de estudo de algoritmos. 🚀
