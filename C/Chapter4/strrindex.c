#include<stdio.h>
#include<string.h>


main(){
  char x[]="helloel";
  char t[]="e";
  int q;
  q=strrindex(x, t);
  printf("the rightmost index starts at: %d\n", q);
}

int strrindex(char s[], char t[]){

  int i, j, k, x;

  //int w=strlen(t)+1;
  for(i=0; s[i]!='\0'; i++ ){
    for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++){
      ;
    }
    if(k>0 && t[k]=='\0'){
      x=i;
    }
  }

  if(x){
    return x;
  }
  else{
    return -1;
  }


}
