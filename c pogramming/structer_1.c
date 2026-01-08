#include<stdio.h>
struct student{

char name[10];
int roll_no;
int age;


};
static struct student s1;
void main(){
strcpy (s1.name,"johan");
int roll_no=221;
int age =25;
printf("print the name %s\n",s1.name);
printf("print the roll %d\n",s1.roll_no);
printf("print the age %d\n",age);

}
