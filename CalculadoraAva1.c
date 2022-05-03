#include <stdio.h>

main () {
    float n1, n2, resultado;
    int alt,fim,contador;

    printf("Bem vindo a sua calculadora\n");
    do
    {

        printf("\n Digite seu primeiro valor: ");
        scanf("%f", &n1);

        printf("\n Escolha uma alternativa para finalizar seu calculo.");

        printf("\n Escolha 1 - Soma");
        printf("\n Escolha 2 - Subtracao");
        printf("\n Escolha 3 - Multiplicacao");
        printf("\n Escolha 4 - Divisao");
        printf("\n");
        scanf("\n %d", &alt);
    
        printf("\n Digite seu segundo valor: ");
        scanf("%f", &n2);

        switch (alt)
    {
    case 1:
        resultado += n1 + n2;
       break;

    case 2:
        resultado += n1 - n2;
        break;

    case 3:
        resultado += n1 * n2;
         break;

    case 4:
        resultado += n1 / n2;
        break;

    default: /* Caso o usuario coloque um valor invalido a conta mostra erro.*/ 
        printf("Valor invalido."); 
    }
    printf("\nresultado no momento: ""%0.2f", resultado);

    printf("\nDeseja continuar a usar a calculadora? Digite 1(sim) ou 2(nao).");
    printf("\n");
    scanf("%d", &fim);
    if (fim == 1)
        contador = 1;

    if(fim == 2)
        contador = 0;
        

    }  while (contador == 1);

    printf("\n Seu resultado final eh: ""%0.2f", resultado);

}