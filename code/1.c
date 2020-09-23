#include <stdio.h>
#define SEC_PER_YEAR 3.156e7
int main(){
    float year,second;
    printf("Enter how many year old you are:");
    scanf("%f",&year);
    second = SEC_PER_YEAR*year;
    printf("you are:%.1f year old.\n",year);
    printf("And you are %e second old.\n",second);
    

    return 0;
}