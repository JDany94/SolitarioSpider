#include "stdFiles.h"

struct nodo
{
	int numero;
	int Picas;
	int Diamantes;
	int Trebol;
	int Corazon;
	int Visible;
	struct nodo *sig;
};
typedef struct nodo _nodo;


int Jugar(int nivel)
{
	_nodo *uno, *dos, *tres, *cuatro, *cinco, *seis, *siete, *ocho, *nueve, *diez, *mazo, *A, *B, *Luno, *Ldos, *Ltres, *Lcuatro, *Lcinco, *Lseis, *Lsiete, *Locho;
	int opcion,manda,fila,recibe,Reales,Movimientos,salir,lvl,TF;
	char opcion_uno[TAM];
		
	srand(time(NULL));
	Luno = NULL;
	Ldos = NULL;
	Ltres = NULL;
	Lcuatro = NULL;
	Lcinco = NULL;
	Lseis = NULL;
	Lsiete = NULL;
	Locho = NULL;
	uno = NULL;
	dos = NULL;
	tres = NULL;
	cuatro = NULL;
	cinco = NULL;
	seis = NULL;
	siete = NULL;
	ocho = NULL;
	nueve = NULL;
	diez = NULL;
	mazo = NULL;
	Reales = 0;
	Movimientos = 0;
  	clear();
        
        if (nivel == 1)
        {
        	lvl=1;
        	mazo = LlenarMazo(mazo,1);  //ManejoDeCola.
        	RepartidaInicial(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales); // Util3.
       		Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
       		GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
        }
         if (nivel == 2)
        {
        	lvl=2;
        	mazo = LlenarMazo(mazo,2);  //ManejoDeCola.
        	RepartidaInicial(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales); // Util3.
       		Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
       		GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
        }
         if (nivel == 3)
        {
        	lvl=3;
        	mazo = LlenarMazo(mazo,4);  //ManejoDeCola.
        	RepartidaInicial(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales); // Util3.
       		Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
       		GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
        }
        
        if (nivel == 10)
        {
        	CargarPartida(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,&Reales,&Movimientos,1,&lvl); //Manejo De Archivo.
        	GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
        }
     
            
	do 
	{
		do
		{
		clear();
		ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
		printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
		scanf("%s",opcion_uno);
    		fflush(stdin);      		
		opcion = atoi(opcion_uno);      
		 }while ((opcion !=6) &&(opcion !=5) && (opcion !=4) && (opcion !=3) && (opcion !=2) && (opcion !=1) && (opcion !=666)&& (opcion !=762)) ;
		
	switch (opcion)
        {
        	case 1:
	  	 	
	  	 	do
	  	 	{
	  	 	printf ("\n Columna a mover: ");
	 		scanf("%s",opcion_uno);
    			fflush(stdin);      		
			manda = atoi(opcion_uno); 
	 		}while (!((manda>=1) && (manda<=100)));
	 		do
	 		{
	 		printf("\n Fila de esa columna: ");
	 		scanf("%s",opcion_uno);
    			fflush(stdin);      		
			fila = atoi(opcion_uno); 
	 		}while (!((fila>=1) && (fila<=100)));
	 		do
	 		{
	 		printf(" \n Columna a donde movera: "); 	 
	 		scanf("%s",opcion_uno);
    			fflush(stdin);      		
			recibe = atoi(opcion_uno); 
	 		}while (!((recibe>=1) && (recibe<=100)));
	 		
			if ((manda == 0 || manda >10) || (recibe == 0 || recibe >10) || (fila == 0 || fila > MasLarga(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez)))
			{
				printf("\n Movimiento invalido\n\n");
				pause();
			}
			else
			{
				GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
				if ( manda == 1)
	 			{
	 				A = uno;
	 			}
	  			if ( manda == 2)
	 			{
	 				A = dos;
				}
				if ( manda == 3)
	 			{
	 				A = tres;
	 			}
	  			if ( manda == 4)
				{
	 				A = cuatro;
	 			}
	  			if ( manda == 5)
	 			{
	 				A = cinco;
	 			}
	  			if ( manda == 6)
	 			{
					A = seis;
	 			}
	  			if ( manda == 7)
	 			{
	 				A = siete;
	 			}
	 			 if ( manda == 8)
	 			{
	 				A = ocho;
	 			}
	  			if ( manda == 9)
	 			{
	 				A = nueve;
	 			}
	  			if ( manda == 10)
	 			{	
	 				A =diez;
	 			}
				if (recibe  == 1)
	 			{
	 				B = uno;
	 			}
	  			if ( recibe == 2)
	 			{
	 				B = dos;
	 			}
	  			if ( recibe == 3)
	 			{
	 				B = tres;
	 			}
	  			if ( recibe == 4)
	 			{
	 				B = cuatro;
	 			}
	  			if ( recibe == 5)
	 			{
	 				B = cinco;
	 			}
	  			if ( recibe == 6)
	 			{
	 				B = seis;
	 			}
	  			if ( recibe == 7)
	 			{
	 				B = siete;
	 			}
	  			if ( recibe == 8)
	 			{
	 				B = ocho;
	 			}
	  			if ( recibe == 9)
	 			{
	 				B = nueve;
	 			}
	  			if ( recibe == 10)
				{
	 				B =diez;
	 			}
	 			 
  				Movimientos = Mover(&A,&B,fila,Movimientos); //Util2.
				if ( manda == 1)
	 			{
	 				uno = A;
	 			}
	 		 	if ( manda == 2)
	 			{
	 				dos = A;
	 			}
	 	 		if ( manda == 3)
	 			{
	 				tres = A;
	 			}
	  			if ( manda == 4)
	 			{
	 				cuatro = A;
	 			}
	  			if ( manda == 5)
	 			{
	 				cinco = A;
	 			}
	  			if ( manda == 6)
	 			{
	 				seis = A;
	 			}
	  			if ( manda == 7)
	 			{
	  				siete= A;
	 			}
	  			if ( manda == 8)
	 			{
	  				ocho = A;
	 			}
	  			if ( manda == 9)
	 			{
	 				nueve = A;
	 			}
	  			if ( manda == 10)
	 			{
	 				diez = A;
	 			}	
				if (recibe  == 1)
			 	{
	 				uno = B;
	 			}
	  			if ( recibe == 2)
	 			{
	 				dos = B;
	 			}
	 		 	if ( recibe == 3)
	 			{
	 				tres = B;
	 			}
	  			if ( recibe == 4)
	 			{
	 				cuatro = B;
			 	}
	  			if ( recibe == 5)
	 			{
	 				cinco = B;
	 			}
	  			if ( recibe == 6)
	 			{
	 				seis = B;
	 			}
	  			if ( recibe == 7)
	 			{
	 				siete = B;
	 			}
	  			if ( recibe == 8)
	 			{
	 				ocho = B;
	 			}
	  			if ( recibe == 9)
	 			{
	 				nueve = B;
	 			}
	  			if ( recibe == 10)
	 			{
	 				diez = B;
		 		}	 	
	 		}
			//AQU
	  		if ((!esPilaVacia(uno)) && (uno->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&uno,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&uno,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&uno,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&uno,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&uno,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&uno,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&uno,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&uno,&Locho,Reales); //Util2.
				}				
			} 
			if ((!esPilaVacia(dos)) && (dos->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&dos,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&dos,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&dos,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&dos,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&dos,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&dos,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&dos,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&dos,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(tres)) && (tres->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&tres,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&tres,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&tres,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&tres,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&tres,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&tres,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&tres,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&tres,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cuatro)) && (cuatro->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cuatro,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cuatro,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cuatro,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cuatro,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cuatro,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cuatro,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cuatro,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cuatro,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cinco)) && (cinco->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cinco,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cinco,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cinco,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cinco,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cinco,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cinco,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cinco,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cinco,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(seis)) && (seis->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&seis,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&seis,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&seis,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&seis,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&seis,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&seis,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&seis,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&seis,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(siete)) && (siete->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&siete,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&siete,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&siete,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&siete,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&siete,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&siete,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&siete,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&siete,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(ocho)) && (ocho->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&ocho,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&ocho,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&ocho,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&ocho,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&ocho,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&ocho,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&ocho,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&ocho,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(nueve)) && (nueve->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&nueve,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&nueve,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&nueve,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&nueve,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&nueve,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&nueve,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&nueve,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&nueve,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(diez)) && (diez->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&diez,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&diez,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&diez,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&diez,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&diez,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&diez,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&diez,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&diez,&Locho,Reales); //Util2.
				}		
			}
	  		clear();
	  		ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
	  		if (Reales == 8)
	  		{
				#ifdef Windows
				{
					printf("  .------..------..------.  .------..------..------.\n");
					printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
					printf("  | :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,007);
					printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
					printf("  `------'`------'`------'  `------'`------'`------'\n\n");
					printf("         Felicidades!! Ha Ganado El Juego!\n\n");
					printf("         Movimientos : %d\n",Movimientos);
					printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
					pause();
					clear();
					if(lvl==1)
					{Estadisticas(1,0,0,0,0,0,0);}
					if(lvl==2)
					{Estadisticas(0,0,1,0,0,0,0);}
					if(lvl==3)
					{Estadisticas(0,0,0,0,1,0,0);}
					opcion = 6;
					
				}
				#else
				{
					printf("  .------..------..------.  .------..------..------.\n");
					printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
					printf("  | :♥ : || :♦ : || :♠ : |  | :♣ : || :♥ : || :♠ : |%c\n",007);
					printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
					printf("  `------'`------'`------'  `------'`------'`------'\n\n");
					printf("         Felicidades!! Ha Ganado El Juego!\n\n");
					printf("         Movimientos : %d\n",Movimientos);
					printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
					pause();
					//clear();
					if(lvl==1)
					{Estadisticas(1,0,0,0,0,0,0);}
					if(lvl==2)
					{Estadisticas(0,0,1,0,0,0,0);}
					if(lvl==3)
					{Estadisticas(0,0,0,0,1,0,0);}
					opcion = 6;
				}
				#endif
	  		}
	  		AutomaticaMover(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,&TF); // JugadaAutomatica.
	  		//printf("\n%d\n",TF);
	  		if ((TF==FALSE) && (Contar(mazo)==0))
	  		{
	  			#ifdef Windows
				{
				printf("  .------..------..------..------.  .------..------..------..------.\n");
				printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
				printf("  | :%c : || :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,004,005,007);
				printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
				printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
				printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
				printf("          Movimientos : %d\n",Movimientos);
				printf("          Puntuacion : %d\n\n",500-Movimientos); 
				pause();
				clear();
				if(lvl==1)
				{Estadisticas(0,1,0,0,0,0,0);}
				if(lvl==2)
				{Estadisticas(0,0,0,1,0,0,0);}
				if(lvl==3)
				{Estadisticas(0,0,0,0,0,1,0);}
				opcion = 6;
				}
				#else
				{
				printf("  .------..------..------..------.  .------..------..------..------.\n");
				printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
				printf("  | :♥ : || :♠ : || :♣ : || :♦ : |  | :♥ : || :♦ : || :♣ : || :♠ : |%c\n",007);
				printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
				printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
				printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
				printf("          Movimientos : %d\n",Movimientos);
				printf("          Puntuacion : %d\n\n",500-Movimientos); 
				pause();
				//clear();
				if(lvl==1)
				{Estadisticas(0,1,0,0,0,0,0);}
				if(lvl==2)
				{Estadisticas(0,0,0,1,0,0,0);}
				if(lvl==3)
				{Estadisticas(0,0,0,0,0,1,0);}
				opcion = 6;
				}
				#endif
	  		}		  		 
	  	break;
           
       		case 2:
       			uno = NULL;
			dos = NULL;
			tres = NULL;
			cuatro = NULL;
			cinco = NULL;
			seis = NULL;
			siete = NULL;
			ocho = NULL;
			nueve = NULL;
			diez = NULL;
			mazo = NULL;
          		clear();
           		CargarPartida(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,&Reales,&Movimientos,2,&lvl); //Manejo De Archivo.          	
       	 	break;
        
        	case 3:
          		if ((!esPilaVacia(uno)) && (!esPilaVacia(dos)) && (!esPilaVacia(tres)) && (!esPilaVacia(cuatro)) && (!esPilaVacia(cinco)) && (!esPilaVacia(seis)) && (!esPilaVacia(siete)) && (!esPilaVacia(ocho)) && (!esPilaVacia(nueve)) && (!esPilaVacia(diez)))
           		{
           			if (Contar(mazo) == 0) //Util.
     				{
     					printf("\n No es posible repartir.. No hay cartas en el mazo.\n\n");
     					pause();
     					clear();
     				}
     				else
     				{
     					clear();
     					GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
           				Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
           				AutomaticaMover(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,&TF); // JugadaAutomatica.
	  				if ((TF==FALSE) && (Contar(mazo)==0))
			  		{
	  				#ifdef Windows
					{
					printf("  .------..------..------..------.  .------..------..------..------.\n");
					printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
					printf("  | :%c : || :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,004,005,007);
					printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
					printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
					printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
					printf("          Movimientos : %d\n",Movimientos);
					printf("          Puntuacion : %d\n\n",500-Movimientos); 
					pause();
					clear();
					if(lvl==1)
					{Estadisticas(0,1,0,0,0,0,0);}
					if(lvl==2)
					{Estadisticas(0,0,0,1,0,0,0);}
					if(lvl==3)
					{Estadisticas(0,0,0,0,0,1,0);}
					opcion = 6;
					}
					#else
					{
					printf("  .------..------..------..------.  .------..------..------..------.\n");
					printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
					printf("  | :♥ : || :♠ : || :♣ : || :♦ : |  | :♥ : || :♦ : || :♣ : || :♠ : |%c\n",007);
					printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
					printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
					printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
					printf("          Movimientos : %d\n",Movimientos);
					printf("          Puntuacion : %d\n\n",500-Movimientos); 
					pause();
					//clear();
					if(lvl==1)
					{Estadisticas(0,1,0,0,0,0,0);}
					if(lvl==2)
					{Estadisticas(0,0,0,1,0,0,0);}
					if(lvl==3)
					{Estadisticas(0,0,0,0,0,1,0);}
					opcion = 6;
					}
					#endif
	  				}		  		 
           			}
           		}
           		else
           		{
           			printf("\n No se permite repartir si hay espacios libres.. \n\n");
     				pause();
     				clear();
           		}
              	break;
              	
              	case 4:
              		TF = FALSE;
              		GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
              		Automatica(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&TF,&Movimientos); // JugadaAutomatica.
					if (TF==FALSE)
					{
					AutomaticaVacios(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&TF,&Movimientos);//Jugada Automatica
					}
						if ((!esPilaVacia(uno)) && (uno->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&uno,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&uno,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&uno,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&uno,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&uno,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&uno,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&uno,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&uno,&Locho,Reales); //Util2.
				}				
			} 
			if ((!esPilaVacia(dos)) && (dos->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&dos,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&dos,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&dos,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&dos,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&dos,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&dos,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&dos,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&dos,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(tres)) && (tres->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&tres,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&tres,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&tres,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&tres,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&tres,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&tres,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&tres,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&tres,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cuatro)) && (cuatro->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cuatro,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cuatro,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cuatro,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cuatro,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cuatro,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cuatro,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cuatro,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cuatro,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cinco)) && (cinco->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cinco,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cinco,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cinco,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cinco,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cinco,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cinco,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cinco,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cinco,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(seis)) && (seis->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&seis,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&seis,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&seis,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&seis,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&seis,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&seis,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&seis,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&seis,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(siete)) && (siete->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&siete,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&siete,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&siete,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&siete,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&siete,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&siete,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&siete,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&siete,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(ocho)) && (ocho->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&ocho,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&ocho,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&ocho,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&ocho,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&ocho,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&ocho,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&ocho,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&ocho,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(nueve)) && (nueve->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&nueve,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&nueve,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&nueve,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&nueve,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&nueve,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&nueve,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&nueve,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&nueve,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(diez)) && (diez->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&diez,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&diez,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&diez,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&diez,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&diez,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&diez,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&diez,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&diez,&Locho,Reales); //Util2.
				}		
			}
						clear();
	  					ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
	  					if (Reales == 8)
	  					{
						#ifdef Windows
						{
						printf("  .------..------..------.  .------..------..------.\n");
						printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
						printf("  | :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,007);
						printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
						printf("  `------'`------'`------'  `------'`------'`------'\n\n");
						printf("         Felicidades!! Ha ganado el juego!\n\n");
						printf("         Movimientos : %d\n",Movimientos);
						printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(1,0,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,1,0,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,1,0,0);}
						opcion = 6;
						}
						#else
						{
						printf("  .------..------..------.  .------..------..------.\n");
						printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
						printf("  | :♥ : || :♦ : || :♠ : |  | :♣ : || :♥ : || :♠ : |%c\n",007);
						printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
						printf("  `------'`------'`------'  `------'`------'`------'\n\n");
						printf("         Felicidades!! Ha ganado el juego!\n\n");
						printf("         Movimientos : %d\n",Movimientos);
						printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(1,0,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,1,0,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,1,0,0);}
						opcion = 6;
						}
						#endif
	  					}  	
						if ((TF==FALSE) && (Contar(mazo) == 0))
              			{
              			#ifdef Windows
						{
						printf("  .------..------..------..------.  .------..------..------..------.\n");
						printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
						printf("  | :%c : || :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,004,005,007);
						printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
						printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
						printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
						printf("          Movimientos : %d\n",Movimientos);
						printf("          Puntuacion : %d\n\n",500-Movimientos); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(0,1,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,0,1,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,0,1,0);}
						opcion = 6;
						}
						#else
						{
						printf("  .------..------..------..------.  .------..------..------..------.\n");
						printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
						printf("  | :♥ : || :♠ : || :♣ : || :♦ : |  | :♥ : || :♦ : || :♣ : || :♠ : |%c\n",007);
						printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
						printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
						printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
						printf("          Movimientos : %d\n",Movimientos);
						printf("          Puntuacion : %d\n\n",500-Movimientos); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(0,1,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,0,1,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,0,1,0);}
						opcion = 6;
						}
						#endif
              			}
              			if ((TF==FALSE) && (Contar(mazo) != 0))
              			{
              				Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
              			}
              		
              		break;
              	
              	case 5:
              		GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,1,lvl); // Manejo De Archivo.
              		printf("\n PARTIDA GUARDADA...\n\n");
              		pause();
              		clear(); 
              	break;
              	
              	case 6:
              		do
              		{
					clear();
					ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
					printf (" 1. Mover\n");
					printf (" 2. Deshacer\n");
					printf (" 3. Repartir\n");
					printf (" 4. Jugada Automatica\n");
					printf (" 5. Guardar Partida\n");
					printf (" 6. Salir\n");
					printf ("6\n");
              		printf("\n Desea guardar la partida antes de salir?\n\n 1. Si\n 2. No\n 3. Cancelar Salida\n");
             		scanf("%s",opcion_uno);
               		fflush(stdin);      		
					salir = atoi(opcion_uno);      
		 			}while ((salir !=1) && (salir !=2)&& (salir !=3)) ;  
              		if (salir == 1)
              		{
              			GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,1,lvl); // Manejo De Archivo.
              			printf("\n PARTIDA GUARDADA...\n\n");
              			pause();
              			clear();    
              		}
              		if (salir == 2)
              		{
              			clear();
              		}
              		if (salir == 3)
              		{
              			clear();
              			opcion=7;
              		}
              	break;
              	             	
              	case 666:
              		clear();
              		uno = NULL;
			dos = NULL;
			tres = NULL;
			cuatro = NULL;
			cinco = NULL;
			seis = NULL;
			siete = NULL;
			ocho = NULL;
			nueve = NULL;
			diez = NULL;
			mazo = NULL;
			Reales = 8;
			Movimientos=1;
			ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
			if (Reales == 8)
	  		{
				#ifdef Windows
				{
					printf("  .------..------..------.  .------..------..------.\n");
					printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
					printf("  | :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,007);
					printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
					printf("  `------'`------'`------'  `------'`------'`------'\n\n");
					printf("         Felicidades!! Ha ganado el juego!\n\n");
					printf("         Movimientos : %d\n",Movimientos);
					printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
					pause();
					clear();
					//if(lvl==1)
					//{Estadisticas(1,0,0,0,0,0,0);}
					//if(lvl==2)
					//{Estadisticas(0,0,1,0,0,0,0);}
					//if(lvl==3)
					//{Estadisticas(0,0,0,0,1,0,0);}
					opcion = 6;
				}
				#else
				{
					printf("  .------..------..------.  .------..------..------.\n");
					printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
					printf("  | :♥ : || :♦ : || :♠ : |  | :♣ : || :♥ : || :♠ : |%c\n",007);
					printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
					printf("  `------'`------'`------'  `------'`------'`------'\n\n");
					printf("         Felicidades!! Ha ganado el juego!\n\n");
					printf("         Movimientos : %d\n",Movimientos);
					printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
					pause();
					clear();
					//if(lvl==1)
					//{Estadisticas(1,0,0,0,0,0,0);}
					//if(lvl==2)
					//{Estadisticas(0,0,1,0,0,0,0);}
					//if(lvl==3)
					//{Estadisticas(0,0,0,0,1,0,0);}
					opcion = 6;
				}
				#endif
	  		} 
              		
              	break;        
              	
              	case 762:
              	
              		while (Movimientos<300)
              		{
              				SleepDos();
              				TF = FALSE;
              				GuardarPartida(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales,Movimientos,2,lvl); // Manejo De Archivo.
              				Automatica(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&TF,&Movimientos); // JugadaAutomatica.
					if (TF==FALSE)
					{
					AutomaticaVacios(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&TF,&Movimientos); //Jugada Automatica
					}
						if ((!esPilaVacia(uno)) && (uno->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&uno,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&uno,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&uno,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&uno,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&uno,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&uno,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&uno,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&uno,&Locho,Reales); //Util2.
				}				
			} 
			if ((!esPilaVacia(dos)) && (dos->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&dos,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&dos,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&dos,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&dos,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&dos,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&dos,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&dos,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&dos,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(tres)) && (tres->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&tres,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&tres,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&tres,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&tres,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&tres,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&tres,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&tres,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&tres,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cuatro)) && (cuatro->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cuatro,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cuatro,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cuatro,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cuatro,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cuatro,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cuatro,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cuatro,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cuatro,&Locho,Reales); //Util2.
				}	
			}
	  		if ((!esPilaVacia(cinco)) && (cinco->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&cinco,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&cinco,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&cinco,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&cinco,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&cinco,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&cinco,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&cinco,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&cinco,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(seis)) && (seis->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&seis,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&seis,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&seis,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&seis,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&seis,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&seis,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&seis,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&seis,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(siete)) && (siete->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&siete,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&siete,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&siete,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&siete,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&siete,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&siete,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&siete,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&siete,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(ocho)) && (ocho->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&ocho,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&ocho,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&ocho,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&ocho,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&ocho,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&ocho,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&ocho,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&ocho,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(nueve)) && (nueve->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&nueve,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&nueve,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&nueve,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&nueve,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&nueve,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&nueve,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&nueve,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&nueve,&Locho,Reales); //Util2.
				}		
			}
	  		if ((!esPilaVacia(diez)) && (diez->numero == 1))
	  		{
				if (esPilaVacia(Luno))
				{
				Reales = EscaleraReal(&diez,&Luno,Reales); //Util2.
				}
				if (esPilaVacia(Ldos))
				{
				Reales = EscaleraReal(&diez,&Ldos,Reales); //Util2.
				}
				if (esPilaVacia(Ltres))
				{
				Reales = EscaleraReal(&diez,&Ltres,Reales); //Util2.
				}
				if (esPilaVacia(Lcuatro))
				{
				Reales = EscaleraReal(&diez,&Lcuatro,Reales); //Util2.
				}
				if (esPilaVacia(Lcinco))
				{
				Reales = EscaleraReal(&diez,&Lcinco,Reales); //Util2.
				}
				if (esPilaVacia(Lseis))
				{
				Reales = EscaleraReal(&diez,&Lseis,Reales); //Util2.
				}
				if (esPilaVacia(Lsiete))
				{
				Reales = EscaleraReal(&diez,&Lsiete,Reales); //Util2.
				}
				if (esPilaVacia(Locho))
				{
				Reales = EscaleraReal(&diez,&Locho,Reales); //Util2.
				}		
			}
						clear();
	  					ImprimirJuego(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,mazo,Reales); //Util.
	  					printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	  					if (Reales == 8)
	  					{
						#ifdef Windows
						{
						printf("  .------..------..------.  .------..------..------.\n");
						printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
						printf("  | :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,007);
						printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
						printf("  `------'`------'`------'  `------'`------'`------'\n\n");
						printf("         Felicidades!! Ha ganado el juego!\n\n");
						printf("         Movimientos : %d\n",Movimientos);
						printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(1,0,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,1,0,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,1,0,0);}
						opcion = 6;
						break;
						}
						#else
						{
						printf("  .------..------..------.  .------..------..------.\n");
						printf("  |Y.--. ||O.--. ||U.--. |  |W.--. ||I.--. ||N.--. |\n");
						printf("  | :♥ : || :♦ : || :♠ : |  | :♣ : || :♥ : || :♠ : |%c\n",007);
						printf("  | '--'Y|| '--'O|| '--'U|  | '--'W|| '--'I|| '--'N|\n");
						printf("  `------'`------'`------'  `------'`------'`------'\n\n");
						printf("         Felicidades!! Ha ganado el juego!\n\n");
						printf("         Movimientos : %d\n",Movimientos);
						printf("         Puntuacion : %d\n\n",(500-Movimientos)+800); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(1,0,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,1,0,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,1,0,0);}
						opcion = 6;
						break;
						}
						#endif
	  					}  	
						if ((TF==FALSE) && (Contar(mazo) == 0))
              			{
              			#ifdef Windows
						{
						printf("  .------..------..------..------.  .------..------..------..------.\n");
						printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
						printf("  | :%c : || :%c : || :%c : || :%c : |  | :%c : || :%c : || :%c : || :%c : |%c\n",003,004,006,005,003,006,004,005,007);
						printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
						printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
						printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
						printf("          Movimientos : %d\n",Movimientos);
						printf("          Puntuacion : %d\n\n",500-Movimientos); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(0,1,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,0,1,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,0,1,0);}
						opcion = 6;
						break;
						}
						#else
						{
						printf("  .------..------..------..------.  .------..------..------..------.\n");
						printf("  |G.--. ||A.--. ||M.--. ||E.--. |  |O.--. ||V.--. ||E.--. ||R.--. |\n");
						printf("  | :♥ : || :♠ : || :♣ : || :♦ : |  | :♥ : || :♦ : || :♣ : || :♠ : |%c\n",007);
						printf("  | '--'G|| '--'A|| '--'M|| '--'E|  | '--'O|| '--'V|| '--'E|| '--'R|\n");
						printf("  `------'`------'`------'`------'  `------'`------'`------'`------'\n\n");
						printf("          Ya no quedan mas movimientos. Ha perdido el juego!\n\n");
						printf("          Movimientos : %d\n",Movimientos);
						printf("          Puntuacion : %d\n\n",500-Movimientos); 
						pause();
						clear();
						if(lvl==1)
						{Estadisticas(0,1,0,0,0,0,0);}
						if(lvl==2)
						{Estadisticas(0,0,0,1,0,0,0);}
						if(lvl==3)
						{Estadisticas(0,0,0,0,0,1,0);}
						opcion = 6;
						break;
						}
						#endif
              			}
              			if ((TF==FALSE) && (Contar(mazo) != 0))
              			{
              				Repartir(&uno,&dos,&tres,&cuatro,&cinco,&seis,&siete,&ocho,&nueve,&diez,&mazo,Reales);  //Util3.
              			}
              		}
              	
              	break;
     
        	default:
               
                	printf("\nOpción NO definida... por favor ingrese una opción valida.\n\n");
               		pause();
     			clear();
     			    
	}
	}while(opcion != 6);
	return 0;
}
