#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
main(){
    //inicializacija
    int x[10],y=0;
    int br=0,co=0,F=0,T=0;
    int pin;
    int j,k,l;
    srand(time(NULL));
    printf("Pri upisu pina nemojte koristiti razmake,pin ima 4 znamenke,ako razumijete stisnite bilo koju tipku da nastavite");
    getch();
    system("CLS");
    //ispis brojva prvi put
    if(F==0){
        while(y<999){
            y=y+rand()%3000+99;
        }
        printf("PIN:%d\n",y);
        printf("\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n\t\t0\n");
        printf("Unesite PIN:");
        scanf("%d",&pin);
        if(pin==y){
            T++;
        }
        else{
            F++;
            system("CLS");
        }
    }
    //ispis brojeva u pogresnoj situaciji
    if(F>0){
        for(int i=0;i<=9;i++){
            x[i]=i;
        }
        for(int i=0;i<=9;i++){
            j=rand()%9;

            k=x[i];
            x[i]=x[j];
            x[j]=k;
        }
        int i=0;
        for(i=0;i<=8;i++){
            printf("    %d",x[i]);
            br++;
            if(br==3){
                printf("\n");
                br=0;
                co++;
            }
            if(co==3){
                printf("         %d\n",x[i+1]);
            }
        }
        printf("Unesite PIN:");
        scanf("%d",&y);
        if(pin==y){
            T++;
        }
        else{
            F++;
        }
    }
    //tocno rjesenje
    if(T==1){
        system("CLS");
        printf("Tocan pin");
    }
}
