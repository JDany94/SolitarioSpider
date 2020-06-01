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

_nodo *push(int pinta,int numeroAInsertar, _nodo *tope)
{
    _nodo *nuevonodo;
    
    nuevonodo = (_nodo *) malloc(sizeof(_nodo));
    
    nuevonodo->numero = numeroAInsertar;
    	if (pinta == 1)
	{
		nuevonodo->Picas = TRUE;
		nuevonodo->Diamantes = FALSE;
		nuevonodo->Trebol = FALSE;
		nuevonodo->Corazon = FALSE;
		nuevonodo->Visible = TRUE;
	}
	if (pinta == 2)
	{
		nuevonodo->Picas = FALSE;
		nuevonodo->Diamantes = TRUE;
		nuevonodo->Trebol = FALSE;
		nuevonodo->Corazon = FALSE;
		nuevonodo->Visible = TRUE;	
	}
	if (pinta == 3)
	{
		nuevonodo->Picas = FALSE;
		nuevonodo->Diamantes = FALSE;
		nuevonodo->Trebol = TRUE;
		nuevonodo->Corazon = FALSE;
		nuevonodo->Visible = TRUE;	
	}
	if (pinta == 4)
	{
		nuevonodo->Picas = FALSE;
		nuevonodo->Diamantes = FALSE;
		nuevonodo->Trebol = FALSE;
		nuevonodo->Corazon = TRUE;
		nuevonodo->Visible = TRUE;
	}
	nuevonodo->sig = tope;
    	tope = nuevonodo;
    return tope;
}// Fin Del Push.

int esPilaVacia(_nodo *tope)
{
    if (tope == NULL)
        return TRUE;
    
    return FALSE;
}//Fin De Pila Vacia.

_nodo *pop(_nodo *tope)
{
    _nodo *nodoABorrar;
   
    if (!esPilaVacia(tope))
    {
    	if (tope->sig == NULL)
    	{
    		nodoABorrar = tope;
        	tope = NULL;
        	free (nodoABorrar);	
    	}
    	else
    	{
        	nodoABorrar = tope;
        	tope = tope->sig;
        	free (nodoABorrar);
        }
     }
    return tope;
}// Fin Del Pop.
