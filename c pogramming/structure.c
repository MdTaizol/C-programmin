#include<stdio.h>
struct student{
char name[15];
int no;
int age;

}s1={"johan",11,23};
void main(){
printf("Name is %s \n",s1.name);
printf("Roll no is %d\n",s1.no);
printf("Age is %d",s1.age);

}
