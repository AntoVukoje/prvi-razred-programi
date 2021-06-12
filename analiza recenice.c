#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
    int brr=0,brs=0,brb=0,brn=0,brz=0;
    int y[20];
    int j=0;
    char x[100]="U razredu 1.b 20 ucenika je obecalo da ce imati minimalni prosjek 4.0";
    puts(x);
    int l=strlen(x);
    for(int i=0;i<l;i++){
        int a=isalpha(x[i]);
        int b=isdigit(x[i]);
        int c=isspace(x[i]);
        if(a!=0){
            brs++;
            a=0;
        }
        else if(b!=0){
            brb++;
            b=0;
        }
        else if(c!=0){
            brr++;
            c=0;
        }
        else{
            brz++;
        }
    }
    int i=0;
    do{
        int d=isalpha(x[i]);
        if(d!=0){
            brn++;
        }
        else{
            y[j]=brn;
            brn=0;
            j++;
        }
        i++;
    }while(i<l);
    int k=0;
    int o=j;
    for(j=0;j<o;j++){
        if(y[j]>k){
            k=y[j];
        }
    }
    printf("\nU recenici imaju %d razmaka,%d slova,%d brojeva,%d rijeci i %d znaka\n",brr,brs,brb,(brr+1),brz);
    printf("Najduza rijec ima %d slova\n",k);
}
