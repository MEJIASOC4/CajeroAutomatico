/* 
                            Simulador de Cajero Automatico

Este programa será capaz de simular las operaciones básicas de un cajero ATM,
además de poder realizar otras operaciones más avanzadas como poder realizar pagos de servicios, 
depósitos o transferencias, cambiar contraseña de usuario, 
 */

/* Librerias a Utilizar */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

/* Variables Globales */
#define LIMITECLIENTES 10
#define CARACTERESCUENTA 10


/* Estructuras a Utilizar */
typedef struct 
{
    char numeroCuenta[CARACTERESCUENTA];
    double saldoDisponible;
    
}ClientesRegistrados;

/* Programa Principal */
int main(int argc, char const *argv[])
{
    ClientesRegistrados Cliente[LIMITECLIENTES];

    /* Funciones Prototipo */
    int MenuPrincipal();


    return 0;
}

int MenuPrincipal(){

    printf("╔════════════════════════════════════════════════╗\n");
    printf("║                                                ║\n");
    printf("║         BIENVENIDO AL CAJERO AUTOMATICO        ║\n");
    printf("║                                                ║\n");
    printf("╠════════════════════════════════════════════════╣\n");
    printf("║                                                ║\n");
    printf("║              SELECCIONE UNA OPCION             ║\n");
    printf("║                                                ║\n");
    printf("║         1. Revisar el estado de cuenta         ║\n");
    printf("║                                                ║\n");
    printf("║         2. Retiro de Dinero                    ║\n");
    printf("║                                                ║\n");
    printf("║         3. Transferencia de Dinero             ║\n");
    printf("║                                                ║\n");
    printf("║         4. Deposito de Dinero                  ║\n");
    printf("║                                                ║\n");
    printf("║                                                ║\n");
    printf("║                                                ║\n");
    printf("║                                                ║\n");
    printf("╚════════════════════════════════════════════════╝\n");


}
