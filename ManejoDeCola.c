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


_nodo *LlenarMazo(_nodo *mazo, int Palos)
{
	int Palo, NumCarta;
  
 	if (Palos == 1)
  	{
  		Palo = 1;
  		while (Contar(mazo) < 104)       //Util.
		{
			NumCarta=Random(1,13);  //Util.
	 		while (NumCarta == 0)
  			{
  				NumCarta=Random(1,13);
  	 		}
			if (CuantosHay(NumCarta,Palo,mazo) < 8)  //Util.
			{
				mazo = encolar(Palo,NumCarta, mazo);  //ManejoDeCola.
			}
		}
  	}
  
  	
  	if ( Palos == 2)
  	{
 		while (Contar(mazo) < 104)  //Util.
  		{
  			NumCarta=Random(1,13);  //Util.
  			Palo = Random(1,2);
   			while (NumCarta == 0 || Palo == 0)
  			{
  				NumCarta=Random(1,13);
  				Palo = Random(1,2);
  			}
  			if (CuantosHay(NumCarta,Palo,mazo) < 4)  //Util.
  			{
  				mazo = encolar(Palo,NumCarta,mazo);   //ManejoDeCola.
  			}
  		}
  	}
  
  
  	if (Palos == 4)
 	{
   		while (Contar(mazo) < 104)  //Util.
  		{
  			NumCarta=Random(1,13);   //Util.
  			Palo = Random(1,4);
  			while (NumCarta == 0 || Palo == 0)
  			{
  				NumCarta=Random(1,13);
  				Palo = Random(1,4);
  			}
  			if (CuantosHay(NumCarta,Palo,mazo) < 2)  //Util.
  			{
  				mazo = encolar(Palo,NumCarta,mazo);  //ManejoDeCola.
   			}
  		}
  	}
	return mazo;
} // Fin de LlenarMazo.


_nodo *encolar(int pinta, int numero, _nodo *inicio)
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
} // Fin De encolar.

_nodo *desencolar(_nodo *inicio)
{
	_nodo *aux;
	aux = inicio;
	inicio = inicio->sig;
	free(aux);
	return inicio;
} // Fin De Desencolar.
