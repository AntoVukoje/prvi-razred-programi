#include <stdio.h>
main(){
    int n,x,z;
    int brojac=0;
    printf("upisite cijele brojeve,ako upisete nula program se zavrsava\n");
    do{
        scanf("%d",&n);
        if(n<100){
            for(z=n;z>=10;z--){
                x=n/10;
            }
            if((x%2!=1)||(n%2!=1)&&(n!=0)){
                brojac++;
                printf("\nbrojac je na %d\n",brojac);
            }
        }
    }while(n!=0);
    printf("Upisali ste %d brojeva koji imaju barem jednu parnu znamenku",brojac);
}
