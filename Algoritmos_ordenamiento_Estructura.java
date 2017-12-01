
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package algoritmos_ordenamiento_estructura;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Random;

/**
 *
 * @author Administrador
 */
public class Algoritmos_ordenamiento_Estructura {

    /**
     * @param args the command line arguments
     */
    
    BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
    
    
     public static void main(String[] args) throws IOException {
         
        int n;
        n = Integer.parseInt(br.readLine());
        int[] numeros = new int[n];
        
        System.out.println("Vector desordenado");
        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = br.readLine();
            System.out.print(numeros[i] + " ");
        }   
        Algoritmos_ordenamiento_Estructura.quickSort(numeros, 0, numeros.length - 1);
        System.out.println("\nVector Ordenado");
        for (int x : numeros) {
            System.out.print(x + " ");
        }

    }
    
     public static void quickSort(int[] vector, int izquierda, int derecha) {
         
        int pivote = vector[izquierda];
        int i = izquierda;
        int j = derecha;
        int auxIntercambio;
        while (i < j) {
            while (vector[i] <= pivote && i < j) {
                i++;
            }
            while (vector[j] > pivote) {
                j--;
            }
            if (i < j) {
                auxIntercambio = vector[i];
                vector[i] = vector[j];
                vector[j] = auxIntercambio;
            }
        }
        vector[izquierda] = vector[j];
        vector[j] = pivote;
        if (izquierda < j - 1) {
            quickSort(vector, izquierda, j - 1);
        }
        if (j + 1 < derecha) {
            quickSort(vector, j + 1, derecha);
        }
    }

   
}
    

 /*int[] numeros = new int[40];
        Random rnd = new Random();
        System.out.println("Vector desordenado");
        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = rnd.nextInt(50);
            System.out.print(numeros[i] + " ");
        }   
        QuickSortClass.quickSort(numeros, 0, numeros.length - 1);
        System.out.println("\nVector Ordenado");
        for (int n : numeros) {
            System.out.print(n + " ");
*/
