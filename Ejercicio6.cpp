//Reflejo horizontal de una matriz 6x6
#include <iostream>
using namespace std;

int main(){
	int aux;
	//Lectura de matriz
	int matriz[6][6];
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<"Matriz : Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	
	//Impresión de Matriz Original
	cout<<"Matriz original"<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<endl;
	}
	
	//Reflejo de la matriz
	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++){
			aux=matriz[i][j];
			matriz[i][j]=matriz[i][5-j];
			matriz[i][5-j]=aux;
		}
	}
	
	//Impresión de Matriz reflejada
	cout<<"Matriz reflejada"<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<endl;
	}
	
	return 0;
}	