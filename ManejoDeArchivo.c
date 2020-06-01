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
 
 void GuardarPartida (_nodo *uno, _nodo *dos,_nodo *tres,_nodo *cuatro,_nodo *cinco,_nodo *seis,_nodo *siete,_nodo *ocho,_nodo *nueve,_nodo *diez, _nodo *mazo, int Reales, int Movimientos, int Deshacer,int lvl) 
 {
	FILE *Archivo;
	_nodo *Aux;
	char Deshacerdos[] = "Deshacer.txt";
	char Nombre[] = "PartidaGuardada.txt";
	
	if (Deshacer == 1)
	{
	Archivo = fopen (Nombre, "w");
	}
	else
	{
	Archivo = fopen(Deshacerdos, "w");
	}
	
	
	
	Aux = uno;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = dos;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = tres;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = cuatro;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = cinco;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = seis;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = siete;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = ocho;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = nueve;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = diez;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	Aux = mazo;
	fprintf(Archivo, "%d ",Contar(Aux));
	if (Aux != NULL)
	{	
		while (Aux->sig != NULL)
		{
			fprintf(Archivo, "%d ",Aux->numero);
			fprintf(Archivo, "%d ",Aux->Picas);
			fprintf(Archivo, "%d ",Aux->Diamantes);
			fprintf(Archivo, "%d ",Aux->Trebol);
			fprintf(Archivo, "%d ",Aux->Corazon);
			fprintf(Archivo, "%d ",Aux->Visible);
			Aux = Aux->sig;
		}
		fprintf(Archivo, "%d ",Aux->numero);
		fprintf(Archivo, "%d ",Aux->Picas);
		fprintf(Archivo, "%d ",Aux->Diamantes);
		fprintf(Archivo, "%d ",Aux->Trebol);
		fprintf(Archivo, "%d ",Aux->Corazon);
		fprintf(Archivo, "%d \n",Aux->Visible);		
	}
	else
	{
		fprintf(Archivo, "\n");
	}	
	
	

	
	fprintf(Archivo, "%d \n",Reales);
	fprintf(Archivo, "%d \n",Movimientos);
	fprintf(Archivo, "%d \n",lvl);
	
	
	fclose(Archivo);

}//Fin De Guardar Partida.

