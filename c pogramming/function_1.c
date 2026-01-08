#include<stdio.h>
void product( int a, int b);
main(){
int  a=5,b=6;
product(a,b);//with argument.
}
void product(int a, int b){
int c;
c =a*b;
printf("%d",c);
}
