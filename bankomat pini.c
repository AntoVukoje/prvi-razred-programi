#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
main(){
    //inicializacija
    int x[4],y[4];
    int br=0,co=0,F=0,T=0;
    int pin;
    srand(time(0));
    printf("Pri upisu pina nemojte koristiti razmake,ako razumijete stisnite bilo koju tipku da nastavite");
    getch();
    system("CLS");
    //ispis brojva prvi put
    if(F==0){
        for(int i=0;i<3;i++){
            y[i]=rand()%9;
            printf("%d",y[i]);
        }
        printf("\n");
        printf("%d\n",y);
        printf("\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n\t\t0\n");
        scanf("%d",&pin);
    }
    //ispis brojeva u pogresnoj situaciji
    if(F>1){
        for(int i=0;i<9;i++){
            x[i]=rand()%9;
        }
        for(int i=0;i<9;i++){
            printf("    %d",x[i]);
            br++;
            if(br==3){
                printf("\n");
                br=0;
                co++;
            }
            if(co==3){
                printf("         %d\n",x[i]);
            }
        }
    }
    printf("Unesite pin:\n");
    //tocno rjesenje
    if(T==1){
        system("CLS");
        printf("Tocan pin");
    }
    //razrada pin
    int p,t,d,c;
    p=pin/1000;
    printf("\n");
    printf("%d",p);
    d=pin
}
