#include <stdio.h>
int main() {
    int nombre, copie, compteur = 0;
    scanf("%d", &nombre);
    copie = nombre; // On garde une copie du nombre original
    // Utiliser une boucle pour compter les chiffres
    while (nombre != 0) {
        nombre /= 10; // Supprime le dernier chiffre
        compteur++;
    }
    printf("%d contient %d chiffre(s).\n", copie, compteur);
    return 0;
}
