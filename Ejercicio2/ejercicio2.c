//EJERCICIO 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <direct.h>

int* generar_triangulo_pascal(int n) {
    int** triangulo = (int**)malloc((n + 1) * sizeof(int*));
    for (int i = 0; i <= n; i++) {
        triangulo[i] = (int*)malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangulo[i][j] = 1;
            } else {
                triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
            }
        }
    }

    int* resultado = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        resultado[i] = triangulo[n][i];
    }

    for (int i = 0; i <= n; i++) {
        free(triangulo[i]);
    }
    free(triangulo);

    return resultado;
}

int main() {
    int n = 100;

    // Mostrar directorio actual
    char cwd[1024];
    if (_getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Directorio actual: %s\n", cwd);
    }

    // Medimos tiempo de ejecución
    clock_t inicio = clock();
    int* coeficientes = generar_triangulo_pascal(n);
    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    const char* ruta_archivo = "C:\\Users\\mleonet\\Desktop\\Lenguajes y Compiladores\\resultado_tiempos.txt";
    FILE* archivo = fopen(ruta_archivo, "a");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        free(coeficientes);
        return 1;
    }

    fprintf(archivo, "Tiempo de ejecución en C para n=%d: %.6f segundos\n", n, tiempo);
    fclose(archivo);

    free(coeficientes);
    printf("Ejecución completada. Tiempo: %.6f segundos\n", tiempo);
    return 0;
}