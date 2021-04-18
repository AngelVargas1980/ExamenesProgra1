/* 11. Desarrolle un programa que realice la siguiente operación. Se tienen dos vectores de 3 elementos numéricos cada uno,
 realizar la resta del Vector A menos el Vector B y almacenar el resultado en un Vector C (C = A -B), determinar 
 el promedio de la suma de los elementos del Vector C (prom_C).
*/

/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	short int x, y, i, j;  //Filas x, Columnas y
	float suma, n=0;
	
	cout<<"\t Digite una matriz de 3*3: " <<endl;
	cout<<endl;
	cout<<"Digite el numero 3 para las filas: "; cin>>x; 
	cout<<"Digite el numero 3 para las columnas: "; cin>>y; cout<<endl;
	
	float A[x][y], B[x][y], C[x][y], D[x][y], E[i][j];
	
	//llenando matriz A
	cout<<"Introduzca los datos de la matriz A: " <<endl;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}

	
	//llenando matriz B
	cout<<endl;
	cout<<"Introduzca los datos de la matriz B: "<<endl;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			cout<<"B["<<i<<"]["<<j<<"]: ";
			cin>>B[i][j];			
		}
	
	
	for(i=0;i<x;i++)  //Resta
		for(j=0;j<y;j++)
			C[i][j]= A[i][j] - B[i][j];	
			
	{
	
	for(i=0;i<x;i++)  //Suma
		for(j=0;j<y;j++)
			D[i][j]= (A[i][j] + B[i][j]);
			
	suma=0;
	n=0;	
	for(i=0;i<=D[i][j];i++)  //Promedio de E
		suma=suma + D[i][j];	
				
	}
				
	
	cout<<endl;
	cout<<"Resta de la matriz C: "<<endl;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			
			cout<<"C ["<<i<<"] ["<<j<<"]: "<<C[i][j]<<endl;		
		
	
	cout<<endl;
	cout<<"El promedio de los elementos de la matriz C: " <<suma/9<<endl;
	
		
	getch();
	return 0;			
}
	
/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/	
