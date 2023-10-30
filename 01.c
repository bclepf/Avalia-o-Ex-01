#include <stdio.h>

int main() {
    
    char string01[] = "Eu vou ser copiada";
    char string02[50]; 
    int i = 0; 
      
    for (; string01[i] != '\0'; i++) {
        string02[i] = string01[i];
    }
    
    string02[i] = '\0';

    printf("Primeira String: %s\n", string01);
    printf("Segunda String: %s\n", string02);

    getch();

    return 0;
}
