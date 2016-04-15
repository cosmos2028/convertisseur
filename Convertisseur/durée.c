#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;
    char choix;
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
                            scanf("%d", s);
                            h = s/3600;
                            s = s % 3600;
                            m = s/60;
                            s = s % 60;
                            printf("La duree saisie equivaut a %d heures, %d minutes et %d secondes\n",h,m,s);
                            break;
                        default :
                            printf("Erreur");
                            }
 return 0;
 }
