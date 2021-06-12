#include <stdio.h>
#include <math.h>
main(){
    int ucenici,brp=1,ocjena,sum=0,pocjena,pocjenar;//puc prosjek ucenika upuc ukupan prosjek ucenika brp broj predmeta bru broj ucenika pocjena prolazna ocjena pr prosjek razreda pocjenar prolazna ocjena razreda
    char ime;
    float puc=0,upuc=0,pr=0;
    printf("Unesite broj ucenika\n");
    scanf("%d",&ucenici);
    for(int bru=1;bru<=ucenici;bru++){
        printf("Ucenik %d:",bru);
        scanf("%s",&ime);
        for(brp=1;brp<=16;brp++){
            switch(brp){
                case 1:printf(" 1. Algoritmi i programiranje:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 2:printf(" 2. Engleski:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 3:printf(" 3. Hrvatski:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 4:printf(" 4. Vjeronauk:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 5:printf(" 5. Uredsko:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 6:printf(" 6. Tehnicki:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 7:printf(" 7. Osnove elektrotehnike:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 8:printf(" 8. Fizika:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 9:printf(" 9. Matematika:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 10:printf(" 10. Kemija:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 11:printf(" 11. Biologija:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 12:printf(" 12. Povijest:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 13:printf(" 13. Geografija:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 14:printf(" 14. Tjelesni:");scanf("%d",&ocjena);sum=sum+ocjena;break;
                case 15:puc=sum/(brp-1);pocjena=round(puc);printf("Prosjek ucenika je %.2f,zavrsna ocjena je %d\n",puc,pocjena);break;
                case 16:sum=0;break;
            }
        }
        upuc=upuc+puc;
    }
    pr=upuc/ucenici;
    pocjenar=round(pr);
    printf("Prosjek razreda je %.2f,zavrsna ocjena razreda je %d",pr,pocjenar);
}
//neznam kako napraviti ono da kad se stisne 5 da ispise sve koje su dobili 5

