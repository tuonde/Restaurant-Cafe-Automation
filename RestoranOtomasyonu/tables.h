#ifndef TABLES_H_INCLUDED
#define TABLES_H_INCLUDED

int order(int type, int productNo, int productCount){
    if(type == 1){
        switch(productNo)
        {
            case 1: t[tableChoose-1].countSoup += productCount;
                    totalCountSoup += productCount;
                    t[tableChoose-1].tableCheck += 60*productCount; break;

            case 2: t[tableChoose-1].countMeat += productCount;
                    totalCountMeat += productCount;
                    t[tableChoose-1].tableCheck += 115*productCount; break;

            case 3: t[tableChoose-1].countVegetables += productCount;
                    totalCountVegetables += productCount;
                    t[tableChoose-1].tableCheck += 85*productCount; break;

            case 4: t[tableChoose-1].countDessert += productCount;
                    totalCountDessert += productCount;
                    t[tableChoose-1].tableCheck += 70*productCount; break;

            case 5: t[tableChoose-1].countDrinks += productCount;
                    totalCountDrinks += productCount;
                    t[tableChoose-1].tableCheck += 40*productCount; break;

            case 6: t[tableChoose-1].countRice += productCount;
                    totalCountRice += productCount;
                    t[tableChoose-1].tableCheck += 50*productCount; break;

            case 7: t[tableChoose-1].countYoughurt += productCount;
                    totalCountYoughurt += productCount;
                    t[tableChoose-1].tableCheck += 40*productCount; break;

            default: printf("\n\t\t\tYanlis secim yaptiniz.");
        }
    }else if (type == 2){
        switch(productNo)
        {
            case 1: t[tableChoose-1].countSoup -= productCount;
                    totalCountSoup -= productCount;
                    t[tableChoose-1].tableCheck -= 60*productCount; break;

            case 2: t[tableChoose-1].countMeat -= productCount;
                    totalCountMeat -= productCount;
                    t[tableChoose-1].tableCheck -= 115*productCount; break;

            case 3: t[tableChoose-1].countVegetables -= productCount;
                    totalCountVegetables -= productCount;
                    t[tableChoose-1].tableCheck -= 85*productCount; break;

            case 4: t[tableChoose-1].countDessert -= productCount;
                    totalCountDessert -= productCount;
                    t[tableChoose-1].tableCheck -= 70*productCount; break;

            case 5: t[tableChoose-1].countDrinks -= productCount;
                    totalCountDrinks -= productCount;
                    t[tableChoose-1].tableCheck -= 40*productCount; break;

            case 6: t[tableChoose-1].countRice -= productCount;
                    totalCountRice -= productCount;
                    t[tableChoose-1].tableCheck -= 50*productCount; break;

            case 7: t[tableChoose-1].countYoughurt -= productCount;
                    totalCountYoughurt -= productCount;
                    t[tableChoose-1].tableCheck -= 40*productCount; break;

            default: printf("\n\t\t\tYanlis secim yaptiniz.");
        }
    }
}

int getCheck(int checkType, int tableCheck){
    if(checkType == 1){
        comesCash += t[tableChoose-1].tableCheck;
        t[tableChoose-1].countSoup = 0;
        t[tableChoose-1].countMeat = 0;
        t[tableChoose-1].countVegetables = 0;
        t[tableChoose-1].countDessert = 0;
        t[tableChoose-1].countDrinks = 0;
        t[tableChoose-1].countRice = 0;
        t[tableChoose-1].countYoughurt = 0;
        t[tableChoose-1].tableCheck = 0;
    }else if(checkType == 2){
        comesCard += t[tableChoose-1].tableCheck;
        t[tableChoose-1].countSoup = 0;
        t[tableChoose-1].countMeat = 0;
        t[tableChoose-1].countVegetables = 0;
        t[tableChoose-1].countDessert = 0;
        t[tableChoose-1].countDrinks = 0;
        t[tableChoose-1].countRice = 0;
        t[tableChoose-1].countYoughurt = 0;
        t[tableChoose-1].tableCheck = 0;
    }
}

#endif // TABLES_H_INCLUDED
