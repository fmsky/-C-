#include "stdio.h"

#define MAX_NUM 666
#define add(x,y) x + y
#define power(x) x*x

#ifndef MAX
#define MAX
#endif


int Power(int x){
    return x*x;
}

int main(){
    int Add = add(MAX_NUM,333);
    printf("%d\n",Add);

    int m,n,p;
    m = n = p = 3;
    
    int power1 = Power(++m);
    int power2 = power(++n);
    int b = ++p * ++p;
    

    printf("power1 = %d\n",power1);
    printf("power2 = %d\n",power2);
    printf("b= %d\n",b);

    if (MAX_NUM == 666){
        printf("assumption succeed!\n");
    }else{
        printf("assumption failed!\n");
    }
    
    return 0;
}