#include <stdio.h>

int main(){
    int N;
    printf("Please input a N:\n");
    scanf("%d",&N);
       ssN(N);
return 0;
}
void ssN(int N){

    if(N){
        ssN(N-1);
        printf("%d\n",N);
    }
    return;
}
