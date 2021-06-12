#include <stdio.h>
#include <math.h>
main(){
    int x;
    printf("Type a number\n");
    scanf("%d",&x);
    x/=69;
    if (x>=0){
        x=x%2;
        printf("%d",x);
             }
    else{
        x=abs(x)+2;
        printf("%d",x);
        goto *8;
        }
}
