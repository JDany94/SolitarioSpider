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

void Sleep()
{
 int i,a,b;
 i=a=b=0;
 
  while (i < 9849290)
 {
 	while (a < 9709000)
 	{
 		while (b < 99999)
 		{
 			b++;
		}
 	a++;
	}	
 i++;
}
}

void SleepDos()
{
 int i,a,b;
 i=a=b=0;
 
  while (i < 98439290)
 {
 	while (a < 9709000)
 	{
 		while (b < 99999)
 		{
 			b++;
		}
 	a++;
	}	
 i++;
}
}

void Imprimir(_nodo *lista)
{
	_nodo *aux;
	aux = lista;

	while (aux != NULL)
	{
		printf (" - %d - ",aux->numero);
		aux = aux->sig;
	}
	printf("\n");
}//Fin Del Imprimir.

int Contar (_nodo *inicio)
{
	
	int Total;
	Total = 0;
	
	if (inicio != NULL)
	{
		while (inicio!=NULL) 
		{
			Total++;
		
			inicio = inicio->sig;   
						
		}
	}
	return Total;
}// Fin Del Contar.

int CuantosHay(int numero,int palo, _nodo *mazo)
{
	 int total;
	 _nodo *aux;
	total = 0; 
	if (mazo != NULL)
	{
		aux=mazo;
		while (aux != NULL)
		{
			if (aux->numero == numero)
			{	
				if (palo ==1)
				{
					if (aux->Picas)
					{
						total++;
					}
				}
				if (palo ==2)
				{
					if (aux->Diamantes)
					{
						total++;
					}
				}
				if (palo == 3)
				{
					if (aux->Trebol)
					{
						total++;
					}
				}
				if (palo == 4)
				{
					if (aux->Corazon)
					{
						total++;
					}
				}
			}
			aux = aux->sig;
		}
	}
 	return total;
}// Fin De Cuantos Hay.

int Random (int min_num, int max_num)
{
    int result=0,low_num=0,hi_num=0;

    if(min_num<max_num)
    {
        low_num=min_num;
        hi_num=max_num; // this is done to include max_num in output.
    }
    else
    {
        low_num=max_num;// this is done to include max_num in output.
        hi_num=min_num;
    }
    result = rand( ) % (low_num+hi_num);
    return result;
}// Fin Del Random.

void clear()
{
	#ifdef  Windows
	{	
		system("cls");
	}
	#else
	{
 		system("clear");
	}   
	#endif
}// Fin Del Clear.

void pause()
{
	#ifdef  Windows
	{	
		system ("pause");
	}
	#else
	{
 		system("read -p 'Presione alguna tecla para continuar..' var");
	}   
	#endif
}// Fin Del Pause.

int MasLarga(_nodo *uno,_nodo *dos,_nodo *tres,_nodo *cuatro,_nodo *cinco,_nodo *seis,_nodo *siete,_nodo *ocho,_nodo *nueve,_nodo *diez)
{
	int a,b,c,d,e,f,g,h,i,j,z;

	a = Contar(uno);
	b = Contar(dos);
	c = Contar(tres);
	d = Contar(cuatro);
	e = Contar(cinco);
	f = Contar(seis);
	g = Contar(siete);
	h = Contar(ocho);
	i = Contar(nueve);
	j = Contar(diez);

	if (a>b)
	{
		z=a;
	}
	else
		z=b;
	if (z<c)
	{
		z=c;
	}
	if (z<d)
	{
		z=d;
	}
	if (z<e)
	{
		z=e;
	}
	if (z<f)
	{
		z=f;
	}
	if (z<g)
	{
		z=g;
	}
	if (z<h)
	{
		z=h;
	}
	if (z<i)
	{
		z=i;
	}
	if (z<j)
	{
		z=j;
	}
	return z;
} // Fin Del Mas Larga.

