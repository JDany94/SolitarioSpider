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

int SecuenciaVisible(_nodo*tope)
{
	_nodo *Aux;
	int Bool;
	
	Aux=tope;
	Bool = FALSE;
	
	if (!esPilaVacia(Aux))
	{
		while (Aux ->sig != NULL)
		{
			if (Aux->Visible == TRUE)
			{
				Aux=Aux->sig;
			}
			else
			{
				Bool=TRUE;
				break;
			}
		}
		if (Aux->Visible == FALSE)
		{
			Bool=TRUE;
		}
			
	}
	return Bool;
}

int Secuencia(_nodo *tope,int fila)
{
	int Sec,cont;
	_nodo *topeA;
	if (fila!=0)
	{
	topeA = tope;
	Sec = TRUE;
	cont = (Contar(tope)-fila)+1;
	
	while ( cont > 1 )
	{ 
		if ((topeA->numero == topeA->sig->numero - 1) && (topeA->Picas==topeA->sig->Picas) && (topeA->Diamantes==topeA->sig->Diamantes) && (topeA->Trebol==topeA->sig->Trebol) && (topeA->Corazon==topeA->sig->Corazon) && (topeA->Visible==topeA->sig->Visible))
		{
			topeA = topeA->sig;
			cont--;
		}
		else 
		{
			Sec = FALSE;
			break;
		}
	}
	}
	else
	{
		Sec = FALSE;
	}	
return Sec;
}// Final De Secuencia.

int Mover (_nodo **manda, _nodo **recibe, int fila, int Movimientos)
{
    _nodo *topemanda, *toperecibe, *auxtope, *PilaAux;
    int pinta,fil,Llegada,Act;
    PilaAux = (_nodo *) malloc(sizeof(_nodo));
    PilaAux=NULL;    
    auxtope = *manda;
    topemanda = *manda;
    toperecibe = *recibe;
    if (!esPilaVacia(topemanda))
    {
    if (fila == Contar(topemanda)) // Si pasas una sola carta.
    {
    	if(!esPilaVacia(toperecibe))
    	{
    		if (toperecibe->numero == topemanda->numero+1)
    		{
	    		if (topemanda->Picas)
    			{pinta=1;}
    			if (topemanda->Diamantes)
    			{pinta=2;}
    			if (topemanda->Trebol)
    			{pinta=3;}
    			if (topemanda->Corazon)
    			{pinta=4;}
    			Movimientos++;
    			toperecibe = push (pinta,topemanda->numero,toperecibe);
    			topemanda = pop (topemanda);
    			if (!esPilaVacia(topemanda))
    			{
    				if (topemanda->Visible == FALSE)
    				{
    					topemanda->Visible = TRUE;
    				}
    			}
    		}
    		else
    		{
    			printf("\n Movimiento no valido\n\n");
				printf(" Solo puede colocar una carta sobre otra si\n es la siguiente de la secuencia. El orden es:\n K,Q,J,10,9,8,7,6,5,4,3,2,A.\n\n");
    			pause();
    			clear();
    		}
    	}
    	else
    	{
    		if (topemanda->Picas)
    		{pinta=1;}
    		if (topemanda->Diamantes)
    		{pinta=2;}
    		if (topemanda->Trebol)
    		{pinta=3;}
    		if (topemanda->Corazon)
    		{pinta=4;}
    		Movimientos++;
    		toperecibe = push (pinta,topemanda->numero,toperecibe);
    		topemanda = pop (topemanda);
    		if (!esPilaVacia(topemanda))
    		{
    			if (topemanda->Visible == FALSE)
    			{
				topemanda->Visible = TRUE;
			}
		}
    	}
    }
    else                      // Si pasas mas de una carta.
    {
    if ( Secuencia(topemanda,fila) )
    {
    	fil = 1;
    	while ( fil < (Contar(topemanda)-fila)+1 )
    	{
    		auxtope = auxtope->sig;
    		fil++;
    	}
    	if (!esPilaVacia(toperecibe))
    	{
    		if (auxtope->numero == toperecibe->numero-1)
    		{
    			Act = 0;
    			Llegada = (Contar(topemanda)-fila)+1;
    			while ( Act < Llegada  )
    			{
    				if (topemanda->Picas)
    				{pinta=1;}
    				if (topemanda->Diamantes)
    				{pinta=2;}
    				if (topemanda->Trebol)
    				{pinta=3;}
    				if (topemanda->Corazon)
	    			{pinta=4;}
	    		
    				PilaAux = push (pinta,topemanda->numero,PilaAux);
    				topemanda = pop (topemanda);
    				Act++;
    			}
    			if (!esPilaVacia(topemanda))
    			{
    				if (topemanda->Visible == FALSE)
    				{
   					topemanda->Visible = TRUE;
   				}
   			}
    			while (!esPilaVacia(PilaAux))
    			{
    				if (PilaAux->Picas)
    				{pinta=1;}
    				if (PilaAux->Diamantes)
    				{pinta=2;}
    				if (PilaAux->Trebol)
    				{pinta=3;}
    				if (PilaAux->Corazon)
    				{pinta=4;}
    				toperecibe = push (pinta,PilaAux->numero,toperecibe);
    				PilaAux = pop(PilaAux);
    	   		}
    	   		Movimientos++;
    		}
    		else
    		{
    			printf("\n Movimiento no valido\n\n");
				printf(" Solo puede colocar una carta sobre otra si\n es la siguiente de la secuencia. El orden es:\n K,Q,J,10,9,8,7,6,5,4,3,2,A.\n\n");
    			pause();
    			clear();
    		}
    	}
    	else
    	{
    	if ( auxtope->Visible )
    	{
    		Act = 0;
    		Llegada = (Contar(topemanda)-fila)+1;
    		while ( Act < Llegada  )
    		{
    			if (topemanda->Picas)
    			{pinta=1;}
    			if (topemanda->Diamantes)
    			{pinta=2;}
    			if (topemanda->Trebol)
    			{pinta=3;}
    			if (topemanda->Corazon)
    			{pinta=4;}
    	
    			PilaAux = push (pinta,topemanda->numero,PilaAux);
    			topemanda = pop (topemanda);
    			Act++;
    		}
    		if (!esPilaVacia(topemanda))
    		{
    			if (topemanda->Visible == FALSE)
    			{
   				topemanda->Visible = TRUE;
   			}
   		}
    		while (!esPilaVacia(PilaAux))
    		{
    			if (PilaAux->Picas)
    			{pinta=1;}
    			if (PilaAux->Diamantes)
    			{pinta=2;}
    			if (PilaAux->Trebol)
    			{pinta=3;}
    			if (PilaAux->Corazon)
    			{pinta=4;}
    			toperecibe = push (pinta,PilaAux->numero,toperecibe);
    			PilaAux = pop(PilaAux);
    		}
    		Movimientos++;
    	
    	}
    	else
    	{
    		printf("\n Movimiento no valido\n\n");
			printf(" Solo puede colocar una carta sobre otra si\n es la siguiente de la secuencia. El orden es:\n K,Q,J,10,9,8,7,6,5,4,3,2,A.\n\n");
    		pause();
    		clear();
    	}
    	}
    }
    else
    {
    	printf("\n Movimiento no valido\n\n");
		printf(" Solo puede mover mas de una carta a la vez\n si todas estan en el orden descendente correcto\n y son del mismo palo.\n\n");
    	pause();
    	clear();
    }
    }
    }
    else
    {
    	printf("\n Movimiento no valido\n\n");
		printf(" Solo puede colocar una carta sobre otra si\n es la siguiente de la secuencia. El orden es:\n K,Q,J,10,9,8,7,6,5,4,3,2,A.\n\n");
    	pause();
    	clear();
    }
    *manda = topemanda;
    *recibe = toperecibe;
    return Movimientos;
}//Fin De Mover.

