#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    PrintN(n);
return 0;
}


void PrintN(int n){
    int i ;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }

}