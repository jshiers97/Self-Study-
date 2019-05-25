#include <stdio.h>

int test1(g,h,j){


if (g>h){
	j=g;
}
else
	j=h;

return j;
}

int test2(q,w,r){

r=(q>w) ? q:w; 
return r;
}

int main(){

int z=4;
int a=2;
int b=3;

printf(test1(a,b,z));
}