int SecReal(_nodo *Pila)
{
	int Sec,cont;
	_nodo *PilaA;

	PilaA = Pila;
	Sec = FALSE;
	cont = 13;
	if (Contar(PilaA) >=13) 
	{
		while ( cont > 1 )
		{ 
			if ((PilaA->numero == PilaA->sig->numero - 1) && (PilaA->Picas==PilaA->sig->Picas) && (PilaA->Corazon==PilaA->sig->Corazon) && (PilaA->Trebol==PilaA->sig->Trebol) && (PilaA->Diamantes==PilaA->sig->Diamantes))
			{
				PilaA = PilaA->sig;
				cont--;
				Sec = TRUE;
			}
			else 
			{
				Sec = FALSE;
				break;
			}
		}
	}	
return Sec;
}// Fin De SecReal.

int EscaleraReal (_nodo **Pila, _nodo **Lista, int Reales)
{
	_nodo *PilaA, *ListaA;
	int Rey,pinta;
	Rey = 0;
	PilaA = *Pila;
	ListaA = *Lista;
	if (SecReal(PilaA))
	{
		Reales++;
		while ( Rey < 13)
		{
			if (PilaA->Picas)
    			{pinta=1;}
    			if (PilaA->Diamantes)
    			{pinta=2;}
    			if (PilaA->Trebol)
    			{pinta=3;}
    			if (PilaA->Corazon)
    			{pinta=4;}
    			ListaA = InsertarEnLista(pinta,PilaA->numero,ListaA);
    			PilaA = pop(PilaA);		
    			Rey++;
		} 
		if (!esPilaVacia(PilaA))
		{
			if (PilaA->Visible == FALSE)
			{
				PilaA->Visible = TRUE;
			}
		}
	}
	*Pila = PilaA;
	*Lista = ListaA;
	return Reales;
}// Fin De Escalera Real.
