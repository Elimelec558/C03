#include <stdio.h>
int main() {
    int nombre, inverse = 0;
    scanf("%d", &nombre);
    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10; // Ajoute le dernier chiffre au nombre inversé
        nombre /= 10; // Supprime le dernier chiffre
    }
    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
