#include <stdio.h>
#include <math.h>
main(){
    int x;
    double t;
    double d;
    double p;
    printf("unesite troznamenkasti broj\n");
    scanf("%d",&x);
    t=x/100;
    t=trunc(t);
    d=x/10;
    while (d>10){
        d=d-10;
    }
    p=x;
    while (p>10){
        p=p-10;
    }
    printf("treca znamenka je%2.f\ndruga znamenka je %2.f\nprva znamenka je %2.f\n",t,d,p);
    if ((t>p)&&(t>d)){
        printf("%2.f je vece od %2.f i %2.f",t,d,p);
    }
    else if ((d>t)&&(d>p)){
        printf("%2.f je vece od %2.f i %2.f",d,t,p);
    }
    else {
        printf("%2.f je vece od %2.f i %2.f",p,d,t);
    }
}
