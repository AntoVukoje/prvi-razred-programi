#include <stdio.h>
main(){
    int a=2;
    int b=2;
    if ((a != -b)||(b>a)){
        b+=3;
        b/=a;
    }
    b=a--;
    printf("%d\n%d",a,b);
}
//|| znaci da bilo koji uvijet moze biti isitna da radi,a je razlicito od -b te b+3 je 5,5/2 je 2. b=a-- znaci da je b jednako 2 te se a smanji za jedan. ispis je 1 2
