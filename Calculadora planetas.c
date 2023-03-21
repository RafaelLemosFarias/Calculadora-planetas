#include<stdio.h>
#include<locale.h>
#include<math.h>
#include <conio.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int peso;
    printf("Qual seu peso na terra (kg)? ");
    fflush(stdin);
    scanf("%d", &peso);
    char plan[30];
    printf("\n---------------------------------------\n");
    printf("\t ESCOLHA UM PLANETA \t \n");
    printf("---------------------------------------\n");
    printf(" \t MERCURIO \t \n");
    printf(" \t VENUS \t \n");
    printf(" \t MARTE \t \n");
    printf(" \t JUPITER \t \n");
    printf(" \t SATURNO \t \n");
    printf(" \t URANO \t \n");
    printf("Escolha o planeta: ");
    fflush(stdin);
    gets(plan);
    if (strcmp (plan, "mercurio") ==0){
        float p1;
        p1 = peso*0.37;
        printf("Seu peso em mercurio e: %.2f kg\n", p1);
    }else{
        if (strcmp (plan, "venus") ==0){
            float p2;
            p2 = peso*0.88;
            printf("Seu peso em venus e: %.2f kg\n", p2);
        }else{
            if (strcmp (plan, "marte") ==0){
                float p3;
                p3 = peso*0.38;
                printf("Seu peso em marte e: %.2f kg\n", p3);
            }else{
                if (strcmp (plan, "jupiter") ==0){
                    float p4;
                    p4 = peso*2.64;
                    printf("Seu peso em jupiter e: %.2f kg\n", p4);
                }else{
                    if (strcmp (plan, "saturno") ==0){
                        float p5;
                        p5 = peso*1.15;
                        printf("Seu peso em saturno e: %.2f kg\n", p5);
                    }else{
                        if (strcmp (plan, "urano") ==0){
                            float p6;
                            p6 = peso*1.17;
                            printf("Seu peso em urano e: %.2f kg\n", p6);
                        }
                    }
                }
            }
        }

    }
}