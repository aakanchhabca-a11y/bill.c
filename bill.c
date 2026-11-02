//welcome to the shop
//*Have a Good Day*
#include<stdio.h>
int main(){
        printf("Welcome to my shop");
        printf("This is our menu");
        printf("1. Masala Chai-15\n");
        printf("2. Coffee-25\n");
        printf("3. Samosa-12\n");
        printf("4. Bun Makhan-30\n");
        printf("5. Lassi-40\n");
    }
    printf("Enter the choice:");
    scanf("%d" , &choice);
    printf("Emter the quantity:");
    scanf("%d" , &quantity);
    if (choice==1){
        price=15;
        printf("Masala Chai Added : price*quantity");
    else if (choice==2){
        price=25;
        printf("Coffee Added : price*quantity");
    }
    else if (choice==3){
        price=12;
        printf("Samosa Added : price*quantity");
    }
    else if (choice==4){
        price=30;
        printf("Bun Mukhan Added : price*quantity");
    else if (choice==5){
        price=40;
        printf("Lassi Added : price*quantity");
    }
    else (choice==0){
        printf("Print the Bill");
        printf("Thank You for coming.")
    }
    }
    return 0;
    
}

