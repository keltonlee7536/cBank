#include <stdio.h>

float userBalance = 0;

void balance(){

    printf("your current balance is: \n $");
    printf("%f",userBalance);
    printf("\n\n");
}

void deposit(){
    printf("how much would you like to deposit?\n $");
    scanf("%f", &userBalance);
    //get the number,
    //add that to userBalance
    printf("\nquantity deposited sucessfully.\n\n");
}

void withdraw(){

    float withdrawAmmount;

    printf("how much would you like to withdraw?");
    scanf("%f", &withdrawAmmount);
    printf("%f", withdrawAmmount);
    userbalance = userBalance - withdrawAmmount;
    printf("%f",userBalance);
}


int main(){

    int selected;

    while (1) {
        printf("\n2. check balance\n");
        printf("3. deposit\n");
        printf("4. withdraw\n");
        printf("5. exit\n");
        scanf("%d", &selected);

        switch (selected) {
        case 2:
            balance();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            printf("Exiting the bank menu. Goodbye!\n");
            return 0;

            default:
            printf("Invalid choice, please try again.\n");
        }
    }
}