#include <stdio.h>
#include <math.h>

/*Crie um código para receber três notas decimais e calcular a média de um aluno com
precisão de 03 casas decimais. Determine se o aluno está aprovado.
*/

int main ()
{
double nota1, nota2, nota3, media;

printf("Escreva sua primeira nota: ");
scanf ("%lf" ,&nota1);
printf("Escreva sua segunda nota: ");
scanf ("%lf" ,&nota2);
printf("Escreva sua segunda nota: ");
scanf ("%lf" ,&nota3);

media = (nota1 + nota2 + nota3) /3;

if (media>= 7){
    printf ("Você está APROVADO!");
}

else {
  printf ("Você se LASCOU");

}


return 0;

}
