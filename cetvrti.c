#include <stdio.h>
main(){
    int polje[20];
    int k,l;
    for(int i=0;i<20;i++){
        scanf("%d",&polje[i]);
    }
    for(int i=0;i<20;i++){
        if(polje[i]>k){
            k=polje[i];
        }
    }
    for(int i=0;i<20;i++){
        if(polje[i]<l){
            l=polje[i];
        }
    }
    printf("Najveci je %d\nNajmanji je %d",k,l);
}
