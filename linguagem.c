#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int x, y, resultado, op;
    x=0;
    y=0;
    resultado=0;
    op=0;
 
    printf(" \n Digite o valor do primeiro operando: ");
    scanf("%d", &x);
    printf(" \n Digite o valor do segundo operando: ");
    scanf("%d", &y);
 
    printf(" \n Escolha uma das opções abaixo: ");
    printf(" \n 1. Soma ");
    printf(" \n 2. Subtração ");
    printf(" \n 3. Multiplicação ");
    printf(" \n 4. Divisão ");
 
    printf(" \n Digite o número da opção desejada: ");
    scanf("%d", &op);
 
    switch (op)
    {
    case 1:
        printf(" \n Opção selecionada: 1. Soma ");
        resultado = x + y;
        printf(" \n A soma dos dois números é: %d ", resultado);
        break;
 
    case 2:
        printf(" \n Opção selecionada: 2. Subtração ");
        resultado = x - y;
        printf(" \n A subtração dos dois números é: %d", resultado);
        break;
 
    case 3:
        printf(" \n Opção selecionada: 3. Multiplicação ");
        resultado = x * y;
        printf(" \n A multiplicação dos dois números é: %d", resultado);
        break;
 
    case 4:
        printf(" \n Opção selecionada: 4. Divisão ");
        if(y=0)
        {
            printf(" \n Não existe divisão por zero ");
        }
        else
        {
            resultado = x / y;
            printf(" \n A divisão dos dois números é: %d", resultado);
        }
 
        break;
    default:
        printf(" \n Você digitou uma opção inválida!");
    
  int x, user;
    cout <<"Digite qual sera o intervalo da contagem\n";
    cin >> user;
    cin.ignore ();
  system ("cls");
    for (x=1; x<=100; x+=user)
  cout << x <<"\t";
    system ("pause");
    }
 
    return 0;
}

