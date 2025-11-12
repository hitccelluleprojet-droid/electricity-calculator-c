#include <stdio.h>

int main() {
    const float t = 0.01;  // Tarif en MAD/Wh
    int p, h;              // Puissance (W), Heures utilisées
    float c;               // Coût

    // Saisie utilisateur
    printf("=== CALCULATRICE DE CONSOMMATION ELECTRIQUE ===\n");
    printf("Entrez la puissance de l'appareil (W): ");
    scanf("%d", &p);
    printf("Entrez le nombre d'heures d'utilisation: ");
    scanf("%d", &h);

    // Calcul
    c = p * h * t;

    // Résultat avec alertes
    printf("\n=== RÉSULTAT ===\n");
    printf("Coût d'utilisation: %.2f MAD\n", c);

    if (c > 100) {
        printf("  COÛT ÉLEVÉ! Pensez à réduire l'utilisation.\n");
    } else if (c > 50) {
        printf(" Consommation modérée\n");
    } else {
        printf(" Coût raisonnable\n");
    }

    //return 0;
}
