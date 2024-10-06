#ifndef DAILY_H_INCLUDED
#define DAILY_H_INCLUDED

int daily(int dailyChoose){
    switch(dailyChoose)
    {
        case 1: system("cls");
                printf("\t\t\t-----------------------------------------\n");
                printf("\t\t\tGunluk Mali Rapor\n\n");
                printf("\t\t\tGelen Nakit           : \033[92m%d TL\033[0m\n",comesCash);
                printf("\t\t\tGelen Kart            : \033[92m%d TL\033[0m\n",comesCard);
                printf("\t\t\tGunluk Toplam Gelir   : \033[92m%d TL\033[0m\n",comesCard+comesCash);
                printf("\t\t\tGunluk Urun Gideri    : \033[91m%d TL\033[0m\n",product);
                printf("\t\t\tGunluk Vergi Gideri   : \033[91m%d TL\033[0m\n",text);
                printf("\t\t\tGunluk Fatura Gideri  : \033[91m%d TL\033[0m\n",bill);
                printf("\t\t\t-----------------------------------------\n");
                if((comesCard+comesCash) >= (product+bill+text)){
                    printf("\t\t\tGunluk Net Kar: \033[92m%d TL\033[0m\n",(comesCard+comesCash-product-text-bill));
                }else{
                    printf("\t\t\tGunluk Net Zarar: \033[91m%d TL\033[0m\n",((product+bill+text)-comesCard-comesCash));
                }
                break;

        case 2: system("cls");
                printf("\t\t\tGunluk Satislar\n\n");
                printf("\t\t\t      Urun       Adet   Gelir");
                printf("\n\t\t\t------------------------------\n");
                printf("\t\t\tGunun Corbasi   : %d  =  %d TL\n",totalCountSoup,(totalCountSoup*60));
                printf("\t\t\tEtli Yemekler   : %d  =  %d TL\n",totalCountMeat,(totalCountMeat*115));
                printf("\t\t\tSebze Yemekleri : %d  =  %d TL\n",totalCountVegetables,(totalCountVegetables*85));
                printf("\t\t\tTatlilar        : %d  =  %d TL\n",totalCountDessert,(totalCountDessert*70));
                printf("\t\t\tIcecekler       : %d  =  %d TL\n",totalCountDrinks,(totalCountDrinks*40));
                printf("\t\t\tPilav           : %d  =  %d TL\n",totalCountRice,(totalCountRice*50));
                printf("\t\t\tYogurt          : %d  =  %d TL\n",totalCountRice,(totalCountRice*40));
                printf("\n\t\t\t------------------------------\n");
                printf("\033[92m\t\t\tToplam: %d TL\033[0m\n",(totalCountSoup*60)+(totalCountMeat*115)+(totalCountVegetables*85)+(totalCountDessert*70)+(totalCountDrinks*40)+(totalCountRice*50)+(totalCountRice*40)); break;

        default: printf("\n\n\t\t\tHatali secim yaptiniz.");
    }
}

#endif // DAILY_H_INCLUDED
