#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu;

    while(1) {

        system("cls");
        printf("\t==========================\n\n");
        printf("\t\tBienvenido!\n");
        printf("\n\t==========================\n\n");

        printf("\nA que menu desea ingresar?\n");
        printf("\n\t1.Camarero");
        printf("\n\t2.Gerente");
        printf("\n\t3.Administrativo");
        printf("\n\n\t4.Salir del programa");
        printf("\n\n\tOpcion :   ");

        scanf("%i", &menu);

        switch(menu) {

            ///CASE 1

            case 1: //Menu del cliente (Camarero/mozo)
                system("cls");

                int opcion;

                while(1) {

                    system("cls");

                    printf("Menu del cliente :  \n");
                    printf("\n\t1.Cargar reserva");
                    printf("\n\t2.Mostrar reserva");
                    printf("\n\t3.Cargar mesa sin reserva");
                    printf("\n\t4.Cargar mesa con reserva");
                    printf("\n\t5.Ver mesas disponibles");
                    printf("\n\t6.Ver saldo de mesa");
                    printf("\n\t7.Desocupar mesa");
                    printf("\n\t8.Volver al menu principal");
                    printf("\n\n\tOpcion :   ");

                    scanf("%i", &opcion);

                    switch(opcion) {

                        case 1:
                            system("cls");
                            printf("Funcion para cargar reserva\n");
                            getch();
                            break;
                        case 2:
                            system("cls");
                            printf("Funcion para mostrar reservas\n");
                            getch();
                            break;
                        case 3:
                            system("cls");
                            printf("Funcion para cargar mesa sin reserva\n");
                            getch();
                            break;
                        case 4:
                            system("cls");
                            printf("Funcion para cargar mesa con reserva\n");
                            getch();
                            break;
                        case 5:
                            system("cls");
                            printf("Funcion para ver mesas disponibles\n");
                            getch();
                            break;
                        case 6:
                            system("cls");
                            printf("Funcion para ver saldo de mesa\n");
                            getch();
                            break;
                        case 7:
                            system("cls");
                            printf("Funcion para desocupar mesa");
                            getch();
                        case 8:
                            printf("\nVolviendo al menu principal... presione una tecla para ir");
                            getch();
                            break;
                        default:
                            printf("Ingreso un numero incorrecto, pulse una tecla para volver");
                            getch();
                            break;



                        }
                    if(opcion == 8) break;
                    }

                break;

            ///CASE 2

            case 2: //Menu del jefe/gerente
                system("cls");

                int opcionJefe;

                while(1) {

                    system("cls");

                    printf("Menu del jefe :  \n");
                    printf("\n\t1.Crear plato");
                    printf("\n\t2.Modificar plato");
                    printf("\n\t3.Listar platos");
                    printf("\n\t4.Modificar mesas");//Dudoso
                    printf("\n\t5.Volver al menu principal");
                    printf("\n\n\tOpcion :   ");

                    scanf("%i", &opcionJefe);

                    switch(opcionJefe) {

                        case 1:
                            system("cls");
                            printf("Funcion para crear plato\n");
                            getch();
                            break;
                        case 2:
                            system("cls");
                            printf("Funcion para modificar plato\n");
                            getch();
                            break;
                        case 3:
                            system("cls");
                            printf("Funcion para listar platos\n");
                            getch();
                            break;
                        case 4:
                            system("cls");
                            printf("Funcion para modificar mesas(dudoso)\n");
                            getch();
                            break;
                        case 5:
                            printf("\nVolviendo al menu principal... presione una tecla para ir");
                            getch();
                            break;
                        default:
                            printf("Ingreso un numero incorrecto, pulse una tecla para volver");
                            getch();
                            break;

                        }
                    if(opcionJefe == 5) break;
                    }

                break;

            ///CASE 3

            case 3: //Menu del administrativo

                system("cls");

                int opcionAdm;

                while(1) {

                    system("cls");

                    printf("Menu del administrativo :   \n");
                    printf("\n\t1.Listar reservas");
                    printf("\n\t2.Modificar reservas");
                    printf("\n\t3.Cargar cliente");
                    printf("\n\t4.Listar clientes");
                    printf("\n\t5.Volver al menu principal");
                    printf("\n\n\tOpcion :   ");

                    scanf("%i", &opcionAdm);

                    switch(opcionAdm) {

                        case 1:
                            system("cls");
                            printf("\nFuncion de listado de reservas\n");
                            getch();
                            break;
                        case 2:
                            system("cls");
                            printf("\nFuncion para modificar reservas\n");
                            getch();
                            break;
                        case 3:
                            system("cls");
                            printf("\nFuncion para cargar un cliente\n");
                            getch();
                            break;
                        case 4:
                            system("cls");
                            printf("\nFuncion de listado de clientes\n");
                            getch();
                            break;
                        case 5:
                            printf("\nVolviendo al menu principal... presione una tecla para ir");
                            getch();
                            break;
                        default:
                            printf("Ingreso un numero incorrecto, pulse una tecla para volver");
                            getch();
                            break;

                        }
                    if(opcionAdm == 5) break; // Para frenar el while en caso de querer volver al menu principal
                    }
                break;

            ///CASE 4

            case 4: //Opcion para salir del programa
                system("cls");
                printf("Pulse una tecla para salir del programa\n");
                getch();
                exit(1);
                break;

            default:
                printf("\n\nUsted ingreso un numero incorrecto\n\n");
                getch();
                break;

            }

        }

    return 0;
    }
