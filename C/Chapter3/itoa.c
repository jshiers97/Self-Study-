#include<stdio.h>
#include<string.h>


//uses reverse_string for loop 
int main(){

int i=0;
int n=1201;
char s[4];
int c, j;

do{
  s[i++]= n % 10 + '0';

} while((n/=10)>0);

for (i=0, j=strlen(s)-1; i<j; i++, j--){
  c=s[i];
  s[i]=s[j];
  s[j]=c;
}

printf("answer is: %s\n", s);


}
