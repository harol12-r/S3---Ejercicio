#include <stdio.h>

int main(int argc, char *argv[]) {
    int contE = 0;
    char nombres[100][50];
    float m1[100], m2[100], m3[100];
    int opc1 = 0;

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Ingresar estudiante\n");
        printf("2. Ingresar calificaciones\n");
        printf("3. Mostrar calificaciones\n");
        printf("4. Mostrar calificacion mas alta y mas baja\n");
        printf("5. Mostrar aprobados y reprobados\n");
        printf("6. Salir\n");
        printf(">> ");
        scanf("%d", &opc1);

        switch (opc1) {
            case 1:
                if (contE < 100) {
                    printf("Ingrese el estudiante %d: ", contE);
                    scanf("%s", nombres[contE]);
                    contE++;
                } else {
                    printf("No se puede ingresar mas estudiantes\n");
                }
                break;

            case 2: {
                int sel = 0;
                if (contE == 0) {
                    printf("No hay estudiantes registrados.\n");
                    break;
                }
                printf("Seleccione un estudiante:\n");
                for (int i = 0; i < contE; i++) {
                    printf("%d. %s\n", i, nombres[i]);
                }
                scanf("%d", &sel);
                
                if (sel < 0 || sel >= contE) {
                    printf("Error: no existe la seleccion\n");
                    break;
                }
                
                printf("Seleccionado estudiante %d: %s\n", sel, nombres[sel]);
                printf("Ingrese las calificaciones\n");
                printf("Matematicas: ");
                scanf("%f", &m1[sel]);
                printf("Lenguaje: ");
                scanf("%f", &m2[sel]);
                printf("Programacion: ");
                scanf("%f", &m3[sel]);
                break;
            }

            case 3:
                if (contE == 0) {
                    printf("No hay estudiantes registrados.\n");
                    break;
                }
                printf("#\t\tNombre\t\tMat\t\tLen\t\tPro\n");
                for (int i = 0; i < contE; i++) {
                    printf("%d\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n", i, nombres[i], m1[i], m2[i], m3[i]);
                }
                break;

            case 4:
                printf("Opcion 4 en desarrollo...\n");
                break;

            case 5:
                printf("Opcion 5 en desarrollo...\n");
                break;

            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
                break;
        }
    } while (opc1 != 6);

    return 0;
}