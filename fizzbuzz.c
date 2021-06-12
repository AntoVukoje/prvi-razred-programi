#include <stdio.h>
main(){
    int count=1;
    while(count<=100){
        if((count%5==0)&&(count%3==0)){
            printf("FizzBuzz\n");
        }
        else if(count%3==0){
            printf("Fizz\n");
        }
        else if(count%5==0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n",count);
        }
        count++;
    }
}
