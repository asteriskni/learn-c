#include <stdio.h>
int main(){
int j=0;
int ou=0;
int num;
scanf("%d",&num);
while(num != -1)
{
    if(num%2 == 1)
    {
      j++;
    }  
  else{
      ou++;
      }
      scanf("%d",&num);
} 

printf("%d %d",j,ou );

return 0;
}