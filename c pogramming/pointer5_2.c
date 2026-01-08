#include<stdio.h>

void print( int a, int b){
int sum;
printf("the value of a and b is  %d and %d \n",a,b);
sum = a + b;
printf("the sum is : %d ",sum);

}


int main(){
int a,b;
void(*p)(int,int)=&print;
(*p)(5,3);
printf("pointer variable p holding address of a function is : %d",p);
printf("address of function is : %d",print);


}
