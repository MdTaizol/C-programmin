#include<stdio.h>
void main(){
int a;
printf("Enter the number of a is :");
scanf("%d",&a);
if(a!=10){
    printf("%d is not equal to 10\n",a);

}else if(a<20){
printf("%d is less than 20\n",a);
}
else if(a>15){
    printf("%d is less than 10\n",a);
}
else{
    printf("%d is equal to 10",a);
}


return 0;
}
