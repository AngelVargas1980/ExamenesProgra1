/*9. Realice un programa en C++, utilizando memoria estática para dos Vectores que almacene las notas de dos cursos de cinco
estudiantes respectivamente, del cual pueda sacar el promedio de ambos cursos, mostrar las opciones en un menú, para el 
ingreso e impresión del promedio de cada vector: 
*/
/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int filas, columnas; //Filas x, Columnas y
	int Curso1[5], Curso2[5];
	int opcion;
	int suma1=0;
	int suma2=0;
	
	do{ cout<<endl;
		cout<<"Opcion 1: Ingresar datos de cada curso " <<endl;
		cout<<"Opcion 2: Mostrar la primera nota del Vector 1 " <<endl;
		cout<<"Opcion 3: Mostrar la ultima nota del Vector 2 " <<endl;
		cout<<"Opcion 4: Calcula el promedio de los cursos" <<endl;
		cout<<"Opcion 5: Mostrar los dos vectores, resultado promedio de cada curso " <<endl;
		cout<<"Opcion 6: Salir " <<endl;
		cin>>opcion;
		cout<<"Su opcion es:  " <<opcion; cout<<endl;
	
		switch(opcion)
		{
			case 1:
				cout<<endl;
				cout<<"Ingresar datos del los cursos" <<endl; 
				cout<<"*****************************" <<endl;
				
			
				cout<<"Introduzca las 5 notas del curso 1: " <<endl;  
				for(int i=0;i<5;i++){
						cout<<"Curso1["<<i<<"]";
						cin>>Curso1[i];
				}
					
				
				cout<<endl;
				cout<<"Introduzca las 5 notas del curso 2: " <<endl; 	
				for(int c=0;c<5;c++){
						cout<<"Curso2["<<c<<"]";
						cin>>Curso2[c];
				}						
					
				break;
			
			
			case 2:
			cout<<endl;
				cout<<"Muestra la primera nota del Curso 1 (Vector 1) " <<endl;  
				cout<<Curso1[0];
				cout<<endl;
				break;
				
				
			case 3: 
				cout<<endl;
				cout<<"Muestra la ultima nota del Curso 2 (Vector 2) " <<endl;  
				cout<<Curso2[4];
				cout<<endl;
				break;
								
			case 4:
				cout<<endl;
				cout<<"Calcula el promedio de los cursos" <<endl; 
				cout<<endl;
									
				for(int i=0;i<5;i++){		
					suma1= suma1 + Curso1[i]; //Utilizamos una suma iterativa
					
				}
	
				
					
				for(int c=0;c<5;c++){		
					suma2 += Curso2[c]; //Utilizamos una suma iterativa
					
				}
	
				cout<<"Promedio del Curso 1: "<<suma1/5<<endl;
				cout<<"Promedio del Curso 2: "<<suma2/5<<endl;
				
			break;	
				
			case 5:
				cout<<endl;
				cout<<"Muestra los dos Vectores, resultado Promedio de cada curso " <<endl; 
				
				cout<<"\nMostrando Vector1\n";
				for(int i=0;i<5;i++){
						cout<<"Curso1["<<Curso1[i]<<"]"<<endl;
				}
									
				cout<<endl;
				cout<<"\nMostrando Vector2\n";
				for(int c=0;c<5;c++){
						cout<<"Curso2["<<Curso2[c]<<"]"<<endl;			
						
				}
				cout<<"\n";
				
				//Mostrando el promedio  de los dos cursos
				
				for(int i=0;i<5;i++){		
					suma1= suma1 + Curso1[i]; //Utilizamos una suma iterativa
					
				}
	
					
				for(int c=0;c<5;c++){		
					suma2 += Curso2[c]; //Utilizamos una suma iterativa
					
				}
				
				cout<<"Promedio del Curso 1: "<<suma1/5<<endl;
				cout<<"Promedio del Curso 2: "<<suma2/5<<endl;
				
				break;	
			
		}
	}while (opcion!=6);
	return 0;	
		
}

/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/
