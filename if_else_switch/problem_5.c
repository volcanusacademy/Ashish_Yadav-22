/*Problem 5: Vending Machine
You are creating a vending machine program. When a customer inserts money and selects a product, your program should determine if the customer has inserted enough money to purchase the selected item. Write a program that takes the product price and the amount of money inserted as input and displays a message indicating whether the purchase is successful or not.*/
#include<stdio.h>
int main()
{
    printf("<---Welcome--->\n");
    int money;
    int need;
    int coke=40;
    int pepsi=50;
    int maza=80;
    int sting=15;
    int fanta=90;
    printf("Coke  =  40Rs\nPepsi =  50Rs\nMaza  =  80Rs\nSting =  15Rs\nFanta =  90Rs\n");

    int prod;
    printf("Press 1 for Coke\n");
    printf("Press 2 for Pepsi\n");
    printf("Press 3 for Maza\n");
    printf("Press 4 for Sting\n");
    printf("Press 5 for Fanta\n");
    scanf("%d",&prod);

    switch (prod)
    {
    case 1:
        printf("You want Coke Please put 40Rs\n");
        scanf("%d",&money);
        if(money==coke){
            printf("Sucessfully Purchsed\n");
        }
        else if(money<coke){
            need = coke-money;
            printf("you need %dRs more your purchased failed!\n",need);
        }
        else{
            printf("Purchased Failed! Please put only 40Rs\n");
        }
        break;
    case 2:
        printf("You want Pepsi Please put 50Rs\n");
        scanf("%d",&money);
        if(money==pepsi){
            printf("Sucessfully Purchsed\n");
        }
        else if(money<pepsi){
            need = pepsi-money;
            printf("you need %dRs more your purchased failed!\n",need);
        }
        else{
            printf("Purchased Failed! Please put only 50Rs\n");
        }
        break;
    case 3:
        printf("You want maza Please put 80Rs\n");
        scanf("%d",&money);
        if(money==maza){
            printf("Sucessfully Purchsed\n");
        }
        else if(money<maza){
            need = maza-money;
            printf("you need %dRs more your purchased failed!\n",need);
        }
        else{
            printf("Purchased Failed! Please put only 80Rs\n");
        }
        break;
    case 4:
        printf("You want sting Please put 15Rs\n");
        scanf("%d",&money);
        if(money==sting){
            printf("Sucessfully Purchsed\n");
        }
        else if(money<sting){
            need = sting-money;
            printf("you need %dRs more your purchased failed!\n",need);
        }
        else{
            printf("Purchased Failed! Please put only 15Rs\n");
        }
        break;
    case 5:
        printf("You want fanta Please put 90Rs\n");
        scanf("%d",&money);
        if(money==fanta){
            printf("Sucessfully Purchsed\n");
        }
        else if(money<fanta){
            need = fanta-money;
            printf("you need %dRs more your purchased failed!\n",need);
        }
        else{
            printf("Purchased Failed! Please put only 90Rs\n");
        }
        break;

    }

    return 0;
}