//Encontrar el Maximo y Minimo en una matriz
#include <iostream>
using namespace std;

int main(){
	int maximo, filamax, columnamax, minimo, filamin, columnamin;
	//Lectura de matriz
	int matriz[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Matriz : Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	
	//Estableciendo valores
	maximo=matriz[0][0];
	minimo=matriz[0][0];
	
	//Busqueda de maximo y minimo
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]>maximo){
				maximo=matriz[i][j];
				filamax=i;
				columnamax=j;
			}
			if(matriz[i][j]<minimo){
				minimo=matriz[i][j];
				filamin=i;
				columnamin=j;
			}
		}
	}
	
	//Escritura de Maximo y minimo
	cout<<"Numero mayor encontrado: "<<maximo<<" fila: "<<filamax+1<<" columna: "<<columnamax+1<<endl;
	cout<<"Numero minimo encontrado: "<<minimo<<" fila: "<<filamin+1<<" columna: "<<columnamin+1<<endl;
	
	return 0;
}	
	