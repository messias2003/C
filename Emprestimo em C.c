#include<stdio.h> 



/* Implemente um cOdigo em C, para aprovar emprestimo bancário. 
O código deve pedir 3 informações: VALOR do emprestimo,
número de PARCELAS e SALARIO do solicitante.
Aprovar empréstimo caso o valor das parcelas representem no máximo 30% 
salário do solicitante*/


int main () 
{
double VE, salario,limite, condicao;
int NP;

printf ("Bem vindo a MS emprestimos!: \n");
printf ("Qual o valor do emprestimo?: ");
scanf ("%lf", &VE);
printf ("\n Quantas vezes o senhor(a) deseja parcelar?: ");
scanf ("%d", &NP);
printf ("Ok, agora por gentileza, informe seu salário: ");
scanf ("%lf", &salario);

limite= salario * 0.30; 
condicao= VE/NP;

if (limite>=condicao) {

    printf ("Parabéns, seu emprestimo foi aprovado");
} 
else {
    printf ("Emprestimo negado, tente aumentar a quantidade das parcelas");

}





return 0; 
}
