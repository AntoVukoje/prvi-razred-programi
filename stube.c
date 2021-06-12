#include <stdio.h>
#include <time.h>
main(){
    int x,y,z;
    int br=0,sum=0;
    srand(time(NULL));
    x=rand()%9+1;
    int a[x];
    printf("%d\n",x);
    for(int i=0;i<x;i++){
        a[i]=rand()%99+1;
        printf("%d ",a[i]);
    }
    int sredina=((x+1)/2)-1;
    printf("\nSredina je %d",a[sredina]);
    for(int i=0;i<x;i++){
        if(i<=sredina){
            if(i!=0){
                while(a[i]<=a[i-1]){
                    a[i]++;
                    br++;
                }
            }
        }
        sum=sum+br;
        br=0;
        if(i>sredina){
            if(a[i]>=a[i-1]){
                while(a[i]>=a[i-1]){
                    a[i]--;
                }
            }
            else{
                while(a[i]<a[i-1]){
                    if(a[i]!=a[i-1]){
                    a[i]++;
                    br++;
                    }
                    else{
                        a[i]--;
                    }
                }
            }
        }
        sum=sum+br;
        br=0;
    }
    printf("\n");
    for(int i=0;i<x;i++){
        printf("%d ",a[i]);
    }
    printf("\nBroj dodanih kocki je %d",sum);
}
