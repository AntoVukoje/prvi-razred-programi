#include <stdio.h>
#include <string.h>
#include <ctype.h>

main(){
    //
    int x,y,z,k1n,k2n,k3n;
    int *px,*py,*pz;
    char ua[9],k1[9],k2[9],k3[9],k1d[3],k2d[3],k3d[3],k1i[12],k2i[12],k3i[12],k1p[12],k2p[12],k3p[12];
    char *pk1,*pk2,*pk3,*pua;
    px=&x;
    pz=&z;
    py=&y;
    int i=0;

    printf("Unesite 3 korisnika.\n");
    //Korisnik 1
    printf("Upis za korisnik 1:\n");

    printf("Unesite drzavu u skracenom obliku (npr HR):");
    scanf("%s",&k1d);
    pk1=&k1;
    //printf("Adresa x %p\n adresa px %p",&k1,&pk1);
    printf("Adresa ovoga korisnika je %p\n",&k1);
    printf("Unesite ime ovoga korisnika:");
    scanf("%s",&k1i);
    printf("Unesite prezime ovoga korisnika:");
    scanf("%s",&k1p);
    printf("Unesite koliko novaca (u kunama) ima ovaj korisnik:");
    scanf("%s",&k1n);
    //Korisnik 2
    printf("Upis za korisnik 2:\n");

    printf("Unesite drzavu u skracenom obliku (npr HR):");
    scanf("%s",&k2d);
    pk2=&k2;
    //printf("Adresa x %p\n adresa px %p",&k1,&pk1);
    printf("Adresa ovoga korisnika je %p\n",&k2);
    printf("Unesite ime ovoga korisnika:");
    scanf("%s",&k2i);
    printf("Unesite prezime ovoga korisnika:");
    scanf("%s",&k2p);
    printf("Unesite koliko novaca (u kunama) ima ovaj korisnik:");
    scanf("%s",&k2n);
    //Korisnik 3
        printf("Upis za korisnik 3:\n");

    printf("Unesite drzavu u skracenom obliku (npr HR):");
    scanf("%s",&k3d);
    pk3=&k3;
    //printf("Adresa x %p\n adresa px %p",&k1,&pk1);
    printf("Adresa ovoga korisnika je %p\n",&k3);
    printf("Unesite ime ovoga korisnika:");
    scanf("%s",&k3i);
    printf("Unesite prezime ovoga korisnika:");
    scanf("%s",&k3p);
    printf("Unesite koliko novaca (u kunama) ima ovaj korisnik:");
    scanf("%s",&k3n);

    //Provjera korisnika

    printf("\nUnesite adresu korisnika:");
    scanf("%s",&ua);
    pua=ua;
    //printf("%s %p",ua,&k1);
    //printf("\nk1%d",strcmp(ua,&k1));
    if(strcmp(ua,&k1)==0){
        printf("DRZAVA:%s ADRESA:%p IME:%s PREZIME:%s NOVAC:%d kn",k1d,&k1,k1i,k1p,k1n);
    }
    else if(strcmp(ua,pk2)==0){
        printf("DRZAVA:%s ADRESA:%p IME:%s PREZIME:%s NOVAC:%d kn",k2d,&k2,k2i,k2p,k2n);
    }
    else if(strcmp(ua,pk3)==0){
        printf("DRZAVA:%s ADRESA:%p IME:%s PREZIME:%s NOVAC:%d kn",k3d,&k3,k3i,k3p,k3n);
    }
    else{
        printf("\nKrivi unos.");
    }
}
