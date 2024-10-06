#ifndef HEADHER_H_INCLUDED
#define HEADHER_H_INCLUDED
#include <stdbool.h>
#define TABLE_COUNTS 15

int backMenu;

int soup = 60;
int meat = 115;
int vegetables = 85;
int dessert = 70;
int drinks = 40;
int rice = 50;
int youghurt = 40;

int totalCountSoup = 0;
int totalCountMeat = 0;
int totalCountVegetables = 0;
int totalCountDessert = 0;
int totalCountDrinks = 0;
int totalCountRice = 0;
int totalCountYoughurt = 0;

int paymentType = 0;
int checkType = 0;
int dailyChoose = 0;
int paying;
int pay;
int comesCard = 0;
int comesCash = 0;
int product = 0;
int text = 0;
int bill = 0;

int type;
int productNo;
int productCount;

int tableChoose;

struct table{
    int tableNum;
    int countSoup;
    int countMeat;
    int countVegetables;
    int countDessert;
    int countDrinks;
    int countRice;
    int countYoughurt;
    int tableCheck;
};
struct table t[TABLE_COUNTS];
int j=0;

void mainMenu();
void menuList();
int daily();
int payments(int,int);

int order(int,int,int);
int getCheck(int,int);

#endif // HEADHER_H_INCLUDED
