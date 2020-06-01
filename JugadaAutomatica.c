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

void Automatica(_nodo **uno,_nodo **dos,_nodo **tres,_nodo **cuatro,_nodo **cinco,_nodo **seis,_nodo **siete,_nodo **ocho,_nodo **nueve,_nodo **diez, int *TF,int *Movimientos)
{
	int AF,movimientos,cont;
	_nodo *unodd,*unod,*dosd,*tresd,*cuatrod,*cincod,*seisd,*sieted,*ochod,*nueved,*diezd,*dosdd, *tresdd,*cuatrodd,*cincodd,*seisdd,*sietedd,*ochodd,*nuevedd,*diezdd;
	
	*TF = FALSE;
	unodd=*uno;
	dosdd=*dos;
	tresdd=*tres;
	cuatrodd=*cuatro;
	cincodd=*cinco;
	seisdd=*seis;
	sietedd=*siete;
	ochodd=*ocho;
	nuevedd=*nueve;
	diezdd=*diez;
	unod=*uno;
	dosd=*dos;
	tresd=*tres;
	cuatrod=*cuatro;
	cincod=*cinco;
	seisd=*seis;
	sieted=*siete;
	ochod=*ocho;
	nueved=*nueve;
	diezd=*diez;
	movimientos = *Movimientos;

	//UNO
	if (!esPilaVacia(unod))
	{
		cont=Contar(unod)-1;
		while (Secuencia (unod,cont))
		{
			cont--;
			unod = unod->sig;
		}
		AF = cont+1;		
		
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (unod->numero == dosdd->numero-1))
			{
				 *Movimientos = Mover(&unodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (unod->numero == tresdd->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (unod->numero == cuatrodd->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (unod->numero == cincodd->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (unod->numero == seisdd->numero-1))
			{
				 *Movimientos = Mover(&unodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (unod->numero == sietedd->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (unod->numero == ochodd->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (unod->numero == nueved->numero-1))
			{
				 
				 *Movimientos = Mover(&unodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (unod->numero == diezdd->numero-1))
			{
				 *Movimientos = Mover(&unodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	//DOS
	if (*TF == FALSE) 
			{
	if (!esPilaVacia(dosd))
	{
		cont=Contar(dosd)-1;
		while (Secuencia (dosd,cont))
		{
			cont--;
			dosd = dosd->sig;
		}
		AF = cont+1;
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (dosd->numero == unodd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (dosd->numero == tresdd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (dosd->numero == cuatrodd->numero-1))
			{				
				 *Movimientos = Mover(&dosdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (dosd->numero == cincodd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (dosd->numero == seisdd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (dosd->numero == sietedd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (dosd->numero == ochodd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (dosd->numero == nuevedd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (dosd->numero == diezdd->numero-1))
			{				 
				 *Movimientos = Mover(&dosdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//TRES
	if (!esPilaVacia(tresd))
	{
		cont=Contar(tresd)-1;
		while (Secuencia (tresd,cont))
		{
			cont--;
			tresd = tresd->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (tresd->numero == unodd->numero-1))
			{
				 *Movimientos = Mover(&tresdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (tresd->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (tresd->numero == cuatrodd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (tresd->numero == cincodd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (tresd->numero == seisdd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (tresd->numero == sietedd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (tresd->numero == ochodd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (tresd->numero == nuevedd->numero-1))
			{
				 
				 *Movimientos = Mover(&tresdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (tresd->numero == diezdd->numero-1))
			{
				
				 *Movimientos = Mover(&tresdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//CUATRO
	if (!esPilaVacia(cuatrod))
	{
		cont=Contar(cuatrod)-1;
		while (Secuencia (cuatrod,cont))
		{
			cont--;
			cuatrod = cuatrod->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == unodd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == tresdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == cincodd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == seisdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cuatrod->numero == sietedd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == ochodd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cuatrod->numero == nuevedd->numero-1))
			{
				
				 *Movimientos = Mover(&cuatrodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == diezdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cuatrodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//CINCO
	if (!esPilaVacia(cincod))
	{
		cont=Contar(cincod)-1;
		while (Secuencia (cincod,cont))
		{
			cont--;
			cincod = cincod->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cincod->numero == unodd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cincod->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cincod->numero == tresdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (cincod->numero == cuatrodd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cincod->numero == seisdd->numero-1))
			{
				
				 *Movimientos = Mover(&cincodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cincod->numero == sietedd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cincod->numero == ochodd->numero-1))
			{
				
				 *Movimientos = Mover(&cincodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cincod->numero == nuevedd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cincod->numero == diezdd->numero-1))
			{
				 
				 *Movimientos = Mover(&cincodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SEIS
	if (!esPilaVacia(seisd))
	{
		cont=Contar(seisd)-1;
		while (Secuencia (seisd,cont))
		{
			cont--;
			seisd = seisd->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (seisd->numero == unodd->numero-1))
			{
				
				 *Movimientos = Mover(&seisdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (seisd->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&seisdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (seisd->numero == tresdd->numero-1))
			{
				 
				 *Movimientos = Mover(&seisdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (seisd->numero == cuatrodd->numero-1))
			{
				
				 *Movimientos = Mover(&seisdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (seisd->numero == cincodd->numero-1))
			{
			
				 *Movimientos = Mover(&seisdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (seisd->numero == sietedd->numero-1))
			{
			
				 *Movimientos = Mover(&seisdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (seisd->numero == ochodd->numero-1))
			{
				 
				 *Movimientos = Mover(&seisdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (seisd->numero == nuevedd->numero-1))
			{
			
				 *Movimientos = Mover(&seisdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (seisd->numero == diezdd->numero-1))
			{
				 
				 *Movimientos = Mover(&seisdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SIETE
	if (!esPilaVacia(sieted))
	{
		cont=Contar(sieted)-1;
		while (Secuencia (sieted,cont))
		{
			cont--;
			sieted = sieted->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (sieted->numero == unodd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (sieted->numero == dosdd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (sieted->numero == tresdd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (sieted->numero == cuatrodd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (sieted->numero == cincodd->numero-1))
			{
				 
				 *Movimientos = Mover(&sietedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (sieted->numero == seisdd->numero-1))
			{
				 
				 *Movimientos = Mover(&sietedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (sieted->numero == ochodd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (sieted->numero == nuevedd->numero-1))
			{
				
				 *Movimientos = Mover(&sietedd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (sieted->numero == diezdd->numero-1))
			{
				 
				 *Movimientos = Mover(&sietedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//OCHO 
	if (!esPilaVacia(ochod))
	{
		cont=Contar(ochod)-1;
		while (Secuencia (ochod,cont))
		{
			cont--;
			ochod = ochod->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (ochod->numero == unodd->numero-1))
			{
				
				 *Movimientos = Mover(&ochodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (ochod->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&ochodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (ochod->numero == tresdd->numero-1))
			{
				
				 *Movimientos = Mover(&ochodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (ochod->numero == cuatrodd->numero-1))
			{
				
				 *Movimientos = Mover(&ochodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (ochod->numero == cincodd->numero-1))
			{
			
				 *Movimientos = Mover(&ochodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (ochod->numero == seisdd->numero-1))
			{
				 *Movimientos = Mover(&ochodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (ochod->numero == sietedd->numero-1))
			{
				 
				 *Movimientos = Mover(&ochodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (ochod->numero == nuevedd->numero-1))
			{
				
				 *Movimientos = Mover(&ochodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (ochod->numero == diezdd->numero-1))
			{
				 
				 *Movimientos = Mover(&ochodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	//NUEVE
	if (!esPilaVacia(nueved))
	{
		cont=Contar(nueved)-1;
		while (Secuencia (nueved,cont))
		{
			cont--;
			nueved = nueved->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (nueved->numero == unodd->numero-1))
			{
				
				 *Movimientos = Mover(&nuevedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (nueved->numero == dosdd->numero-1))
			{
			
				 *Movimientos = Mover(&nuevedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (nueved->numero == tresdd->numero-1))
			{
				 
				 *Movimientos = Mover(&nuevedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (nueved->numero == cuatrodd->numero-1))
			{
				
				 *Movimientos = Mover(&nuevedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (nueved->numero == cincodd->numero-1))
			{
		
				 *Movimientos = Mover(&nuevedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (nueved->numero == seisdd->numero-1))
			{
				 
				 *Movimientos = Mover(&nuevedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (nueved->numero == sietedd->numero-1))
			{
				 *Movimientos = Mover(&nuevedd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (nueved->numero == ochodd->numero-1))
			{
				
				 *Movimientos = Mover(&nuevedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (nueved->numero == diezdd->numero-1))
			{
				
				 *Movimientos = Mover(&nuevedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	if (*TF == FALSE) 
			{
	// DIEZ
	if (!esPilaVacia(diezd))
	{
		cont=Contar(diezd)-1;
		while (Secuencia (diezd,cont))
		{
			cont--;
			diezd = diezd->sig;
		}
		AF = cont+1;	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (diezd->numero == unodd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (diezd->numero == dosdd->numero-1))
			{
				 
				 *Movimientos = Mover(&diezdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (diezd->numero == tresdd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (diezd->numero == cuatrodd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (diezd->numero == cincodd->numero-1))
			{
			
				 *Movimientos = Mover(&diezdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (diezd->numero == seisdd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (diezd->numero == sietedd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (diezd->numero == ochodd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (diezd->numero == nuevedd->numero-1))
			{
				
				 *Movimientos = Mover(&diezdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}
		}
	}
	}
	*uno=unodd;
	*dos=dosdd;
	*tres=tresdd;
	*cuatro=cuatrodd;
	*cinco=cincodd;
	*seis=seisdd;
	*siete=sietedd;
	*ocho=ochodd;
	*nueve=nuevedd;
	*diez=diezdd;
}

void AutomaticaVacios(_nodo **uno,_nodo **dos,_nodo **tres,_nodo **cuatro,_nodo **cinco,_nodo **seis,_nodo **siete,_nodo **ocho,_nodo **nueve,_nodo **diez, int *TF,int *Movimientos)
{
	int AF,movimientos,cont;
	_nodo *unodd,*unod,*dosd,*tresd,*cuatrod,*cincod,*seisd,*sieted,*ochod,*nueved,*diezd,*dosdd, *tresdd,*cuatrodd,*cincodd,*seisdd,*sietedd,*ochodd,*nuevedd,*diezdd;
	
	*TF = FALSE;
	unodd=*uno;
	dosdd=*dos;
	tresdd=*tres;
	cuatrodd=*cuatro;
	cincodd=*cinco;
	seisdd=*seis;
	sietedd=*siete;
	ochodd=*ocho;
	nuevedd=*nueve;
	diezdd=*diez;
	unod=*uno;
	dosd=*dos;
	tresd=*tres;
	cuatrod=*cuatro;
	cincod=*cinco;
	seisd=*seis;
	sieted=*siete;
	ochod=*ocho;
	nueved=*nueve;
	diezd=*diez;
	movimientos = *Movimientos;

	//UNO
	if (esPilaVacia(unod))
	{
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}		
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		
	}
	if (*TF == FALSE)
	{
	//DOS
	if (esPilaVacia(dosd))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	
	//TRES
	if (esPilaVacia(tresd))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//CUATRO
	if (esPilaVacia(cuatrod))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		
	}
	}
	if (*TF == FALSE) 
			{
	//CINCO
	if (esPilaVacia(cincod))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&cincodd,AF,movimientos); //Util2.ASDFASGGASFD
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SEIS
	if (esPilaVacia(seisd))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SIETE
	if (esPilaVacia(sieted))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//OCHO 
	if (esPilaVacia(ochod))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//NUEVE
	if (esPilaVacia(nueved))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(diezd))&&(SecuenciaVisible(diezd)))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	// DIEZ
	if (esPilaVacia(diezd))
	{
		if ((!esPilaVacia(unod))&&(SecuenciaVisible(unod)))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(dosd))&&(SecuenciaVisible(dosd)))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(tresd))&&(SecuenciaVisible(tresd)))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cuatrod))&&(SecuenciaVisible(cuatrod)))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(cincod))&&(SecuenciaVisible(cincod)))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(seisd))&&(SecuenciaVisible(seisd)))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(sieted))&&(SecuenciaVisible(sieted)))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(ochod))&&(SecuenciaVisible(ochod)))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if ((!esPilaVacia(nueved))&&(SecuenciaVisible(nueved)))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF==FALSE)
	{
	//UNO
	if (esPilaVacia(unod))
	{
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1; 
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=(Contar(tresd))-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}		
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&unodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		
	}
	}
	if (*TF == FALSE) 
			{
	//DOS
	if (esPilaVacia(dosd))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&dosdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//TRES
	if (esPilaVacia(tresd))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&tresdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//CUATRO
	if (esPilaVacia(cuatrod))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&cuatrodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}		
	}
	}
	if (*TF == FALSE) 
			{
	//CINCO
	if (esPilaVacia(cincod))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&cincodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SEIS
	if (esPilaVacia(seisd))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&seisdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//SIETE
	if (esPilaVacia(sieted))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&sietedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//OCHO 
	if (esPilaVacia(ochod))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&ochodd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	//NUEVE
	if (esPilaVacia(nueved))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(diezd))
		{
			cont=Contar(diezd)-1;
			while (Secuencia (diezd,cont))
			{
				cont--;
				diezd = diezd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&diezdd,&nuevedd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	if (*TF == FALSE) 
			{
	// DIEZ
	if (esPilaVacia(diezd))
	{
		if (!esPilaVacia(unod))
		{
			cont=Contar(unod)-1;
			while (Secuencia (unod,cont))
			{
				cont--;
				unod = unod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&unodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(dosd))
		{
			cont=Contar(dosd)-1;
			while (Secuencia (dosd,cont))
			{
				cont--;
				dosd = dosd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&dosdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(tresd))
		{
			cont=Contar(tresd)-1;
			while (Secuencia (tresd,cont))
			{
				cont--;
				tresd = tresd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&tresdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cuatrod))
		{
			cont=Contar(cuatrod)-1;
			while (Secuencia (cuatrod,cont))
			{
				cont--;
				cuatrod = cuatrod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cuatrodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(cincod))
		{
			cont=Contar(cincod)-1;
			while (Secuencia (cincod,cont))
			{
				cont--;
				cincod = cincod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&cincodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(seisd))
		{
			cont=Contar(seisd)-1;
			while (Secuencia (seisd,cont))
			{
				cont--;
				seisd = seisd->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&seisdd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(sieted))
		{
			cont=Contar(sieted)-1;
			while (Secuencia (sieted,cont))
			{
				cont--;
				sieted = sieted->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&sietedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(ochod))
		{
			cont=Contar(ochod)-1;
			while (Secuencia (ochod,cont))
			{
				cont--;
				ochod = ochod->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&ochodd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
		if (!esPilaVacia(nueved))
		{
			cont=Contar(nueved)-1;
			while (Secuencia (nueved,cont))
			{
				cont--;
				nueved = nueved->sig;
			}
			AF = cont+1;	
			if (*TF == FALSE) 
			{
				 *Movimientos = Mover(&nuevedd,&diezdd,AF,movimientos); //Util2.
				 *TF = TRUE; 
			}	
		}
	}
	}
	*uno=unodd;
	*dos=dosdd;
	*tres=tresdd;
	*cuatro=cuatrodd;
	*cinco=cincodd;
	*seis=seisdd;
	*siete=sietedd;
	*ocho=ochodd;
	*nueve=nuevedd;
	*diez=diezdd;
}

void AutomaticaMover(_nodo *uno,_nodo *dos,_nodo *tres,_nodo *cuatro,_nodo *cinco,_nodo *seis,_nodo *siete,_nodo *ocho,_nodo *nueve,_nodo *diez, int *TF)
{
	int cont;
	_nodo *unodd,*unod,*dosd,*tresd,*cuatrod,*cincod,*seisd,*sieted,*ochod,*nueved,*diezd,*dosdd, *tresdd,*cuatrodd,*cincodd,*seisdd,*sietedd,*ochodd,*nuevedd,*diezdd;
	
	*TF = FALSE;
	unodd=uno;
	dosdd=dos;
	tresdd=tres;
	cuatrodd=cuatro;
	cincodd=cinco;
	seisdd=seis;
	sietedd=siete;
	ochodd=ocho;
	nuevedd=nueve;
	diezdd=diez;
	unod=uno;
	dosd=dos;
	tresd=tres;
	cuatrod=cuatro;
	cincod=cinco;
	seisd=seis;
	sieted=siete;
	ochod=ocho;
	nueved=nueve;
	diezd=diez;
	//UNO
	if (!esPilaVacia(unod))
	{		
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (unod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (unod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (unod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (unod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (unod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (unod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (unod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (unod->numero == nueved->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (unod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
	if (*TF == FALSE) 
			{
	//DOS
	if (!esPilaVacia(dosd))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (dosd->numero == unodd->numero-1))
			{				 
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (dosd->numero == tresdd->numero-1))
			{				 
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (dosd->numero == cuatrodd->numero-1))
			{				
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (dosd->numero == cincodd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (dosd->numero == seisdd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (dosd->numero == sietedd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (dosd->numero == ochodd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (dosd->numero == nuevedd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (dosd->numero == diezdd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
	}
	}
if (*TF == FALSE) 
			{	//TRES
	if (!esPilaVacia(tresd))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (tresd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (tresd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (tresd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (tresd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (tresd->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (tresd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (tresd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (tresd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (tresd->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//CUATRO
	if (!esPilaVacia(cuatrod))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cuatrod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cuatrod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//CINCO
	if (!esPilaVacia(cincod))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cincod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cincod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cincod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (cincod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cincod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cincod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cincod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cincod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cincod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//SEIS
	if (!esPilaVacia(seisd))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (seisd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (seisd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (seisd->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (seisd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (seisd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (seisd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (seisd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (seisd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (seisd->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//SIETE
	if (!esPilaVacia(sieted))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (sieted->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (sieted->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (sieted->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (sieted->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (sieted->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (sieted->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (sieted->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (sieted->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (sieted->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//OCHO 
	if (!esPilaVacia(ochod))
	{		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (ochod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (ochod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}		
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (ochod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (ochod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (ochod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (ochod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (ochod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (ochod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (ochod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//NUEVE
	if (!esPilaVacia(nueved))
	{
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (nueved->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (nueved->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (nueved->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (nueved->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (nueved->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (nueved->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (nueved->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (nueved->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (nueved->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	// DIEZ
	if (!esPilaVacia(diezd))
	{
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (diezd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (diezd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (diezd->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (diezd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (diezd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (diezd->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (diezd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (diezd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (diezd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}	
}
if (*TF == FALSE) 
			{
	//UNO
	if (!esPilaVacia(unod))
	{
		cont=Contar(unod)-1;
		while (Secuencia (unod,cont))
		{
			cont--;
			unod = unod->sig;
		}				
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (unod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (unod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (unod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (unod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (unod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (unod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (unod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (unod->numero == nueved->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (unod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//DOS
	if (!esPilaVacia(dosd))
	{
		cont=Contar(dosd)-1;
		while (Secuencia (dosd,cont))
		{
			cont--;
			dosd = dosd->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (dosd->numero == unodd->numero-1))
			{				 
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (dosd->numero == tresdd->numero-1))
			{				 
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (dosd->numero == cuatrodd->numero-1))
			{				
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (dosd->numero == cincodd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (dosd->numero == seisdd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (dosd->numero == sietedd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (dosd->numero == ochodd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (dosd->numero == nuevedd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (dosd->numero == diezdd->numero-1))
			{				 
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//TRES
	if (!esPilaVacia(tresd))
	{
		cont=Contar(tresd)-1;
		while (Secuencia (tresd,cont))
		{
			cont--;
			tresd = tresd->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (tresd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (tresd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (tresd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (tresd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (tresd->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (tresd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (tresd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (tresd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (tresd->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//CUATRO
	if (!esPilaVacia(cuatrod))
	{
		cont=Contar(cuatrod)-1;
		while (Secuencia (cuatrod,cont))
		{
			cont--;
			cuatrod = cuatrod->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cuatrod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cuatrod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cuatrod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cuatrod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//CINCO
	if (!esPilaVacia(cincod))
	{
		cont=Contar(cincod)-1;
		while (Secuencia (cincod,cont))
		{
			cont--;
			cincod = cincod->sig;
		}	
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (cincod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (cincod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (cincod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (cincod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (cincod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (cincod->numero == sietedd->numero-1))
			{
		        *TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (cincod->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (cincod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (cincod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//SEIS
	if (!esPilaVacia(seisd))
	{
		cont=Contar(seisd)-1;
		while (Secuencia (seisd,cont))
		{
			cont--;
			seisd = seisd->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (seisd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (seisd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (seisd->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (seisd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (seisd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (seisd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (seisd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (seisd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (seisd->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//SIETE
	if (!esPilaVacia(sieted))
	{
		cont=Contar(sieted)-1;
		while (Secuencia (sieted,cont))
		{
			cont--;
			sieted = sieted->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (sieted->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (sieted->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (sieted->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (sieted->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (sieted->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (sieted->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (sieted->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (sieted->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (sieted->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//OCHO 
	if (!esPilaVacia(ochod))
	{
		cont=Contar(ochod)-1;
		while (Secuencia (ochod,cont))
		{
			cont--;
			ochod = ochod->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (ochod->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (ochod->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (ochod->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (ochod->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (ochod->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (ochod->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (ochod->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (ochod->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (ochod->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	//NUEVE
	if (!esPilaVacia(nueved))
	{
		cont=Contar(nueved)-1;
		while (Secuencia (nueved,cont))
		{
			cont--;
			nueved = nueved->sig;
		}		
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (nueved->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (nueved->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (nueved->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (nueved->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (nueved->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (nueved->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}		
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (nueved->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (nueved->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(diezd))
		{
			if ((*TF == FALSE) && (nueved->numero == diezdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
}
if (*TF == FALSE) 
			{
	// DIEZ
	if (!esPilaVacia(diezd))
	{
		cont=Contar(diezd)-1;
		while (Secuencia (diezd,cont))
		{
			cont--;
			diezd = diezd->sig;
		}
		if (!esPilaVacia(unod))
		{
			if ((*TF == FALSE) && (diezd->numero == unodd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(dosd))
		{
			if ((*TF == FALSE) && (diezd->numero == dosdd->numero-1))
			{
			*TF = TRUE; 
			}			
		}
		if (!esPilaVacia(tresd))
		{
			if ((*TF == FALSE) && (diezd->numero == tresdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cuatrod))
		{
			if ((*TF == FALSE) && (diezd->numero == cuatrodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(cincod))
		{
			if ((*TF == FALSE) && (diezd->numero == cincodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(seisd))
		{
			if ((*TF == FALSE) && (diezd->numero == seisdd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(sieted))
		{
			if ((*TF == FALSE) && (diezd->numero == sietedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(ochod))
		{
			if ((*TF == FALSE) && (diezd->numero == ochodd->numero-1))
			{
			*TF = TRUE; 
			}
		}
		if (!esPilaVacia(nueved))
		{
			if ((*TF == FALSE) && (diezd->numero == nuevedd->numero-1))
			{
			*TF = TRUE; 
			}
		}
	}
	unod=uno;
	dosd=dos;
	tresd=tres;
	cuatrod=cuatro;
	cincod=cinco;
	seisd=seis;
	sieted=siete;
	ochod=ocho;
	nueved=nueve;
	diezd=diez;
	if (esPilaVacia(unod))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(dosd))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(tresd))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(cuatrod))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(cincod))
	{
	*TF = TRUE;
	}
	if  (esPilaVacia(seisd))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(sieted))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(ochod))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(nueved))
	{
	*TF = TRUE;
	}
	if (esPilaVacia(diezd))
	{
	*TF = TRUE;
	}
}
}
