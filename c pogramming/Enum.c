#include<stdio.h>
int main(){
enum months {jan, feb,mar,apr=9,june};
enum months m,m1;
m = mar;
m1 =apr;
printf("the value of %d and %d",m,m1);
}