_nodo *Insertar(int numero, int Picas, int Diamantes, int Trebol, int Corazon,int Visible, _nodo *inicio)
{
	_nodo *nuevonodo,*aux;
	
	
	nuevonodo = (_nodo *) malloc(sizeof(_nodo));
	
	nuevonodo->numero = numero;
	nuevonodo->Picas = Picas;
	nuevonodo->Diamantes = Diamantes;
	nuevonodo->Trebol = Trebol;
	nuevonodo->Corazon = Corazon;
	nuevonodo->Visible = Visible;
	
	
	
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

void CargarPartida (_nodo **uno, _nodo **dos,_nodo **tres,_nodo **cuatro,_nodo **cinco,_nodo **seis,_nodo **siete,_nodo **ocho,_nodo **nueve,_nodo **diez, _nodo **mazo, int *Reales, int *Movimientos,int Deshacer,int *lvl)
{
	FILE *Archivo;
	_nodo *Aux;
	char Deshacerdos[] = "Deshacer.txt";
	char Nombre[] = "PartidaGuardada.txt";
	int Cont,numero,Picas,Diamantes,Trebol,Corazon,Visible;
	
	if (Deshacer == 1)
	{
	Archivo = fopen(Nombre, "r");
	}
	else
	{
	Archivo = fopen(Deshacerdos, "r");
	}
	
	Aux = *uno;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*uno = Aux;
	
	Aux = *dos;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*dos = Aux;
	
	Aux = *tres;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*tres = Aux;
	
	Aux = *cuatro;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*cuatro = Aux;
	
	Aux = *cinco;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*cinco = Aux;
	
	
	
	Aux = *seis;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*seis = Aux;
	
	Aux = *siete;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*siete = Aux;
	
	Aux = *ocho;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*ocho = Aux;
	
	Aux = *nueve;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*nueve = Aux;
	
	Aux = *diez;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*diez = Aux;
	
	Aux = *mazo;
	fscanf(Archivo, "%d",&Cont);
		while (Cont >= 1)
		{
			fscanf(Archivo, "%d",&numero);
			fscanf(Archivo, "%d",&Picas);
			fscanf(Archivo, "%d",&Diamantes);
			fscanf(Archivo, "%d",&Trebol);
			fscanf(Archivo, "%d",&Corazon);
			fscanf(Archivo, "%d",&Visible);
			Aux = Insertar(numero,Picas,Diamantes,Trebol,Corazon,Visible,Aux);
			Cont--; 
		}
	*mazo = Aux;
	
	fscanf(Archivo, "%d",Reales);
	
	fscanf(Archivo, "%d",Movimientos);
	
	fscanf(Archivo, "%d",lvl);

	fclose(Archivo);
} //Fin De Cargar Partida.

void Estadisticas(int GF,int PF,int GM,int PM,int GD,int PD,int Ver)
{
	FILE *Archivo;
	char Estadisticas[] = "Estadisticas.txt";
	char opcion[TAM];
	int GFD, PFD, GMD, PMD, GDD, PDD,op;
	
	Archivo = fopen(Estadisticas, "r");
	
	fscanf(Archivo, "%d",&GFD);
	fscanf(Archivo, "%d",&PFD);
	fscanf(Archivo, "%d",&GMD);
	fscanf(Archivo, "%d",&PMD);
	fscanf(Archivo, "%d",&GDD);
	fscanf(Archivo, "%d",&PDD);
	
	fclose(Archivo);
	
	GFD = GFD+GF;
	PFD = PFD+PF;
	GMD = GMD+GM;
	PMD = PMD+PM;
	GDD = GDD+GD;
	PDD = PDD+PD;
	
	Archivo = fopen (Estadisticas, "w");
	
	fprintf(Archivo, "%d\n",GFD);
	fprintf(Archivo, "%d\n",PFD);
	fprintf(Archivo, "%d\n",GMD);
	fprintf(Archivo, "%d\n",PMD);
	fprintf(Archivo, "%d\n",GDD);
	fprintf(Archivo, "%d\n",PDD);
	
	fclose(Archivo);
	
	if (Ver==TRUE)
	{
		do
		{
		clear();
		printf (" \n Estadisticas \n");
		printf ("\n FACIL:\n Ganadas: %d\n Perdidas: %d\n",GFD,PFD);
		if ((GFD == 0) && (PFD == 0))
		{printf (" Porcentaje de victorias en facil : %d%c\n\n",0,37);}
		else
		{printf (" Porcentaje de victorias en facil : %d%c\n\n",((GFD*100)/(GFD+PFD)),37);}
		printf ("\n MEDIO:\n Ganadas: %d\n Perdidas: %d\n",GMD,PMD);
		if ((GMD == 0) && (PMD == 0))
		{printf (" Porcentaje de victorias en medio : %d%c\n\n",0,37);}
		else
		{printf (" Porcentaje de victorias en medio : %d%c\n\n",((GMD*100)/(GMD+PMD)),37);}
		printf ("\n DIFICIL:\n Ganadas: %d\n Perdidas: %d\n",GDD,PDD);
		if ((GDD == 0) && (PDD == 0))
		{printf (" Porcentaje de victorias en dificil : %d%c\n\n",0,37);}
		else
		{printf (" Porcentaje de victorias en dificil : %d%c\n\n",((GDD*100)/(GDD+PDD)),37);}
		printf (" 1. Reestablecer las estadisticas\n");
		printf (" 2. Volver al menu principal\n");
	 	scanf("%s",opcion);
    		fflush(stdin);      		
		op = atoi(opcion); 
		
		if (op==1)
		{
		Archivo = fopen (Estadisticas, "w");
		
		GFD = 0;
		PFD = 0;
		GMD = 0;
		PMD = 0;
		GDD = 0;
		PDD = 0;
	
		fprintf(Archivo, "%d\n",0);
		fprintf(Archivo, "%d\n",0);
		fprintf(Archivo, "%d\n",0);
		fprintf(Archivo, "%d\n",0);
		fprintf(Archivo, "%d\n",0);
		fprintf(Archivo, "%d\n",0);
		
		fclose(Archivo);
		}
		}while (op !=2) ;
		
	}
}// Fin De Estadisticas
