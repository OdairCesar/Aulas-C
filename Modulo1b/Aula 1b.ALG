Algoritmo "Calculo Media"
// Disciplina  : Algoritmos e Programação Estruturada
// Professor   : Vanessa Matias Leite
// Descrição   : Primeiras ideias de algoritmos
// Autor(a)    : Odair Cesar
// Data atual  : 27/04/2020
Var
// Seção de Declarações das variáveis 
   valor1, valor2, soma, media: Real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva("Insira a primeira nota: ")
   Leia(valor1)
   Escreva("Insira a segunda nota: ")
   Leia(valor2)
   soma <- valor1 + valor2
   media <- soma/2
   Escreval("-----------------------------")
   Escreval("A media do aluno é: ", media)
   Escreval("-----------------------------")
   se (media>=6)entao
      escreval("Aluno Aprovado!!!!")
   senao
      escreval("Aluno Reprovado!!!")
   Fimse
   Escreva("-----------------------------")
Fimalgoritmo