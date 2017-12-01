#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    
    /* Se inicializa un arreglo con los datos a ordenar
    */
	int array[] = {3,4,2,1,5,1,2,23,9,8};
	int i,aux;
	
	/* En este for se muestra el arreglo desordenado
    */
	cout<<"Arreglo desordenado: ";
	for(i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	/* En este for se van comparando los datos y se intercambian de posicion dependiendo si uno es mayor que otro
    */
	for(i=0;i<10;i++){
		pos = i; 
		aux = array[i];
	    /* En este while se comparan los datos y se intercambian dependiendo si son mayores o no 
        */	
		while((i>0) && (array[i-1] > aux)){
			array[i] = array[i-1];
			i--;
		}
		array[i] = aux;
	}
	
	/* Se imprime el arreglo ordenado Insertion Sort
    */
	cout<<"\nArreglo ordenado: ";
	for(i=0;i<10;i++
	){
		cout<<array[i]<<" ";
	}
	
    /* El getch se utiliza ara que el programa no se cierra al finalizar 
    */
	getch();
	return 0;
}