void ImprimirJuego(_nodo *uno,_nodo *dos,_nodo *tres,_nodo *cuatro,_nodo *cinco,_nodo *seis,_nodo *siete,_nodo *ocho,_nodo *nueve,_nodo *diez, _nodo *mazo,int Reales)
{
	_nodo *aux1, *aux2, *aux3, *aux4, *aux5, *aux6, *aux7, *aux8, *aux9, *aux10, *tope1, *tope2, *tope3, *tope4, *tope5, *tope6,
	 *tope7, *tope8, *tope9, *tope10;
	 
	 int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
		
	
    
	tope1 = uno;
	tope2 = dos;
	tope3 = tres;
	tope4 = cuatro;
	tope5 = cinco;
	tope6 = seis;
	tope7 = siete;
	tope8 = ocho;
	tope9 = nueve;
	tope10 = diez;
	
	aux1 = uno;
	aux2 = dos;
	aux3 = tres;
	aux4 = cuatro;
	aux5 = cinco;
	aux6 = seis;
	aux7 = siete;
	aux8 = ocho;
	aux9 = nueve;
	aux10 = diez;
	
	num1 = Contar(uno);
	num2 = Contar(dos);
	num3 = Contar(tres);
	num4 = Contar(cuatro);
	num5 = Contar(cinco);
	num6 = Contar(seis);
	num7 = Contar(siete);
	num8 = Contar(ocho);
	num9 = Contar(nueve);
	num10 = Contar(diez);
	#ifdef Windows
	{
	int fila,tipo2,A,cont;
	
	fila = 1;
	
	printf("                              COLUMNAS     \n");
	printf("         1     2     3     4     5     6     7     8     9     10\n");
	printf(" FILAS\n");
	while (fila <= MasLarga(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez))
	{
		if (fila<10)
		printf ("   %d   ",fila);
		else
		printf ("   %d  ",fila);
		
		if ( num1 >= 1)
		{
			A = 1;
			while (A != num1)
			{
				aux1 = aux1->sig;
				A++;
			}
			if (!aux1->Visible) 
			{
				printf("| - | ");
				aux1=tope1;
			}
			else
			{
				if (aux1->Picas)
        				tipo2 = 006;
    				else if (aux1->Diamantes)
        				tipo2 = 004;
    				else if (aux1->Corazon)
        				tipo2 = 003;
    				else if (aux1->Trebol)
        				tipo2 = 005;
		
				if (aux1->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux1->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux1->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux1->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux1->numero == 10)
				{printf("|%d%c| ",aux1->numero,tipo2);}
				if (aux1->numero >= 2 && aux1->numero <= 9 )
				{
				printf("|%d %c| ",aux1->numero,tipo2);
				}
				aux1=tope1;		
				}
				num1--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num2 >= 1)
		{
			A = 1;
			while (A != num2)
			{
				aux2 = aux2->sig;
				A++;
			}
			if (!aux2->Visible) 
			{
				printf("| - | ");
				aux2=tope2;
			}
			else
			{
				if (aux2->Picas)
        				tipo2 = 006;
    				else if (aux2->Diamantes)
        				tipo2 = 004;
    				else if (aux2->Corazon)
        				tipo2 = 003;
    				else if (aux2->Trebol)
        				tipo2 = 005;
		
				if (aux2->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux2->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux2->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux2->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux2->numero == 10)
				{printf("|%d%c| ",aux2->numero,tipo2);}
				if (aux2->numero >= 2 && aux2->numero <= 9 )
				{
				printf("|%d %c| ",aux2->numero,tipo2);
				}
				aux2=tope2;		
				}
				num2--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num3 >= 1)
		{
			A = 1;
			while (A != num3)
			{
				aux3 = aux3->sig;
				A++;
			}
			if (!aux3->Visible) 
			{
				printf("| - | ");
				aux3=tope3;
			}
			else
			{
				if (aux3->Picas)
        				tipo2 = 006;
    				else if (aux3->Diamantes)
        				tipo2 = 004;
    				else if (aux3->Corazon)
        				tipo2 = 003;
    				else if (aux3->Trebol)
        				tipo2 = 005;
		
				if (aux3->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux3->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux3->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux3->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux3->numero == 10)
				{printf("|%d%c| ",aux3->numero,tipo2);}
				if (aux3->numero >= 2 && aux3->numero <= 9 )
				{
				printf("|%d %c| ",aux3->numero,tipo2);
				}
				aux3=tope3;		
				}
				num3--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num4 >= 1)
		{
			A = 1;
			while (A != num4)
			{
				aux4 = aux4->sig;
				A++;
			}
			if (!aux4->Visible) 
			{
				printf("| - | ");
				aux4=tope4;
			}
			else
			{
				if (aux4->Picas)
        				tipo2 = 006;
    				else if (aux4->Diamantes)
        				tipo2 = 004;
    				else if (aux4->Corazon)
        				tipo2 = 003;
    				else if (aux4->Trebol)
        				tipo2 = 005;
		
				if (aux4->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux4->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux4->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux4->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux4->numero == 10)
				{printf("|%d%c| ",aux4->numero,tipo2);}
				if (aux4->numero >= 2 && aux4->numero <= 9 )
				{
				printf("|%d %c| ",aux4->numero,tipo2);
				}
				aux4=tope4;		
				}
				num4--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num5 >= 1)
		{
			A = 1;
			while (A != num5)
			{
				aux5 = aux5->sig;
				A++;
			}
			if (!aux5->Visible) 
			{
				printf("| - | ");
				aux5=tope5;
			}
			else
			{
				if (aux5->Picas)
        				tipo2 = 006;
    				else if (aux5->Diamantes)
        				tipo2 = 004;
    				else if (aux5->Corazon)
        				tipo2 = 003;
    				else if (aux5->Trebol)
        				tipo2 = 005;
		
				if (aux5->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux5->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux5->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux5->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux5->numero == 10)
				{printf("|%d%c| ",aux5->numero,tipo2);}
				if (aux5->numero >= 2 && aux5->numero <= 9 )
				{
				printf("|%d %c| ",aux5->numero,tipo2);
				}
				aux5=tope5;		
				}
				num5--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num6 >= 1)
		{
			A = 1;
			while (A != num6)
			{
				aux6 = aux6->sig;
				A++;
			}
			if (!aux6->Visible) 
			{
				printf("| - | ");
				aux6=tope6;
			}
			else
			{
				if (aux6->Picas)
        				tipo2 = 006;
    				else if (aux6->Diamantes)
        				tipo2 = 004;
    				else if (aux6->Corazon)
        				tipo2 = 003;
    				else if (aux6->Trebol)
        				tipo2 = 005;
		
				if (aux6->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux6->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux6->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux6->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux6->numero == 10)
				{printf("|%d%c| ",aux6->numero,tipo2);}
				if (aux6->numero >= 2 && aux6->numero <= 9 )
				{
				printf("|%d %c| ",aux6->numero,tipo2);
				}
				aux6=tope6;		
				}
				num6--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num7 >= 1)
		{
			A = 1;
			while (A != num7)
			{
				aux7 = aux7->sig;
				A++;
			}
			if (!aux7->Visible) 
			{
				printf("| - | ");
				aux7=tope7;
			}
			else
			{
				if (aux7->Picas)
        				tipo2 = 006;
    				else if (aux7->Diamantes)
        				tipo2 = 004;
    				else if (aux7->Corazon)
        				tipo2 = 003;
    				else if (aux7->Trebol)
        				tipo2 = 005;
		
				if (aux7->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux7->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux7->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux7->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux7->numero == 10)
				{printf("|%d%c| ",aux7->numero,tipo2);}
				if (aux7->numero >= 2 && aux7->numero <= 9 )
				{
				printf("|%d %c| ",aux7->numero,tipo2);
				}
				aux7=tope7;		
				}
				num7--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num8 >= 1)
		{
			A = 1;
			while (A != num8)
			{
				aux8 = aux8->sig;
				A++;
			}
			if (!aux8->Visible) 
			{
				printf("| - | ");
				aux8=tope8;
			}
			else
			{
				if (aux8->Picas)
        				tipo2 = 006;
    				else if (aux8->Diamantes)
        				tipo2 = 004;
    				else if (aux8->Corazon)
        				tipo2 = 003;
    				else if (aux8->Trebol)
        				tipo2 = 005;
		
				if (aux8->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux8->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux8->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux8->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux8->numero == 10)
				{printf("|%d%c| ",aux8->numero,tipo2);}
				if (aux8->numero >= 2 && aux8->numero <= 9 )
				{
				printf("|%d %c| ",aux8->numero,tipo2);
				}
				aux8=tope8;		
				}
				num8--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num9 >= 1)
		{
			A = 1;
			while (A != num9)
			{
				aux9 = aux9->sig;
				A++;
			}
			if (!aux9->Visible) 
			{
				printf("| - | ");
				aux9=tope9;
			}
			else
			{
				if (aux9->Picas)
        				tipo2 = 006;
    				else if (aux9->Diamantes)
        				tipo2 = 004;
    				else if (aux9->Corazon)
        				tipo2 = 003;
    				else if (aux9->Trebol)
        				tipo2 = 005;
		
				if (aux9->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux9->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux9->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux9->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux9->numero == 10)
				{printf("|%d%c| ",aux9->numero,tipo2);}
				if (aux9->numero >= 2 && aux9->numero <= 9 )
				{
				printf("|%d %c| ",aux9->numero,tipo2);
				}
				aux9=tope9;		
				}
				num9--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num10 >= 1)
		{
			A = 1;
			while (A != num10)
			{
				aux10 = aux10->sig;
				A++;
			}
			if (!aux10->Visible) 
			{
				printf("| - | ");
				aux10=tope10;
			}
			else
			{
				if (aux10->Picas)
        				tipo2 = 006;
    				else if (aux10->Diamantes)
        				tipo2 = 004;
    				else if (aux10->Corazon)
        				tipo2 = 003;
    				else if (aux10->Trebol)
        				tipo2 = 005;
		
				if (aux10->numero ==1)
				{printf("|A %c| ",tipo2);}
				if (aux10->numero == 13)
				{printf("|K %c| ",tipo2);}
				if (aux10->numero == 12)
				{printf("|Q %c| ",tipo2);}
				if (aux10->numero == 11)
				{printf("|J %c| ",tipo2);}
				if (aux10->numero == 10)
				{printf("|%d%c| ",aux10->numero,tipo2);}
				if (aux10->numero >= 2 && aux10->numero <= 9 )
				{
				printf("|%d %c| ",aux10->numero,tipo2);
				}
				aux10=tope10;		
				}
				num10--;
		}
		else
		{
			printf("      ");
		}
		printf("\n\n");
		
		fila++;
	}
	printf(" \n");
	printf("                                                  [Mazo %d Cartas]\n\n",Contar(mazo));	
	if (Reales != 0)
	{
		cont = 0;
		while (cont < Reales)
		{
			printf (" [ K ] ");
			cont++;
		}
	}
	printf(" \n\n");
	}
	#else
	{
	int fila,A,cont;

	char    picas[] = "\u2660";
    	char    diamantes[] = "\u2666";
    	char    corazones[] = "\u2665";
    	char    treboles[] = "\u2663";
    	char    tipo[4];
	
	fila = 1;
	
	printf("                              COLUMNAS     \n");
	printf("         1     2     3     4     5     6     7     8     9     10\n");
	printf(" FILAS\n");
	while (fila <= MasLarga(uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez))
	{
		if (fila<10)
		printf ("   %d   ",fila);
		else
		printf ("   %d  ",fila);
		
		if ( num1 >= 1)
		{
			A = 1;
			while (A != num1)
			{
				aux1 = aux1->sig;
				A++;
			}
			if (!aux1->Visible) 
			{
				printf("| - | ");
				aux1=tope1;
			}
			else
			{
				if (aux1->Picas)
        				strcpy(tipo, picas);
    				else if (aux1->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux1->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux1->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux1->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux1->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux1->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux1->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux1->numero == 10)
				{printf("|%d%s| ",aux1->numero,tipo);}
				if (aux1->numero >= 2 && aux1->numero <= 9 )
				{
				printf("|%d %s| ",aux1->numero,tipo);
				}
				aux1=tope1;		
				}
				num1--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num2 >= 1)
		{
			A = 1;
			while (A != num2)
			{
				aux2 = aux2->sig;
				A++;
			}
			if (!aux2->Visible) 
			{
				printf("| - | ");
				aux2=tope2;
			}
			else
			{
				if (aux2->Picas)
        				strcpy(tipo, picas);
    				else if (aux2->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux2->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux2->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux2->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux2->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux2->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux2->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux2->numero == 10)
				{printf("|%d%s| ",aux2->numero,tipo);}
				if (aux2->numero >= 2 && aux2->numero <= 9 )
				{
				printf("|%d %s| ",aux2->numero,tipo);
				}
				aux2=tope2;		
				}
				num2--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num3 >= 1)
		{
			A = 1;
			while (A != num3)
			{
				aux3 = aux3->sig;
				A++;
			}
			if (!aux3->Visible) 
			{
				printf("| - | ");
				aux3=tope3;
			}
			else
			{
				if (aux3->Picas)
        				strcpy(tipo, picas);
    				else if (aux3->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux3->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux3->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux3->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux3->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux3->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux3->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux3->numero == 10)
				{printf("|%d%s| ",aux3->numero,tipo);}
				if (aux3->numero >= 2 && aux3->numero <= 9 )
				{
				printf("|%d %s| ",aux3->numero,tipo);
				}
				aux3=tope3;		
				}
				num3--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num4 >= 1)
		{
			A = 1;
			while (A != num4)
			{
				aux4 = aux4->sig;
				A++;
			}
			if (!aux4->Visible) 
			{
				printf("| - | ");
				aux4=tope4;
			}
			else
			{
				if (aux4->Picas)
        				strcpy(tipo, picas);
    				else if (aux4->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux4->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux4->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux4->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux4->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux4->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux4->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux4->numero == 10)
				{printf("|%d%s| ",aux4->numero,tipo);}
				if (aux4->numero >= 2 && aux4->numero <= 9 )
				{
				printf("|%d %s| ",aux4->numero,tipo);
				}
				aux4=tope4;		
				}
				num4--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num5 >= 1)
		{
			A = 1;
			while (A != num5)
			{
				aux5 = aux5->sig;
				A++;
			}
			if (!aux5->Visible) 
			{
				printf("| - | ");
				aux5=tope5;
			}
			else
			{
				if (aux5->Picas)
        				strcpy(tipo, picas);
    				else if (aux5->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux5->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux5->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux5->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux5->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux5->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux5->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux5->numero == 10)
				{printf("|%d%s| ",aux5->numero,tipo);}
				if (aux5->numero >= 2 && aux5->numero <= 9 )
				{
				printf("|%d %s| ",aux5->numero,tipo);
				}
				aux5=tope5;		
				}
				num5--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num6 >= 1)
		{
			A = 1;
			while (A != num6)
			{
				aux6 = aux6->sig;
				A++;
			}
			if (!aux6->Visible) 
			{
				printf("| - | ");
				aux6=tope6;
			}
			else
			{
				if (aux6->Picas)
        				strcpy(tipo, picas);
    				else if (aux6->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux6->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux6->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux6->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux6->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux6->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux6->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux6->numero == 10)
				{printf("|%d%s| ",aux6->numero,tipo);}
				if (aux6->numero >= 2 && aux6->numero <= 9 )
				{
				printf("|%d %s| ",aux6->numero,tipo);
				}
				aux6=tope6;		
				}
				num6--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num7 >= 1)
		{
			A = 1;
			while (A != num7)
			{
				aux7 = aux7->sig;
				A++;
			}
			if (!aux7->Visible) 
			{
				printf("| - | ");
				aux7=tope7;
			}
			else
			{
				if (aux7->Picas)
        				strcpy(tipo, picas);
    				else if (aux7->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux7->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux7->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux7->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux7->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux7->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux7->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux7->numero == 10)
				{printf("|%d%s| ",aux7->numero,tipo);}
				if (aux7->numero >= 2 && aux7->numero <= 9 )
				{
				printf("|%d %s| ",aux7->numero,tipo);
				}
				aux7=tope7;		
				}
				num7--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num8 >= 1)
		{
			A = 1;
			while (A != num8)
			{
				aux8 = aux8->sig;
				A++;
			}
			if (!aux8->Visible) 
			{
				printf("| - | ");
				aux8=tope8;
			}
			else
			{
				if (aux8->Picas)
        				strcpy(tipo, picas);
    				else if (aux8->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux8->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux8->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux8->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux8->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux8->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux8->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux8->numero == 10)
				{printf("|%d%s| ",aux8->numero,tipo);}
				if (aux8->numero >= 2 && aux8->numero <= 9 )
				{
				printf("|%d %s| ",aux8->numero,tipo);
				}
				aux8=tope8;		
				}
				num8--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num9 >= 1)
		{
			A = 1;
			while (A != num9)
			{
				aux9 = aux9->sig;
				A++;
			}
			if (!aux9->Visible) 
			{
				printf("| - | ");
				aux9=tope9;
			}
			else
			{
				if (aux9->Picas)
        				strcpy(tipo, picas);
    				else if (aux9->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux9->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux9->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux9->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux9->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux9->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux9->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux9->numero == 10)
				{printf("|%d%s| ",aux9->numero,tipo);}
				if (aux9->numero >= 2 && aux9->numero <= 9 )
				{
				printf("|%d %s| ",aux9->numero,tipo);
				}
				aux9=tope9;		
				}
				num9--;
		}
		else
		{
			printf("      ");
		}
		
		if ( num10 >= 1)
		{
			A = 1;
			while (A != num10)
			{
				aux10 = aux10->sig;
				A++;
			}
			if (!aux10->Visible) 
			{
				printf("| - | ");
				aux10=tope10;
			}
			else
			{
				if (aux10->Picas)
        				strcpy(tipo, picas);
    				else if (aux10->Diamantes)
        				strcpy(tipo, diamantes);
    				else if (aux10->Corazon)
        				strcpy(tipo, corazones);
    				else if (aux10->Trebol)
        				strcpy(tipo, treboles);
		
				if (aux10->numero ==1)
				{printf("|A %s| ",tipo);}
				if (aux10->numero == 13)
				{printf("|K %s| ",tipo);}
				if (aux10->numero == 12)
				{printf("|Q %s| ",tipo);}
				if (aux10->numero == 11)
				{printf("|J %s| ",tipo);}
				if (aux10->numero == 10)
				{printf("|%d%s| ",aux10->numero,tipo);}
				if (aux10->numero >= 2 && aux10->numero <= 9 )
				{
				printf("|%d %s| ",aux10->numero,tipo);
				}
				aux10=tope10;		
				}
				num10--;
		}
		else
		{
			printf("      ");
		}
		printf("\n\n");
		
		fila++;
	}
	printf(" \n");
	printf("                                                  [Mazo %d Cartas]\n\n",Contar(mazo));
	if (Reales != 0)
	{
		cont = 0;
		while (cont < Reales)
		{
			printf (" [ K ] ");
			cont++;
		}
	}
	printf(" \n\n");
	}
	#endif
}// Fin Del Imprimir.
