#include <stdio.h>
#include <math.h>

int main()
{
   int opcao = -1;
   float a, b, c, x, delta, x1, x2;

   /* Repete o menu ate o usuario escolher a opcao 0 */
   while(opcao != 0)
   {
      printf("\n==== RESOLVEDOR DE EQUACOES ====\n");
      printf("1 - Equacao do primeiro grau\n");
      printf("2 - Equacao de segundo grau\n");
      printf("3 - Sobre o programa\n");
      printf("0 - Sair\n");

      printf("\nDigite sua opcao: ");
      scanf("%d", &opcao);

      /* Executa a operacao correspondente a opcao escolhida */
      switch (opcao)
      {
         case 1:
         printf("Voce escolheu equacao de primeiro grau.\n");
         printf("Formato: a*x + b = 0\n");

         printf("Digite o valor de a: ");
         scanf("%f", &a);

         printf("Digite o valor de b: ");
         scanf("%f", &b);

         /* Evita divisao por zero ao calcular x = -b/a */
         if (a != 0)
         {
            x = -b /a;

            printf("\nEquacao: %.2f*x %+.2f = 0\n", a, b);

            printf("\nPasso 1: Subtrair b dos dois lados\n");
            printf("%.2f*x = %.2f\n", a, -b);

            printf("\nPasso 2: Dividir os dois lados por %.2f\n", a);
            printf("x = %.2f / %.2f\n", -b, a);

            printf("\nResultado: x = %.2f\n", x);
         }
         else
         {
            printf("\nComo a e zero, a equacao fica: %.2f = 0\n", b);

            /* Com a igual a zero, b determina se ha infinitas solucoes ou nenhuma */
            if (b == 0)
            {
               printf("A igualdade 0 = 0 e verdadeira para qualquer x.\n");
               printf("Portanto, existem infinitas solucoes.\n");
            }
            else
            {
               printf("A igualdade e falsa, independentemente de x.\n");
               printf("Portanto, a equacao nao possui solucao.\n");
            }
         }

         break;

         case 2:
         printf("Voce escolheu equacao de segundo grau.\n");
         printf("Formato: a*x^2 + b*x + c = 0\n");

         printf("Digite o valor de a: ");
         scanf("%f", &a);

         printf("Digite o valor de b: ");
         scanf("%f", &b);

         printf("Digite o valor de c: ");
         scanf("%f", &c);

         if (a != 0)
         {
            /* Calcula o discriminante: delta = b*b - 4*a*c */
            delta = b * b - 4 * a * c;

            printf("\nEquacao: %.2f*x^2 %+.2f*x %+.2f = 0\n", a, b, c);

            printf("\nPasso 1: Calcular o delta\n");
            printf("Delta = b*b - 4*a*c\n");
            printf("Delta =  (%.2f)*(%.2f) - 4*(%.2f)*(%.2f)\n", b, b, a, c);
            printf("Delta = %.2f - (%.2f)\n", b * b, 4 * a * c);

            printf("Delta = %.2f\n", delta);

            /* O sinal do delta determina a quantidade de raizes reais */
            if (delta > 0)
            {
               x1 = (-b + sqrt(delta)) / (2 * a);
               x2 = (-b - sqrt(delta)) / (2 * a);

               printf("\nDelta positivo: duas raizes reais diferentes.\n");

               printf("\nPasso 2: Calcular a raiz quadrada do delta\n");
               printf("sqrt(%.2f) = %.2f\n", delta, sqrt(delta));

               printf("\nPasso 3: calcular x1\n");
               printf("x1 = (-b + sqrt(delta)) / (2*a)\n");
               printf("x1 = (-(%.2f) + %.2f) / (2*(%.2f))\n", b, sqrt(delta), a);
               printf("x1 = %.2f / %.2f\n", -b + sqrt(delta), 2 * a);

               printf("x1 = %.2f\n", x1);

               printf("\nPasso 4: Calcular x2\n");
               printf("x2 = (-b - sqrt(delta)) / (2*a)\n");
               printf("x2 = (-(%.2f) - %.2f) / (2*(%.2f))\n", b, sqrt(delta), a);
               printf("x2 = %.2f / %.2f\n", -b - sqrt(delta), 2 * a);

               printf("x2 = %.2f\n", x2);
            }
            else if (delta == 0)
            {
               x1 = -b / (2 * a);

               printf("\nDelta zero: duas raizes reais iguais.\n");

               printf("\nPasso 2: Calcular a raiz\n");
               printf("x = (-b + 0) / (2*a)\n");
               printf("x = -(%.2f) / (2*(%.2f))\n", b, a);
               printf("x = %.2f / %.2f\n", -b, 2 * a);
               printf("Resultado: x = %.2f\n", x1);

            }
            else
            {
               printf("\nDelta negativo: nao existe raiz quadrada real de %.2f.\n", delta);
               printf("A equacao nao possui raizes reais.\n");
            }
         }
         else
         {
            printf("Como a e igual a zero, a equacao nao e de segundo grau\n");
         }

         break;

         case 3:
         printf("\n==== SOBRE O PROGRAMA ====\n");
         printf("Trabalho de algoritmos.\n");
         printf("Resolucao de equacoes de primeiro e segundo grau.\n");

         printf("\n==== AUTORIA E CONTRIBUICOES ====\n");
         printf("Nome: Juliano Dacol Henquemaier\n");
         printf("Contribuicoes: Programacao, debug, testes das funcionalidades\n");
         printf("e correcoes nas logicas matematicas.\n");

         printf("\n==== APOIO ====\n");
         printf("Ia utilizada para retirar duvidas e explicacoes,\n");
         printf("e exemplos de funcionalidades para o programa.\n");
         break;

         case 0:
         printf("Encerrando o programa...\n");
         break;

         default:
         printf("Opcao invalida,\n");
         break;
      }
   }

   return 0;
}
