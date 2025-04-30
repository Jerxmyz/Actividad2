#include <iostream>

class Proceso {                     
    int numeros[10];             // Cambié "a" a "numeros" para saber que usaremos
    int contador = 0;            // Cambié "i" a "contador" para que sea más entendible
public:
    void agregarNumero(int valor) { // Cambié "x" a "agregarNumero" para que el usuario sepa que aqui agregaran los numeros
        numeros[contador++] = valor; // Cambié "v" a "valor" para que sea más legible
    }

   int calcularSuma() {          // Cambié "y" a "calcularSuma" para que entendamos que se sumaran los numeros
        int suma = 0;             // Cambié "s" a "suma" para que la variable sea acorde al problema
        for (int j = 0; j < contador; ++j) { // "j" se mantiene como contador
            suma += numeros[j];    // Cambié "a" a "numeros" como hice arriba, para saber que usaremos numeros
        }
        return suma;
   }

    double calcularPromedio() {   // Cambié "z" a "calcularPromedio" para el usuario le sea mas facil ubicar el proceso
        return contador == 0 ? 0.0 : static_cast<double>(calcularSuma()) / contador; // "i" se mantiene como "contador".
    }
};

int main() {
    Proceso p;                   // Cambié "B" a "Proceso" para que coincida con el nuevo nombre de la clase
    int total;                   // Cambié "t" a "total" para que sea entendible

    std::cout << "¿Cuántos números ingresará? ";
    std::cin  >> total;

    for (int k = 0; k < total; ++k) { // "k" se mantiene como contador genérico.
        std::cout << "Número: ";
        int numero;                 // Cambié "d" a "numero" para saber que se agrega el numero
        std::cin >> numero;
        p.agregarNumero(numero);   // Cambié "x" a "agregarNumero" para que sea más claro.
    }

    std::cout << "Suma = "      << p.calcularSuma() << '\n'; // Cambié "y" a "calcularSuma" para saber que es la suma
    std::cout << "Promedio = "  << p.calcularPromedio() << '\n'; // Cambié "z" a "calcularPromedio" para saber que es el procedimiento del promedio de la suma de todos los numeros
    return 0;
}
