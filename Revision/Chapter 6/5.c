#include <stdio.h>
int *sum(int *number1,int *number2);
int *sum(int *number1,int *number2){
    int s = *number1 + *number2;
    int *ptr = &s;
    printf("The Value of sum is %d\n",s);
    return ptr;
}
float *average(int *number1,int *number2);
float *average(int *number1,int *number2){
    float a = (*number1 + *number2)/2.0;
    float *ptr=&a;
    printf("The Value of average is %f\n",a);
    return ptr;
}
int main(){
    int number1,number2;
    int*ptr1;
    float *ptr2;
    printf("Enter Your First Number : ");
    scanf("%d",&number1);
    printf("Enter Your Second Number : ");
    scanf("%d",&number2);
    ptr1=sum(&number1,&number2);
    ptr2=average(&number1,&number2);
    printf("The address of sum is %u and of average %u\n",ptr1,ptr2);
    return 0;
}