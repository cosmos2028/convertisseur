#include <stdio.h>
#include <stdlib.h>
#define GAL 0.264172052
#define MILES 0.62137

int main()
{   char choix, encore; // Déclaration variables caractères pour le choix de la conversion et le recommencement.
    int h, m, s; //Déclaration des entiers : heure minute seconde.
    float cel, fah, km, mi, l, g; //Déclarartion des floats : celsius, fahrenheit, km, miles, litre, gallons.
    do{
        printf("Que voulez-vous convertir ?\n Duree (d), temperature (t), distance (l), volume (v)\n"); //Menu principal.
        fflush(stdin);
        scanf("%c", &choix); // Choix de la conversion.
        switch (choix)  {
                         case 'd' : //Durée.
                                printf("Votre duree est elle au format H (heures, minutes, secondes), ou au format S (secondes) ?\n");
                                fflush(stdin);
                                scanf("%c", &choix);
                                switch (choix) {
                                case 'h' :
                                        printf("Saisir le nombre d'heures\n");
                                        scanf("%d", &h);
                                        printf("Saisir le nombre de minutes\n");
                                        scanf("%d", &m);
                                        printf("Saisir le nombre de secondes\n");
                                        scanf("%d", &s);
                                        s=s+60*m+3600*h;
                                        if (s<2){
                                            printf("La duree saisie equivaut a %d seconde", s);
                                                 }

                                            else {
                                                  printf("La duree saisie equivaut a %d secondes", s);
                                                 }
                                        break;
                                case 's' :
                                        printf("Saisir le nombre de secondes\n");
                                        scanf("%d", &s);
                                        h = s/3600;
                                        s = s % 3600;
                                        m = s/60;
                                        s = s % 60;
                                        printf("La duree saisie equivaut a %d heures, %d minutes et %d secondes\n",h,m,s);
                                        break;
                                default :
                                        printf("Erreur");
                                }
                                break;
                         case 't' : //Température
                                printf("La temperature a convertir est elle exprimee en degres celsius (c) ou fahrenheit (f) ?\n");
                                fflush(stdin);
                                scanf("%c", &choix);
                                switch (choix) {

                                case 'c' :
                                    printf("Saisissez la temperature en degres celsius.\n");
                                    fflush(stdin);
                                    scanf("%f", &cel);
                                    fah=(cel)*(1.8)+32;
                                    printf("La temperature saisie correspond a %.2f degres fahrenheit.\n", fah);
                                    break;
                                case 'f' :
                                    printf("Saisissez la temperature en degres fahrenheit.\n");
                                    fflush(stdin);
                                    scanf("%f", &fah);
                                    cel=(fah-32)/(1.8);
                                    printf("La temperature saisie correspond a %.2f degres celsius.\n", cel);
                                    break;

                                default :
                                    printf("Erreur.\n");
                                    break;
                                                }
                                break;
                         case 'l' : //Distance
                                printf("La distance a convertir est elle en miles (m) ou en km (k) ?\n");
                                fflush(stdin);
                                scanf("%c", &choix);
                                switch (choix) {
                                case 'm' :
                                    printf("Saisir la distance en miles a convertir en km\n");
                                    scanf("%f", &mi);
                                    km=mi/MILES;
                                    printf("La distance saisie equivaut a %.2f km.\n", km);
                                    break;
                                case 'k' :
                                    printf("Saisir la distance en km a convertir en miles\n");
                                    scanf("%f", &km);
                                    mi=km*MILES;
                                    printf("La distance saisie equivaut a %.2f miles.\n", mi);
                                    break;
                                default :
                                    printf("Erreur dans la saisie.");
                                    break;
                                                }
                                break;
                         case 'v' : // Volume
                                printf("Le volume a convertir est il exprime en litres (l) ou en gallons (g) ?\n");
                                fflush(stdin);
                                scanf("%c", &choix);
                                switch (choix) {

                                case 'l' :
                                    printf("Saisissez le volume en litres.\n");
                                    fflush(stdin);
                                    scanf("%f", &l);
                                    g=(l*GAL);
                                    printf("Le volume saisi correspond a %.2f gallons.\n", g);
                                    break;
                                case 'g' :
                                    printf("Saisissez le volume en gallons.\n");
                                    fflush(stdin);
                                    scanf("%f", &g);
                                    l=(g/GAL);
                                    printf("Le volume saisi correspond a %.2f litres.\n", l);
                                    break;
                                default :
                                    printf("Erreur dans la saisie.\n");
                                    break;
                                                }
                                break;
                         default :
                             printf("Erreur dans la saisie.\n");
                        }
        do{
            printf("\n\nVoulez-vous recommencer ? o pour oui, n pour non.\n"); // Choix de recommencer
            fflush(stdin);
            scanf("%c", &encore);
          }while ((encore!='o')&&(encore!='n'));
      }while (encore=='o');
    return 0;
}
