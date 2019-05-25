#include <stdio.h>
#include<string.h>

int main(){

char x[]="hello";
int c, i, j;

for (i=0, j=strlen(x)-1; i<j; i++, j--){
  c=x[i];
  x[i]=x[j];
  x[j]=c;
}

printf("string is %s\n", x);


}
