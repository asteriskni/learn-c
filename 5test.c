#include <stdio.h>

int main(void){
    int input;
    int i =1;
    printf("Enter number\n");
    scanf("%d",&input);
    while(i<11){
        printf("%d\n",input+i);
        i++;
    }
       return 0;
    }