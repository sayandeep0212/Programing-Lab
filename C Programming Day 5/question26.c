#include<stdio.h>

int main(){

        float a,b;
        char o;
        printf("Enter The First Number: ");
        scanf("%f", &a);
        printf("Enter The Second Number: ");
        scanf("%f", &b);
        printf("Enter The Operator: ");
        scanf(" %c",&o);

        switch(o){
                case '+':
                        printf("%f",a+b);
                        break;
                case '-':
                        printf("%f",a-b);
                        break;
                case '*':
                        printf("%f",a*b);
                        break;
                case '/':
                        printf("%f",a/b);
                        break;

                default: 
                        printf("Wrong input");
                        break;

        }

}
