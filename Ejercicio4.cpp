//Intercambio de Filas
#include <iostream>
using namespace std;

int main(){
	int fila1, fila2, aux;
	//Lectura de matriz
	int matriz[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Matriz : Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	
	//Lectura de filas a cambiar
	cout<<"Ingrese filas a intercambiar"<<endl;
	cout<<"Fila 1: "<<endl;
	cin>>fila1;
	cout<<"Fila 2: "<<endl;
	cin>>fila2;
	
	//Intercambio de Filas
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==fila1){
				aux=matriz[i][j];
				matriz[i][j]=matriz[fila2][j];
				matriz[fila2][j]=aux;
			}
		}
	}
	
	//Escritura de MatrizABC
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<endl;
	}
	
	return 0;
}	
	