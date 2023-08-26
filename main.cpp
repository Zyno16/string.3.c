#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char mot[20];
puts("enter the letter for the word");
gets(mot);
int i,n;
n=0;
for(i=0;mot[i]!='\0';i++)
    n++;
    printf("the number of the letteris %d\n",n);
printf("%d",strlen(mot));


return (0);
}
