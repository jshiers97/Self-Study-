#include<stdio.h>
/* counts the number of blanks, tabs, and newlines in an input*/
main(){

int c,  blanks, tabs, newlines;

blanks=0;
tabs=0;
newlines=0;
	while((c=getchar())!= EOF){
		if(c=='\t')
			++tabs;
		if(c=='\n')
			++newlines;
		if(c==' ')
			++blanks; 
	}
	printf("%d  %d  %d\n", tabs, newlines, blanks);
}
