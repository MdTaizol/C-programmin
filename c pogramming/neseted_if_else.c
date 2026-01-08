#include<stdio.h>
int main(){
int a,b;
printf("enter the numbers for a and b \n");
scanf("%d%d",&a,&b);
if(a!=b){
    printf("%d is not equal to %d \n",a,b);
  if (a>b){
    printf("%d is greater than %d \n",a,b);

  }
  else{
    printf("%d is less than %d",a,b);
  }
}
else{
    printf("%d is less than %d \n",a,b);
}
return 0;
}


