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

_nodo *InsertarEnLista(int pinta, int numero, _nodo *inicio)
{
	_nodo *nuevonodo,*aux;
	
	
	nuevonodo = (_nodo *) malloc(sizeof(_nodo));
	
	nuevonodo->numero = numero;
	
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
	
	nuevonodo->sig = NULL;
	
	if (inicio == NULL)
		inicio = nuevonodo;
	else
	{
		aux = inicio;

		while (aux->sig != NULL)
			aux = aux->sig;

		aux->sig = nuevonodo;
	}
	
	return inicio;
}// Fin Del Insertar En Lista.
