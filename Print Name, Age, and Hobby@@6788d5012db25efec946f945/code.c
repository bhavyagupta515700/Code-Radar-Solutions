#include <stdio.h>

int main() {
    char username[100]; // Adjust size as needed
    int age;
    char hobby[100]; // Adjust size as needed
    scanf("%s", username);
    scanf("%d", &age);
    scanf("%s", hobby);  
    printf("Username: %s\n", username);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);

    return 0;
}
