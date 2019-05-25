#include<stdio.h>

int binsearch(int x, int v[], int n){
int low, high, mid;
low=0;
high=n-1;
while(low<high){
  mid=(low+high)/2;
  if(x<=v[mid]){
    high=mid;
  }
  else{
    low=mid+1;
  }

}
return (x==v[low]) ? low: -1;
}

int main(){
  int x=12;
  int v[]={1,2,3,4,12,15,16,18, 100};
  int n=9;
  int q;
  q=binsearch(x, v, n);
  printf("the answer is %d\n", q);
}
