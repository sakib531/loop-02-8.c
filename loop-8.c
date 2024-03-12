#include<stdio.h>
int main (){
    float x,n,sum=1,value=0;
    printf("input the value of n : ");
    scanf("%f",&n);
    for (x=1; x<=n; x++){
            value=(value+x*(sum*=3));
    }
    printf("the total value : \n");
    printf("%f\n",value);
    return 0;
}

