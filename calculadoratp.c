#include <iostream>
#include <stdio.h>

// Funci�n para realizar la operaci�n seleccionada
float calcularResultado(float operando1, float operando2, char tipoOperacion){
    float resultado;
    switch(tipoOperacion){
        case 's': // Suma
            resultado = operando1 + operando2;
            break;
        case 'r': // Resta
            resultado = operando1 - operando2;
            break;
        case 'm': // Multiplicaci�n
            resultado = operando1 * operando2;
            break;
        case 'd': // Divisi�n
            resultado = operando1 / operando2;
            break;
        default:
            printf("Tipo de operaci�n invalido\n");
            resultado = 0;
    }
    return resultado;
}

// Funci�n para mostrar el resultado por pantalla
void mostrarResultado(float resultado){
    printf("El resultado es: %.2f\n", resultado);
}

int main(){
    float operando1, operando2, resultado;
    char tipoOperacion, seguir;

    do {
        // Solicitar datos de la operaci�n
        printf("Ingrese el primer operando: ");
        fflush(stdin);
		scanf("%f", &operando1);
        printf("Ingrese el segundo operando: ");
        fflush(stdin);
		scanf("%f", &operando2);
        printf("Ingrese el tipo de operaci�n (s para suma, r para resta, m para multiplicacion, d para division): ");
        fflush(stdin);
		scanf(" %c", &tipoOperacion);

        // Calcular y mostrar el resultado
        resultado = calcularResultado(operando1, operando2, tipoOperacion);
        mostrarResultado(resultado);

        // Preguntar si se desea seguir ingresando operaciones
        printf("�Desea seguir ingresando operaciones? (SI/NO): ");
        fflush(stdin);
        scanf(" %c", &seguir);
    } while (seguir == 'S' || seguir == 's');

    return 0;
}// CERRI TM
