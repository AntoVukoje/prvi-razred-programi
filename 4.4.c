#include <stdio.h>
main(){
    float T;
    printf("Unesite danasnju temperaturu");
    scanf("%f",&T);
    if (T>=25){
        printf("Temperatura je veca ili jednaka 25C");
    }
    else {
        printf("Temperatura je niza od 25C");
    }
}
//korisnik treba unijeti temperaturu te ako je veca ili jednaka 25 ispis je "Temperatura je veca ili jednaka 25C" inace ispis je "Temperatura je niza od 25C"
