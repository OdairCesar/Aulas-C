Algoritmo "Calculo Media"
// Disciplina  : Algoritmos e Programa��o Estruturada
// Professor   : Vanessa Matias Leite
// Descri��o   : Primeiras ideias de algoritmos
// Autor(a)    : Odair Cesar
// Data atual  : 27/04/2020
Var
// Se��o de Declara��es das vari�veis 
   valor1, valor2, soma, media: Real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   Escreva("Insira a primeira nota: ")
   Leia(valor1)
   Escreva("Insira a segunda nota: ")
   Leia(valor2)
   soma <- valor1 + valor2
   media <- soma/2
   Escreval("-----------------------------")
   Escreval("A media do aluno �: ", media)
   Escreval("-----------------------------")
   se (media>=6)entao
      escreval("Aluno Aprovado!!!!")
   senao
      escreval("Aluno Reprovado!!!")
   Fimse
   Escreva("-----------------------------")
Fimalgoritmo