//Producto de 2 Matrices 3x3
#include <iostream>
using namespace std;

int main(){
	//Lectura de matrizA
	int matrizA[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Matriz A: Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matrizA[i][j];
		}
	}
	cout<<endl;
	
	//Lectura de matrizB
	int matrizB[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Matriz B: Ingrese el valor para ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matrizB[i][j];
		}
	}
	cout<<endl;
	
	//Calculo de matrizC
	int matrizC[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matrizC[i][j]=matrizA[i][0]*matrizB[0][j]+matrizA[i][1]*matrizB[1][j]+matrizA[i][2]*matrizB[2][j];
		}
	}
	
	//Escritura de MatrizABC
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<matrizA[i][j]<<"]";
		}
		if(i==1){
			cout<<" x ";
		}else{
			cout<<"   ";
		}
		for(int j=0;j<3;j++){
			cout<<"["<<matrizB[i][j]<<"]";
		}
		if(i==1){
			cout<<" = ";
		}else{
			cout<<"   ";
		}
				for(int j=0;j<3;j++){
			cout<<"["<<matrizC[i][j]<<"]";
		}
		cout<<endl;
	}
	
	return 0;
}