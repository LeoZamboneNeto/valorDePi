#include <stdio.h>
#include <locale.h>

/* Alguns pontos do cálculo são confusos, por isso o Script tras
 * alguns comentários, talvez, mais que o necessário.
 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    int termos;
    double pi = 0; //Declaração do início da variável para precisão de cálculo.
    int i;

    printf("Escolha o número de termos para o cálculo de pi, quanto mais termos usados, mais próximo do número real de pi estará: ");
    scanf("%i", &termos);

    //Base cálculo de Pi em base ao Gottfried Leibniz
    for (i = 0; i < termos; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4; // Multiplicar pelo fator 4 para obter pi

    printf("Valor de pi calculado com %i termos: %.20lf\n", termos, pi);

    return 0;
}
