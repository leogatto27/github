#include <stdio.h>
int main()
{ char op;
int operando1, operando2;
printf("Qual operacao realizar \n");
scanf("%c", &op );
printf("Qual primeiro operando \n");
scanf("%c", &operando1 );
printf("Qual segundo realizar \n");
scanf("%c", &operando2 );
switch(op){
    case '+' :
     printf ("%d + %d = % d\n", operando1, operando2, operando1 + operando2);
     break; 
}
    return 0;
}