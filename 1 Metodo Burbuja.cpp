#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
    /* Se inicalizo un arreglo de tipo int
    */
    int array[10] = {2,3,1,5,4,5,6,7,8,10};
	/*Se inicializan las variables que va a tener el programa
    */int i,j,aux;
	
	cout<<"Arreglo desordenado: ";
	/* En este for se imprime el arreglo desordenado
    */
	for(i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	/* Sirve para dejar un espacio de interlineado
    */
	cout<<endl;
	
	/* En este for se realiza el intercambio de datos utilizando un auxiliar para ello
    */
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	/* En ete for se imprime el arraglo que se organizo con el metodo burbuja 
    */
	cout<<"\nArreglo ordenado: ";
	for(i=0;i<10;i++){
		cout<<array[i]<<" ";
		
	}
	cout<<endl;
	
	/* Este getch es para que no se cierre el programa al finalizar 
    */
	getch();
	return 0;
}
