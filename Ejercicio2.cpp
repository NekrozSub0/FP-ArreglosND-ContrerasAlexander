//Buscar un Valor en una Matriz
#include <iostream>
using namespace std;

int main(){
	int valor;
	//Lectura de matrizA
	int matriz[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Matriz : Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Ingrese el valor a buscar"<<endl;
	cin>>valor;
	
	//Busqueda de Valor
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(valor==matriz[i][j]){
			cout<<"Valor encontrado en: "<<endl;
			cout<<"Fila ["<<i+1<<"] Columna ["<<j+1<<"]";				
			}
		}
	}
	
	return 0;
}