#include<stdio.h>
int main(){
char operator ;
double first , second;
printf("enter the operator (+,-,* ,/ ):");
scanf("%c",&operator);

printf("enter the two numbers :");
scanf("%lf %lf",&first,&second);

 switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            if(second != 0)
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Operator is not correct");
    }
return 0 ;
}
