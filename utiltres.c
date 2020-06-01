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

void RepartidaInicial(_nodo **uno,_nodo **dos,_nodo **tres,_nodo **cuatro,_nodo **cinco,_nodo **seis,_nodo **siete,_nodo **ocho,_nodo **nueve,_nodo **diez,_nodo **mazo,int Reales)
{
	_nodo *auxmazo, *tope1, *tope2, *tope3, *tope4, *tope5, *tope6, *tope7, *tope8, *tope9, *tope10;
	int A;
	
	tope1 = *uno;
	tope2 = *dos;
	tope3 = *tres;
	tope4 = *cuatro;
	tope5 = *cinco;
	tope6 = *seis;
	tope7 = *siete;
	tope8 = *ocho;
	tope9 = *nueve;
	tope10 = *diez;
	auxmazo = *mazo;
	
	A = 0;
	while (A < 4)
	{
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope1 = push(1,auxmazo->numero,tope1); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope1 = push(2,auxmazo->numero,tope1);
			}
			if (auxmazo->Trebol)
			{
				tope1 = push(3,auxmazo->numero,tope1);
			}
			if (auxmazo->Corazon)
			{
				tope1 = push(4,auxmazo->numero,tope1);
			}
			tope1->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope2 = push(1,auxmazo->numero,tope2); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope2 = push(2,auxmazo->numero,tope2);
			}
			if (auxmazo->Trebol)
			{
				tope2 = push(3,auxmazo->numero,tope2);
			}
			if (auxmazo->Corazon)
			{
				tope2 = push(4,auxmazo->numero,tope2);
			}
			tope2->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope3 = push(1,auxmazo->numero,tope3); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope3 = push(2,auxmazo->numero,tope3);
			}
			if (auxmazo->Trebol)
			{
				tope3 = push(3,auxmazo->numero,tope3);
			}
			if (auxmazo->Corazon)
			{
				tope3 = push(4,auxmazo->numero,tope3);
			}
			tope3->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope4 = push(1,auxmazo->numero,tope4); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope4 = push(2,auxmazo->numero,tope4);
			}
			if (auxmazo->Trebol)
			{
				tope4 = push(3,auxmazo->numero,tope4);
			}
			if (auxmazo->Corazon)
			{
				tope4 = push(4,auxmazo->numero,tope4);
			}
			tope4->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
	
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope5 = push(1,auxmazo->numero,tope5); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope5 = push(2,auxmazo->numero,tope5);
			}
			if (auxmazo->Trebol)
			{
				tope5 = push(3,auxmazo->numero,tope5);
			}
			if (auxmazo->Corazon)
			{
				tope5 = push(4,auxmazo->numero,tope5);
			}
			tope5->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope6 = push(1,auxmazo->numero,tope6); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope6 = push(2,auxmazo->numero,tope6);
			}
			if (auxmazo->Trebol)
			{
				tope6 = push(3,auxmazo->numero,tope6);
			}
			if (auxmazo->Corazon)
			{
				tope6 = push(4,auxmazo->numero,tope6);
			}
			tope6->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope7 = push(1,auxmazo->numero,tope7); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope7 = push(2,auxmazo->numero,tope7);
			}
			if (auxmazo->Trebol)
			{
				tope7 = push(3,auxmazo->numero,tope7);
			}
			if (auxmazo->Corazon)
			{
				tope7 = push(4,auxmazo->numero,tope7);
			}
			tope7->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope8 = push(1,auxmazo->numero,tope8); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope8 = push(2,auxmazo->numero,tope8);
			}
			if (auxmazo->Trebol)
			{
				tope8 = push(3,auxmazo->numero,tope8);
			}
			if (auxmazo->Corazon)
			{
				tope8 = push(4,auxmazo->numero,tope8);
			}
			tope8->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope9 = push(1,auxmazo->numero,tope9); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope9 = push(2,auxmazo->numero,tope9);
			}
			if (auxmazo->Trebol)
			{
				tope9 = push(3,auxmazo->numero,tope9);
			}
			if (auxmazo->Corazon)
			{
				tope9 = push(4,auxmazo->numero,tope9);
			}
			tope9->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope10 = push(1,auxmazo->numero,tope10); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope10 = push(2,auxmazo->numero,tope10);
			}
			if (auxmazo->Trebol)
			{
				tope10 = push(3,auxmazo->numero,tope10);
			}
			if (auxmazo->Corazon)
			{
				tope10 = push(4,auxmazo->numero,tope10);
			}
			tope10->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
		A++;
			clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	}

	if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope1 = push(1,auxmazo->numero,tope1); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope1 = push(2,auxmazo->numero,tope1);
			}
			if (auxmazo->Trebol)
			{
				tope1 = push(3,auxmazo->numero,tope1);
			}
			if (auxmazo->Corazon)
			{
				tope1 = push(4,auxmazo->numero,tope1);
			}
			tope1->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
		clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope2 = push(1,auxmazo->numero,tope2); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope2 = push(2,auxmazo->numero,tope2);
			}
			if (auxmazo->Trebol)
			{
				tope2 = push(3,auxmazo->numero,tope2);
			}
			if (auxmazo->Corazon)
			{
				tope2 = push(4,auxmazo->numero,tope2);
			}
			tope2->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
		clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope3 = push(1,auxmazo->numero,tope3); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope3 = push(2,auxmazo->numero,tope3);
			}
			if (auxmazo->Trebol)
			{
				tope3 = push(3,auxmazo->numero,tope3);
			}
			if (auxmazo->Corazon)
			{
				tope3 = push(4,auxmazo->numero,tope3);
			}
			tope3->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
		clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
		
		if (Contar(auxmazo) >0)
		{
			if (auxmazo->Picas)
			{
				tope4 = push(1,auxmazo->numero,tope4); //Manejo de Pilas.
			}
			if (auxmazo->Diamantes)
			{
				tope4 = push(2,auxmazo->numero,tope4);
			}
			if (auxmazo->Trebol)
			{
				tope4 = push(3,auxmazo->numero,tope4);
			}
			if (auxmazo->Corazon)
			{
				tope4 = push(4,auxmazo->numero,tope4);
			}
			tope4->Visible = FALSE;
			
		}
		auxmazo = desencolar(auxmazo); // Manejo De Cola.
		clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	*uno = tope1;
	*dos = tope2;
	*tres = tope3;
	*cuatro = tope4;
	*cinco = tope5;
	*seis = tope6;
	*siete = tope7;
	*ocho = tope8;
	*nueve = tope9;
	*diez = tope10;
	*mazo = auxmazo;	
}// Fin De RepartidaInicial.

