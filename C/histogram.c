#include<stdio.h>

int main(){
	int c, i, j;
	int character[127];
	
	for(i=0; i<128; ++i)
		character[i]=0;
	while((c=getchar())!=EOF)	 /*increments array whose char to int value matches c*/
		++character[c];
	for(i=0; i<128; ++i){
		putchar(i);             /*outputs the char value of its int representation *?
		for(j=0; j<character[i]; ++j)
			putchar('*');
	
		putchar('\n');
		
	}
	
return 0;	
}
