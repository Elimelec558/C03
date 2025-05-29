 #include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Demander à l'utilisateur d'entrer la température en Celsius
    scanf("%f", &celsius);
    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Affichage du résultat
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
