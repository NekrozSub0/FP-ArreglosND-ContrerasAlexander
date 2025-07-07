//Suma de diagonales de una matriz 4x4
#include <iostream>
using namespace std;

int main(){
	int suma1=0, suma2=0;
	//Lectura de matrizA
	int matriz[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Matriz : Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
		}
	}
			
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				suma1=suma1+matriz[i][j];
			}
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i+j==3){
				suma2=suma2+matriz[i][j];
			}
		}
	}
	
	cout<<"Suma de diagonal 1:"<<suma1;
	cout<<"Suma de diagonal 2: "<<suma2;
	return 0;
}
	