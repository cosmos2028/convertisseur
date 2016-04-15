#include <stdio.h>
#include <stdlib.h>

int main(){
            char choix;
            float l, g;
            printf("Le volume a convertir est il exprime en litres (l) ou en gallons (g) ?\n");
            fflush(stdin);
            scanf("%c", &choix);
            switch (choix) {

            case 'l' :
                printf("Saisissez le volume en litres.\n");
                fflush(stdin);
                scanf("%f", &l);
                g=(l*0.264172052);
                printf("Le volume saisi correspond a %f gallons.\n", g);
                break;
            case 'g' :
                printf("Saisissez le volume en gallons.\n");
                fflush(stdin);
                scanf("%f", &g);
                l=(g/0.264172052);
                printf("Le volume saisi correspond a %f litres.\n", l);
                break;
            default :
                printf("Erreur.");
                break;
                            }
return 0;
}
