Algoritmo "Calculo_bonus"
// Disciplina  : Algoritmos e Programa��o Estruturada
// Professor   : Vanessa Matias Leite
// Descri��o   : Programa para calcular o bonus de 30% no salario de determinado funcionario
// Autor(a)    : Odair Cesar
// Data atual  : 27/04/2020
Var
// Se��o de Declara��es das vari�veis 
   totsal, sal, bonus:Real
   nome: Caractere

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   Escreval("Nome do funcionario:")
   Leia(nome)
   Escreval("Salario atual: ")
   Leia(sal)
   bonus <- sal*(30/100)
   Escreval("O bonus � R$", bonus)
   totsal <- sal + bonus
   Escreval("--------------------------------")
   Escreval("O salario total ser� R$", totsal)
   Escreva("--------------------------------")

Fimalgoritmo