#include <iostream>
#include <stdio.h>

// Función para realizar la operación seleccionada
float calcularResultado(float operando1, float operando2, char tipoOperacion){
    float resultado;
    switch(tipoOperacion){
        case 's': // Suma
            resultado = operando1 + operando2;
            break;
        case 'r': // Resta
            resultado = operando1 - operando2;
            break;
        case 'm': // Multiplicación
            resultado = operando1 * operando2;
            break;
        case 'd': // División
            resultado = operando1 / operando2;
            break;
        default:
            printf("Tipo de operación invalido\n");
            resultado = 0;
    }
    return resultado;
}

// Función para mostrar el resultado por pantalla
void mostrarResultado(float resultado){
    printf("El resultado es: %.2f\n", resultado);
}

int main(){
    float operando1, operando2, resultado;
    char tipoOperacion, seguir;

    do {
        // Solicitar datos de la operación
        printf("Ingrese el primer operando: ");
        fflush(stdin);
		scanf("%f", &operando1);
        printf("Ingrese el segundo operando: ");
        fflush(stdin);
		scanf("%f", &operando2);
        printf("Ingrese el tipo de operación (s para suma, r para resta, m para multiplicacion, d para division): ");
        fflush(stdin);
		scanf(" %c", &tipoOperacion);

        // Calcular y mostrar el resultado
        resultado = calcularResultado(operando1, operando2, tipoOperacion);
        mostrarResultado(resultado);

        // Preguntar si se desea seguir ingresando operaciones
        printf("¿Desea seguir ingresando operaciones? (SI/NO): ");
        fflush(stdin);
        scanf(" %c", &seguir);
    } while (seguir == 'S' || seguir == 's');

    return 0;
}// CERRI TM
