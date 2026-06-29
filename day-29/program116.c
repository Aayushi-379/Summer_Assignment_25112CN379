#include <stdio.h>

struct Product {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    struct Product p[50];
    int n = 0, choice, i;

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                n++;
                printf("Product added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo products available.\n");
                } else {
                    printf("\nID\tName\tQuantity\tPrice\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t%d\t\t%.2f\n",
                               p[i].id,
                               p[i].name,
                               p[i].quantity,
                               p[i].price);
                    }
                }
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}