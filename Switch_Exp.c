#include<stdio.h>

int main() {
    
    int choice;
    
    printf("Restaurant Menu:\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Pasta\n");
    printf("4. Salad\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        printf("You selected Pizza.\n");
        break;
    case 2:
        printf("You selected Burger.\n");
        break;
    case 3:
        printf("You selected Pasta.\n");
        break;
    case 4:
        printf("You selected Salad.\n");
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}
  