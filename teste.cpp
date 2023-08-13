#include <iostream>
#include <time.h>

int main() {
    clock_t start = clock();

    // Coloque aqui o código que você deseja medir o tempo de execução

    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << "Tempo de execução: " << duration << " segundos" << std::endl;

    return 0;
}
