#include <stdio.h>

int main(){
    int a,b,t,i;

    scanf("%d/%d",&a,&b);
    if(a<b){
    printf("0.");
    for(i=1;i<=200;i++){
        t=a*10 / b;
        a=a*10 % b;
        printf("%d",t);
        if(a == 0){
            break;
        }
    }
    }
    else{
        printf("wrong");
    }
    printf("\n");
return 0;
}