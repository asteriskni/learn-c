#include <stdio.h>
#include <string.h>


int main(void){
    char name[40],surname[40];
    int wname,wsurname;
    printf("please input your first name\n");
    scanf("%s",&name);
    printf("please input your last name\n");
    scanf("%s",&surname);
    wname = strlen(name);
    wsurname = strlen(surname);
    printf("%s ",name);
    printf("%s",surname);
    printf("\n%*d%*d\n",wname,wname,wsurname,wsurname);
    printf("%s ",name);
    printf("%s",surname);
    printf("\n%-*d%-*d",wname,wname,wsurname,wsurname);
}