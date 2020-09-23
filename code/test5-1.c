/*
题目内容：

我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
*/
#include <stdio.h>

int main() {

int n;
int m;
int a,b;  //计算素数
int c=0; //记录素数个数
int sum = 0; //素数合
scanf("%d %d",&n,&m);
if(n>=0 && m<=200 && n<=m){    //进入循环前先判断输入n，m是否符合标准
for (a =2;c<=m;a++){
    int isprime =1; //判断素数的变量，每次循环重置一次
    for(b=2;b<a;b++)
    {
    if( a%b == 0)
        {
        isprime=0;
        break;
        }
    }  
    if(isprime==1)
    {
        c++;
        if (c>=n && c<=m)   //求和前先确认是否符合要求
        sum += a;
    }
   
}
printf("%d",sum);
}
else
{
    printf("wrong");
}
    return 0;
}