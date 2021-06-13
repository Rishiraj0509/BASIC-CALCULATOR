#include<stdio.h>

int main() {
    int n1,n2,n3,n4,n5,n6;
    char i;
    printf("Enter + symbol for Addition\n");
    printf("Enter - symbol for Subtract\n");
    printf("Enter / symbol for Divide\n");
    printf("Enter * symbol for Multiply\n");
    printf("Choose which one you want\n");
    scanf("%c",&i);
    printf("Enter 1st number\n");
    scanf("%d", &n1);
    printf("Enter 1st number\n");
    scanf("%d", &n1);

    if (i== '+') {
        n3=n1+n2;
        printf("Sum of these number is %d", n3);
    }
    else if (i=='-'){
        n4=n1-n2;
        printf("subtract of these number is %d", n4);
    }
    else if (i=='*'){
        n5=n1*n2;
        printf("multiply of these number is %d", n5);
    }
    else if (i=='/'){
        n6=n1/n2;
        printf("Divide of these number is %d", n6);
    }
    return 0;
}