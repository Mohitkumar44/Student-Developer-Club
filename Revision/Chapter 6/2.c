// #include <stdio.h>
// int address(int *i);
// int address(int *i){
//     printf("The address of i by using function is %u",i);
//     return 1;
// }
// int main(){
//     int i=19;
//     int *j=&i;
//     printf("The address of i is %u\n",j);
//     address(j);
//     return 0;
// }


#include <stdio.h>
int address(int i);
int address(int i){
    int *k=&i;
    printf("The address of i by using function is %u",k);
    return 1;
}
int main(){
    int i=19;
    int *j=&i;
    printf("The address of i is %u\n",j);
    address(i);
    return 0;
}


