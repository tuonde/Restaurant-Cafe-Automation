#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "headher.h"
#include "mainmenu.h"
#include "menulist.h"
#include "tables.h"
#include "daily.h"
#include "payments.h"

int main()
{
    for(j=0; j<TABLE_COUNTS; j++){
        t[j].tableNum = j+1;
        t[j].countSoup = 0;
        t[j].countMeat = 0;
        t[j].countVegetables = 0;
        t[j].countDessert = 0;
        t[j].countDrinks = 0;
        t[j].countRice = 0;
        t[j].countYoughurt = 0;
        t[j].tableCheck = 0;
    }

    int choice=0;
    mainMenuScreen:
    mainMenu();
    do{
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: system("cls");
                    printf("\t\t\tMASALAR\n");
                    printf("\t\t\t---------------------------\n");
                    int k=0;
                    for(k=0; k<TABLE_COUNTS; k++){
                        if(t[k].tableCheck == 0)
                            printf("\033[91m\t\t\tMasa %d : BOS\033[0m\n",t[k].tableNum);
                        else
                            printf("\033[92m\t\t\tMasa %d : DOLU : %d TL\033[0m\n",t[k].tableNum,t[k].tableCheck);
                    }
                    printf("\t\t\tAna menuye donmek icin 0'a basin.\n");
                    printf("\t\t\tMasa Sec: ");
                    scanf("\t\t\t%d",&tableChoose);
                    if(tableChoose == 0){
                        goto mainMenuScreen;
                    }
                    else if(tableChoose < 0 || tableChoose > TABLE_COUNTS){
                        printf("\n\n\t\t\tAna menuye yonlendiriliyorsunuz...");
                        sleep(1);
                        goto mainMenuScreen;
                    }else if(t[tableChoose-1].tableCheck == 0){
                        a:
                        system("cls");
                        printf("\t\t\tMASA %d             \033[92m%d TL\033[0m\n",tableChoose,t[tableChoose-1].tableCheck);
                        printf("\t\t\t--------------------------------------\n");
                        printf("\t\t\t1-Gunun Corbasi     60TL  (%d) = %d TL\n",t[tableChoose-1].countSoup, 60*t[tableChoose-1].countSoup);
                        printf("\t\t\t2-Etli Yemekler    115TL  (%d) = %d TL\n",t[tableChoose-1].countMeat, 115*t[tableChoose-1].countMeat);
                        printf("\t\t\t3-Sebze Yemekleri   85TL  (%d) = %d TL\n",t[tableChoose-1].countVegetables, 85*t[tableChoose-1].countVegetables);
                        printf("\t\t\t4-Tatlilar          70TL  (%d) = %d TL\n",t[tableChoose-1].countDessert, 70*t[tableChoose-1].countDessert);
                        printf("\t\t\t5-Icecekler         40TL  (%d) = %d TL\n",t[tableChoose-1].countDrinks, 40*t[tableChoose-1].countDrinks);
                        printf("\t\t\t6-Pilav             50TL  (%d) = %d TL\n",t[tableChoose-1].countRice, 50*t[tableChoose-1].countRice);
                        printf("\t\t\t7-Yogurt            40TL  (%d) = %d TL\n",t[tableChoose-1].countYoughurt, 40*t[tableChoose-1].countYoughurt);
                        printf("\t\t\t--------------------------------------\n");
                        printf("\t\t\tAna Menu icin 0'a basin\n");
                        printf("\t\t\t1- Ekle\n");
                        printf("\t\t\t2- Cikar\n");
                        scanf("\t\t\t%d",&type);
                        if(type != 1 && type != 2){
                            printf("\n\n\t\t\tAna menuye yonlendiriliyorsunuz...");
                            sleep(1);
                            goto mainMenuScreen;
                        }
                            printf("\t\t\tUrun No: ");
                            scanf("\t\t\t%d",&productNo);
                            printf("\t\t\tAdet: ");
                            scanf("\t\t\t%d",&productCount);
                            order(type,productNo,productCount);
                            goto a;
                    }else if(t[tableChoose-1].tableCheck != 0){
                        b:
                        system("cls");
                        printf("\t\t\tMASA %d             \033[92m%d TL\033[0m\n",tableChoose,t[tableChoose-1].tableCheck);
                        printf("\t\t\t--------------------------------------\n");
                        printf("\t\t\t1-Gunun Corbasi     60TL  (%d) = %d TL\n",t[tableChoose-1].countSoup, 60*t[tableChoose-1].countSoup);
                        printf("\t\t\t2-Etli Yemekler    115TL  (%d) = %d TL\n",t[tableChoose-1].countMeat, 115*t[tableChoose-1].countMeat);
                        printf("\t\t\t3-Sebze Yemekleri   85TL  (%d) = %d TL\n",t[tableChoose-1].countVegetables, 85*t[tableChoose-1].countVegetables);
                        printf("\t\t\t4-Tatlilar          70TL  (%d) = %d TL\n",t[tableChoose-1].countDessert, 70*t[tableChoose-1].countDessert);
                        printf("\t\t\t5-Icecekler         40TL  (%d) = %d TL\n",t[tableChoose-1].countDrinks, 40*t[tableChoose-1].countDrinks);
                        printf("\t\t\t6-Pilav             50TL  (%d) = %d TL\n",t[tableChoose-1].countRice, 50*t[tableChoose-1].countRice);
                        printf("\t\t\t7-Yogurt            40TL  (%d) = %d TL\n",t[tableChoose-1].countYoughurt, 40*t[tableChoose-1].countYoughurt);
                        printf("\t\t\t--------------------------------------\n");
                        printf("\t\t\tAna Menu icin 0'a basin\n");
                        printf("\t\t\t1- Ekle\n");
                        printf("\t\t\t2- Cikar\n");
                        printf("\t\t\t3- Hesap Al\n");
                        scanf("\t\t\t%d",&type);
                        if(type != 1 && type != 2 && type != 3){
                            printf("\n\n\t\t\tAna menuye yonlendiriliyorsunuz...");
                            sleep(1);
                            goto mainMenuScreen;
                        }else if(type == 1 || type == 2){
                            printf("\t\t\tUrun No: ");
                            scanf("\t\t\t%d",&productNo);
                            printf("\t\t\tAdet: ");
                            scanf("\t\t\t%d",&productCount);
                            order(type,productNo,productCount);
                            goto b;
                        }else{
                            printf("\n\t\t\tOdeme tipi seciniz.\n");
                            printf("\t\t\t1- Nakit\n");
                            printf("\t\t\t2- Kart\n");
                            scanf("\t\t\t%d",&checkType);
                            if(checkType != 1 && checkType != 2){
                                printf("\n\n\t\t\tAna menuye yonlendiriliyorsunuz...");
                                sleep(1);
                                goto mainMenuScreen;
                            }else if(checkType == 1){
                                printf("\n\t\t\t%d TL nakit aliniyor...\n",t[tableChoose-1].tableCheck);
                                getCheck(checkType,t[tableChoose-1].tableCheck);
                                sleep(1);
                                printf("\t\t\tOdeme basarili. Ana menuye yonlendiriliyorsunuz...\n");
                                sleep(1);
                                goto mainMenuScreen;
                            }else{
                                printf("\n\t\t\t%d TL kart aliniyor...\n",t[tableChoose-1].tableCheck);
                                getCheck(checkType,t[tableChoose-1].tableCheck);
                                sleep(1);
                                printf("\t\t\tOdeme basarili. Ana menuye yonlendiriliyorsunuz...\n");
                                sleep(1);
                                goto mainMenuScreen;
                            }
                        }
                    }
                    break;

            case 2: case2:
                    system("cls");
                    printf("\t\t\t------------------------------\n");
                    printf("\t\t\tToplam Gunluk Gider: \033[91m%d TL\033[0m\n",product+text+bill);
                    printf("\n\t\t\tOdeme turu secin: \n");
                    printf("\n\t\t\t1-Urun: %d TL",product);
                    printf("\n\t\t\t2-Vergi: %d TL",text);
                    printf("\n\t\t\t3-Fatura: %d TL",bill);
                    printf("\n\t\t\t4-Ana menuye don\n");
                    printf("\t\t\t------------------------------\n");
                    scanf("\t\t\t%d",&paymentType);
                    if(paymentType == 4)
                        goto mainMenuScreen;
                    printf("\t\t\tTutar: ");
                    scanf("\t\t\t%d",&paying);
                    payments(paymentType,paying);
                    goto case2;
                    break;

            case 3: case3:
                    system("cls");
                    printf("\t\t\t------------------------\n");
                    printf("\t\t\t1- Gunluk Mali Rapor\n\n");
                    printf("\t\t\t2- Gunluk Satislar\n\n");
                    printf("\t\t\t3- Gunu Bitir\n\n");
                    printf("\t\t\t------------------------\n");
                    scanf("\t\t\t%d",&dailyChoose);
                    if(dailyChoose == 3){
                        system("cls");
                        printf("\t\t\t------------------------\n");
                        printf("\t\t\tGelen Nakit: %d TL\n",comesCash);
                        printf("\t\t\tGelen Kart : %d TL\n",comesCard);
                        printf("\t\t\tGunluk Ciro: %d TL\n",comesCard+comesCash);
                        printf("\t\t\tNet Kar: %d TL\n\n\n",(comesCard+comesCash-product-text-bill));
                        printf("\t\t\t------------------------\n");
                        return 0;
                    }
                    daily(dailyChoose);
                    printf("\n\t\t\tAna menuye donmek icin 0'a basin.");
                    do{
                        scanf("\t\t\t%d",&backMenu);
                        if(backMenu == 0)
                            goto mainMenuScreen;
                    }while(backMenu != 0);
                    break;

            case 4: system("cls");
                    menuList();
                    printf("\n\t\t\tAna menuye donmek icin 0'a basin.");
                    do{
                        scanf("\t\t\t%d",&backMenu);
                        if(backMenu == 0)
                            goto mainMenuScreen;
                    }while(backMenu != 0);
                    break;

            case 5: return 0; break;
            default: printf("\n\t\t\t1-5 arasi secim yapin.\n");
        }

    }while(choice != 5);

    return 0;
}
