#include<stdio.h>

void squeeze(char s1[], char s2[]){

	int i,k,j;
	int loop_call=0;

	for (i=j=0; s1[i] !='\0'; i++){
		loop_call=0;
		for (k=0; s2[k] !='\n'&& !loop_call; k++){
			if( s1[i]==s2[k]){
				loop_call=1;
			}
		
		}
		if(!loop_call){
			s1[j++]=s2[k];
		}
	}
	s2[k]='\0';
}

