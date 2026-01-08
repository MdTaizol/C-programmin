
#include<stdio.h>
int main(){
 int a = 5;
 int *p;
 p = &a;
 printf("pointer variable p holding addressing is : %d\n", p);
 printf("Address of a variable  is : %d\n",&a);
 printf("value is a : %d\n",*p);
 return 0;

}
