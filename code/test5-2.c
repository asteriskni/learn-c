/*题目内容：

你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。

如输入1234，则输出：

yi er san si

注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：

fu er san si yi

*/
#include <stdio.h>
int main(){
    int x;
    int mask=1;   //数值位数
    scanf("%d",&x);
    if(x<0){
    printf("fu ");
    x= -x;
    }
    int b = x; //暂存x值

    while(b>9){  //计算x位数
        b/= 10;
        mask *= 10;

    }
    int a;
    while(mask>0){
        a = x /mask;       // example: 1234 / 1000(mask) = 1 (千位数值) 从大到小一一分离
        x %= mask;         // 234 
        mask /= 10;        // 1000 > 100   
        switch(a){
            case 0: printf("ling"); break;
            case 1: printf("yi");   break;
            case 2: printf("er");   break;
            case 3: printf("san");  break;
            case 4: printf("si");   break;
            case 5: printf("wu");   break;
            case 6: printf("liu");  break;
            case 7: printf("qi");   break;
            case 8: printf("ba");   break;
            case 9: printf("jiu");  break;
        }
        if(mask>0)
            printf(" ");
    }

return 0;
}