#include <stdio.h>
main(){
    int a=9;
    int b=4;
    if ((a>b)&&(b<0)){
        b=a+2;
        a=b--;
    }
    b=++a;
    printf("%d\n%d",a,b);
}
//&& znaci da obja uvjeta moraju biti istina ali b nije manje od 0 te se uvjet neradi.ispis je 10 10
