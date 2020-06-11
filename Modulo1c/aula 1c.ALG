Algoritmo "Calculo_bonus"
// Disciplina  : Algoritmos e Programação Estruturada
// Professor   : Vanessa Matias Leite
// Descrição   : Programa para calcular o bonus de 30% no salario de determinado funcionario
// Autor(a)    : Odair Cesar
// Data atual  : 27/04/2020
Var
// Seção de Declarações das variáveis 
   totsal, sal, bonus:Real
   nome: Caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreval("Nome do funcionario:")
   Leia(nome)
   Escreval("Salario atual: ")
   Leia(sal)
   bonus <- sal*(30/100)
   Escreval("O bonus é R$", bonus)
   totsal <- sal + bonus
   Escreval("--------------------------------")
   Escreval("O salario total será R$", totsal)
   Escreva("--------------------------------")

Fimalgoritmo