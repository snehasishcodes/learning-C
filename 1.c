#include <stdio.h>
#include <string.h>

int main(void) {

    char item[10] = "";
    float price = 0.0f;
    int quantity = 0;
    float totalPrice = 0.0f;

    printf("Enter name of item: ");
    fgets(item, sizeof(item), stdin); // fgets instead of scanf for string cuz scanf cant read empty spaces
    item[strlen(item) -1] = '\0'; // removes \n character from input buffer

    printf("Enter the price of each item: ");
    scanf("%f", &price);

    printf("Enter total quantity of items: ");
    scanf("%d", &quantity);

    totalPrice = price * quantity;

    printf("Your total price is %6.3f", totalPrice);
    // %f is the format specifier for floating point number
    // .3 denotes three decimal places for the float
    // 6 before the .3 denotes that there should be a minimum of 6 characters
    // it adds preceeding white space if the output is smaller than 6 chars
    
    
    return 0;
}

