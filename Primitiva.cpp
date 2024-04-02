#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicia números aleatorios
    srand(time(0));

    // Array para almacenar los números de la primitiva
    int primitiva[6];

    // Generar números aleatorios únicos para la primitiva
    for (int i = 0; i < 6; ++i) {
        bool repetido;
        int numero;
        do {
            repetido = false;
            numero = rand() % 49 + 1; // Generar número aleatorio entre 1 y 49

            // Comprobar si el número generado ya está en la primitiva
            for (int j = 0; j < i; ++j) {
                if (primitiva[j] == numero) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido); // Repetir hasta que se genere un número único
        primitiva[i] = numero;
    }

    // Generar el reintegro
    int reintegro = rand() % 10 + 1; // Generar número aleatorio entre 1 y 10

    // Muestra los números de la Primitiva y el reintegro
    std::cout << "Números de la Primitiva: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << primitiva[i] << " ";
    }
    std::cout << "\nReintegro: " << reintegro << std::endl;

    return 0;
}
