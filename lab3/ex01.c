#include <stdio.h>
int main() {
    int number2;
    int number4;

    printf(" Enter a number:");
    scanf("%d" , &number2);

    printf(" Enter a number:");
    scanf("%d", &number4);

    if(number2 == number4){
        printf("Match");
    }
    else {
        printf("does not match.Try again\n");
    }
    return 0;
}