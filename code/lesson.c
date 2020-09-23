#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);
	printf("shuru:%d\n", a);

	if(a>=1 && a<=10){
		printf("youxian");
	}
	else
	{
		printf("buzai");
	}
	return 0;
}