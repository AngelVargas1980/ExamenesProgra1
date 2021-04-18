/*10. Realice un programa en C++, que realice las opciones descritas a continuación en
la matriz Alfa y el Vector Total:
*/
/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num;
	int opcion;
	int sumaDiagonal1=0;
	int sumaDiagonal2=0;
	int sumafila;
	int numeros[100][100],filas,columnas;
	char band='F';
	
	
	do{ 
		cout<<endl;
		cout<<"Opcion 1: Ingresar datos de la matriz ALFA " <<endl;
		cout<<"Opcion 2: Calcula la suma de cada fila (diagonal 1, diagonal 2, fila)  " <<endl;
		cout<<"Opcion 3: Mostrar la matriz ALFA " <<endl;
		cout<<"Opcion 4: Finalizar " <<endl;
		cin>>opcion;
		cout<<"Su opcion es:  " <<opcion<<endl;
	
		switch(opcion)
		{
			case 1: 
				cout<<"Digite el numero 3 para las filas: "; cin>>filas;
				cout<<"Digite el numero 3 para las columnas: "; cin>>columnas;
				
				//Rellenando la matriz	
				for(int i=0;i<filas;i++){
					for(int j=0;j<columnas;j++){
						cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
						cin>>numeros[i][j];
				}
			} 
				break;
			
			case 2:
			 
				sumaDiagonal1=0;	//Suma diagonal 1
						
				if(filas==columnas){
					for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
							if(numeros[i][j] == numeros[j][i]){
								band='V';
								sumaDiagonal1= sumaDiagonal1 + numeros[i][j];
								
								
							}
						}				
					
					}
				}
				
				
				
				sumaDiagonal2=0;    //Suma diagonal 2
				if(filas==columnas){
					for(int c=0;c<filas;c++){
						for(int d=0;d<columnas;d++){
							if(numeros[c][d] != numeros[d][c]){
								band='V';
								sumaDiagonal2= sumaDiagonal2 + numeros[c][d];
							}
						}				
					
					}
				}
								
				
				if(band=='V'){
					cout<<"\nEs una matriz simetrica" <<endl;
				}
				else{
					cout<<"\nNo es una matriz simetrica" <<endl;
				}
			
				sumafila=numeros[2][0]+numeros[2][1]+numeros[2][2]; //Fila 3
								
				cout<<"Suma de la Diagonal 1 es: " <<sumaDiagonal1<<endl;
				cout<<"Suma de la Diagonal 2 es: " <<sumaDiagonal2<<endl;
				cout<<"La suma de la fila 3 es:  " <<sumafila<<endl;
				
				
				break;
		
			case 3: 
			cout<<"\nMostrando matriz ALFA\n\n";
				
				for(int i=0;i<filas;i++){
					for(int j=0;j<columnas;j++){
						cout<<numeros[i][j];
												
					}
				cout<<"\n";
				
				}
				cout<<"\n";
				cout<<"\n";
				cout<<"\n";
				cout<<"\n";
				cout<<"\n Vector: TOTAL" <<endl;
				cout<<"Suma Diagonal 1" << "\t 	Suma Fila 3 " << "	Suma Diagonal 2" <<endl; 
				cout<<"	"<<sumaDiagonal1<<"\t		"<<sumafila<<"\t	"<<sumaDiagonal2<<endl;
				
				
														
				break;
		}
	}while (opcion!=4);
	return 0;	
		
	}


/*
Angel Antonio Vargas lazaro - Carnet: 0909 13 2335 
*/

