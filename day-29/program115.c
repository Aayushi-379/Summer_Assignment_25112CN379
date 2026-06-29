#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[100];
    int choice;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;
            case 3:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String: %s\n", temp);
                break;
            case 4:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 5:
                strcpy(temp, str1);
                strrev(temp);  
                printf("Reversed String: %s\n", temp);
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}