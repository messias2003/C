#include <stdio.h>

/*Faça um programa em C que receba a idade do usuário e verifique
se ele tem 18 anos ou mais. Se a resposta for positiva escrever
"maior de idade", senão "menor idade".

*/

int main () {

int idade;
char nome;


printf ("Digite seu nome:  ");
scanf ("%s", &nome);

printf("%s,digite sua idade", &nome);
scanf ("%i", &idade);

if (idade>=18){
    printf ("VAI PRESO; \n");

}

else printf ("Se safou");




return 0;
}

