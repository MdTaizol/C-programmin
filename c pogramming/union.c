#include<stdio.h>
union student{
char name[15];
int age;
}s1;
struct stud{
char name[10];
int age;

}s2;
void main(){
printf("the size of union is %d \n",sizeof(union student));
printf("the size of stud is %d\n",sizeof(struct stud));
}

