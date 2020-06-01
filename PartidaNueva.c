#include "stdFiles.h"

void PartidaNueva()
{
	int nivel;
	char opcion_uno[TAM];
	do
    	{  
      		do
      		{
      		clear();
      		printf (" \n Elija la dificultad de la partida:\n\n");  
    		printf(" 1. Facil - Un Palo  \n");
    		printf(" 2. Medio - Dos Palos\n");
    		printf(" 3. Dificil - Cuatro Palos\n");
    		printf(" 4. Volver al menu principal\n");
       		scanf("%s",opcion_uno);
    		fflush(stdin);
      		nivel = atoi(opcion_uno);      
			}while ((nivel !=4) && (nivel !=3) && (nivel !=2) && (nivel !=1)) ;  
        	switch (nivel)
        	{
            		case 1:
           				Jugar(nivel);
           				nivel = 4;           
            		break;
        
            		case 2:
            			Jugar(nivel);
            			nivel = 4;    
            		break;

            		case 3:
           				Jugar(nivel);
           				nivel = 4;    
             		break;
     
            		case 4:
                
            		break;
        
            		default:
                		printf("Opción NO definida... por favor ingrese una opción valida.\n");
        	}
        
    	} while (nivel != 4);
}
