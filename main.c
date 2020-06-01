#include "stdFiles.h"

int main()
{
	int opcion; 
	char opcion_uno[TAM];
     	do
    	{  
     		do
     		{
     		clear();
     		printf("  __                   __            \n");
			printf(" (_  _ |.|_ _  _. _   (_  _ . _| _ _ \n");
			printf(" __)(_)|||_(_|| |(_)  __)|_)|(_|(-|  \n");
			printf("                         |           \n\n");
			printf(" 1. Nueva Partida \n");
    		printf(" 2. Reanudar Partida\n");
    		printf(" 3. Estadisticas\n");
			printf(" 4. Como Jugar\n");
    		printf(" 5. Salir\n");    
    		scanf("%s",opcion_uno);
    		fflush(stdin);      		
			opcion = atoi(opcion_uno);      
			}while ((opcion !=5) && (opcion !=4) && (opcion !=3) && (opcion !=2) && (opcion !=1));  
        	switch (opcion)
        	{
            		case 1:
             			clear();
             			PartidaNueva();  
            		break;
        
            		case 2:
            			clear();    
            			Jugar(10);
               		break;

            		case 3:
            			Estadisticas(0,0,0,0,0,0,1);  //Manejo De Archivo.
            		break;
					case 4:
						clear();
						printf(" \n SOLITARIO SPIDER: COMO JUGAR\n\n");
						printf(" El objetivo del Solitario Spider consiste en quitar las cartas del juego\n en el menor numero de movimientos posible. Para poder quitar las cartas, \n tiene que alinear un palo completo de cartas ordenadas de rey a as.\n En niveles de dificultad elevados, tambien puede alternar palos rojos y \n negros para alinearlos, dar la vuelta a las cartas y moverlas, pero seguira \n necesitando escaleras completas para poder quitar las cartas.\n\n");
						pause();
					break;
     
           			case 5:
            			printf("\n Gracias por jugar Solitario Spider\n\n");
            			pause();
            		break;
        
            		default:
                		printf("Opción NO definida... por favor ingrese una opción valida.\n");
        	}
        
    	} while (opcion != 5);
return 0;
}