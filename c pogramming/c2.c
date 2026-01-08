#include<stdio.h>
int main(){
int x = 30,y = 20 ;  //declaration with initialization//assignment
double z = 6.86;
printf ("value of z %.1lf\n",z);
printf("%.2lf\n",z);
printf("value of y %d\nvalue of x %d\n",y,x);
x = 50;
printf("value of x %d\n", x);
 int age;
 double weeding_age;// ampered
printf ("Input your age  & weeding age : ");
scanf("%d%lf",&age, &weeding_age);
age = age - 5;
weeding_age = weeding_age - 2.5;
printf("My age is = %d \nmy weeding age is = %.1lf ",age,weeding_age);


return 0;
}
