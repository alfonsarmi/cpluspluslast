#include <iostream>

// Función recursiva para calcular el factorial
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int numero;
    
    std::cout << "Ingrese un número para calcular su factorial: ";
	std::cout << "Ingrese un número para calcular su factorial: ";
	std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> numero;
    
    // Verificación de número positivo
    if (numero < 0) {
        std::cout << "No se puede calcular el factorial de un número negativo." << std::endl;
        return 1; // Salida del programa con código de error
    }
    
    // Cálculo del factorial
    unsigned long long resultado = factorial(numero);
    
    // Mostrar el resultado
    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
    
    return 0;
}
