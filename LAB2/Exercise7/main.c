#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int temperatura1=0;
    int tensione1=0;
    int temperatura2=15;
    int tensione2=20;
    int temperatura3=27;
    int tensione3=55;
    int temperatura4=35;
    int tensione4=100;*/
    int valtensione;
    float temperaturafinale;
    printf("Inserisci un valore di tensione in mV");
    scanf("%d", &valtensione);
    if ((valtensione>0) && (valtensione<20)){
        temperaturafinale=((valtensione*4)/3);
        printf("%f", temperaturafinale);
        return 0;
    }
    if ((valtensione>=20) && (valtensione<55)){
        temperaturafinale=(((valtensione*7)/40)+(139/8));
        printf("%f", temperaturafinale);
        return 0;
    }
    if ((valtensione>=55) && (valtensione<100)){
        temperaturafinale=(((valtensione*8)/45)+(155/9));
        printf("%f", temperaturafinale);
        return 0;
    }
    else{
        printf("Valore errato :(");
        return 1;
    }
}