void Repartir(_nodo **uno,_nodo **dos,_nodo **tres,_nodo **cuatro,_nodo **cinco,_nodo **seis,_nodo **siete,_nodo **ocho,_nodo **nueve,_nodo **diez,_nodo **mazo, int Reales)
{
	_nodo *auxmazo, *tope1, *tope2, *tope3, *tope4, *tope5, *tope6, *tope7, *tope8, *tope9, *tope10;
	
	tope1 = *uno;
	tope2 = *dos;
	tope3 = *tres;
	tope4 = *cuatro;
	tope5 = *cinco;
	tope6 = *seis;
	tope7 = *siete;
	tope8 = *ocho;
	tope9 = *nueve;
	tope10 = *diez;
	auxmazo = *mazo;
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope1 = push(1,auxmazo->numero,tope1); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope1 = push(2,auxmazo->numero,tope1);
		}
		if (auxmazo->Trebol)
		{
			tope1 = push(3,auxmazo->numero,tope1);
		}
		if (auxmazo->Corazon)
		{
			tope1 = push(4,auxmazo->numero,tope1);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();

	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope2 = push(1,auxmazo->numero,tope2); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope2 = push(2,auxmazo->numero,tope2);
		}
		if (auxmazo->Trebol)
		{
			tope2 = push(3,auxmazo->numero,tope2);
		}
		if (auxmazo->Corazon)
		{
			tope2 = push(4,auxmazo->numero,tope2);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope3 = push(1,auxmazo->numero,tope3); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope3 = push(2,auxmazo->numero,tope3);
		}
		if (auxmazo->Trebol)
		{
			tope3 = push(3,auxmazo->numero,tope3);
		}
		if (auxmazo->Corazon)
		{
			tope3 = push(4,auxmazo->numero,tope3);
		}	
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope4 = push(1,auxmazo->numero,tope4); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope4 = push(2,auxmazo->numero,tope4);
		}
		if (auxmazo->Trebol)
		{
			tope4 = push(3,auxmazo->numero,tope4);
		}
		if (auxmazo->Corazon)
		{
			tope4 = push(4,auxmazo->numero,tope4);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope5 = push(1,auxmazo->numero,tope5); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope5 = push(2,auxmazo->numero,tope5);
		}
		if (auxmazo->Trebol)
		{
			tope5 = push(3,auxmazo->numero,tope5);
		}
		if (auxmazo->Corazon)
		{
			tope5 = push(4,auxmazo->numero,tope5);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	

	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope6 = push(1,auxmazo->numero,tope6); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope6 = push(2,auxmazo->numero,tope6);
		}
		if (auxmazo->Trebol)
		{
			tope6 = push(3,auxmazo->numero,tope6);
		}
		if (auxmazo->Corazon)
		{
			tope6 = push(4,auxmazo->numero,tope6);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();

	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope7 = push(1,auxmazo->numero,tope7); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope7 = push(2,auxmazo->numero,tope7);
		}
		if (auxmazo->Trebol)
		{
			tope7 = push(3,auxmazo->numero,tope7);
		}
		if (auxmazo->Corazon)
		{
			tope7 = push(4,auxmazo->numero,tope7);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope8 = push(1,auxmazo->numero,tope8); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope8 = push(2,auxmazo->numero,tope8);
		}
		if (auxmazo->Trebol)
		{
			tope8 = push(3,auxmazo->numero,tope8);
		}
		if (auxmazo->Corazon)
		{
			tope8 = push(4,auxmazo->numero,tope8);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope9 = push(1,auxmazo->numero,tope9); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope9 = push(2,auxmazo->numero,tope9);
		}
		if (auxmazo->Trebol)
		{
			tope9 = push(3,auxmazo->numero,tope9);
		}
		if (auxmazo->Corazon)
		{
			tope9 = push(4,auxmazo->numero,tope9);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	if (Contar(auxmazo) >0)
	{
		if (auxmazo->Picas)
		{
			tope10 = push(1,auxmazo->numero,tope10); //Manejo de Pilas.
		}
		if (auxmazo->Diamantes)
		{
			tope10 = push(2,auxmazo->numero,tope10);
		}
		if (auxmazo->Trebol)
		{
			tope10 = push(3,auxmazo->numero,tope10);
		}
		if (auxmazo->Corazon)
		{
			tope10 = push(4,auxmazo->numero,tope10);
		}
	}
	auxmazo = desencolar(auxmazo); // Manejo De Cola.
	clear();
	ImprimirJuego(tope1,tope2,tope3,tope4,tope5,tope6,tope7,tope8,tope9,tope10,auxmazo,Reales); //Util.
	printf (" 1. Mover\n");
		printf (" 2. Deshacer\n");
		printf (" 3. Repartir\n");
		printf (" 4. Jugada Automatica\n");
		printf (" 5. Guardar Partida\n");
		printf (" 6. Salir\n");
	Sleep();
	
	
	*uno = tope1;
	*dos = tope2;
	*tres = tope3;
	*cuatro = tope4;
	*cinco = tope5;
	*seis = tope6;
	*siete = tope7;
	*ocho = tope8;
	*nueve = tope9;
	*diez = tope10;
	*mazo = auxmazo;	
}// Fin De Repartir.
