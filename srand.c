#include <stdio.h>
#include <time.h>
main(){
    srand(time(NULL));
    int polje[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          polje[i][j]=rand()%10;
          printf("%d",polje[i][j]);//ovo je samo kontrolno da se zna sta se dogada
        }
    }
}
