#include <stdio.h>

int main()
{
    int szam;
    int pozitiv = 0;
    int negativ = 0;
    do{
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if(szam>0){
            pozitiv++;
        }
        if(szam<0){
            negativ++;
        }
    }
    while(szam!=0);
    printf("\n");
    printf("Pozitiv elemek szama: %d\n",pozitiv);
    printf("Negativ elemek szama: %d\n",negativ);
    return 0;
}