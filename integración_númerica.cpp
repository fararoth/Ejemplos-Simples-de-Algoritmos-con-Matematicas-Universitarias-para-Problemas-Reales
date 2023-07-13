#include <iostream>
#include <cmath>

// Función a integrar: f(x) = altura(x)
double altura(double x) {
    // Aquí se puede definir la función que representa la altura del terreno
    // en función de la posición x.
    // Por ejemplo, se puede utilizar una función que tome en cuenta mediciones
    // reales o datos de elevación topográfica.
    // En este ejemplo sencillo, se utiliza una función arbitraria.
    return 2 * sin(x) + 1;
}

// Algoritmo de integración numérica utilizando el método del trapecio
double integracionNumerica(double a, double b, int n) {
    double h = (b - a) / n;  // Tamaño del intervalo
    double suma = 0.0;

    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        suma += altura(x);
    }

    double integral = (h / 2.0) * (altura(a) + 2.0 * suma + altura(b));
    return integral;
}

int main() {
    double a = 0.0;  // Límite inferior de integración
    double b = 2 * M_PI;  // Límite superior de integración
    int n = 100;     // Número de subdivisiones

    double resultado = integracionNumerica(a, b, n);

    std::cout << "El área aproximada del terreno es: " << resultado << std::endl;
    
    return 0;
    
	system("pause");
}

