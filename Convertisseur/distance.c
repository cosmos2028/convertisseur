#include<stdio.h>
#include<stdlib.h>

int main(){
char choix;
float m, km;
printf("La distance a convertir est elle en miles (m) ou en km (k) ?\n");
fflush(stdin);
scanf("%c", &choix);
switch (choix) {
case 'm' :
    printf("Saisir la distance en miles a convertir en km\n");
    scanf("%f", &m);
    km=m/0.62137;
    printf("La distance saisie equivaut a %f km.\n", km);
    break;
case 'k' :
    printf("Saisir la distance en km a convertir en miles\n");
    scanf("%f", &km);
    m=km*0.62137;
    printf("La distance saisie equivaut a %f miles.\n", m);
    break;
default :
    printf("Erreur.");
    break;
                }
                return 0;
}
