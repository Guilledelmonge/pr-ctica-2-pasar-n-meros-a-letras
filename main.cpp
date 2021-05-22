//digite un número del 0 al 999 y escribalo en letras 

#include <iostream>
#include <locale.h> //admite configuraciones específicas de localización
using namespace std;

int main() {  // inicia nuestro programa
  
  int numero, unidad, decena, centena;
  cout << "escriba un número del o al 999: "; cin>> numero;  // ingresamos un número


// se agrega un condicional, para reamostrar en pantalla el numero que digitamos del 0 al 10
if (0<=numero && numero<=10) {
switch (numero){
 
         case 0: cout<< "cero "; break;
         case 1: cout<< "uno"; break;
         case 2: cout<< "dos "; break;
         case 3: cout<< "tres "; break;
         case 4: cout<< "cuatro "; break;
         case 5: cout<< "cinco "; break;
         case 6: cout<< "seis "; break;
         case 7: cout<< "siete "; break;
         case 8: cout<< "ocho "; break;
         case 9: cout<< "nueve "; break;
         break;
 }}


// ahora viene la programación para identificar los números del 11 al 999

  else if(numero>10 && numero<=999){  // si el número es mayor o igual a cero, y además es menor o igual a 999, entonces :

    /* ahora el % nos da el residuo y el / el cociente, todo esto para que el programa comprenda y ubique cuando agrego un0, dos o 3 números*/
    unidad=numero%10;  numero=numero/10; 
    decena=numero%10;  numero=numero/10;
    centena=numero%10; numero=numero/10;

 
 // agregué un if, para establecer una condición entre los números de o y 999     
 if(10>=numero && numero <=999) {

    // ahora calculamos las centenas
    
    /* escogí un case para que se me haga más facil leer cada numero correspondiente a la parte de unida, decena y centena*/


    /* lo case son para que cuando se precione un número, el programa
    sepa donde ubicarlo, ya sea en las decenas o centenas*/ 


    // el siguiente es el bucle para las centenas
    switch (centena){
      case 0: cout<< ""; break;
      case 1:     if (decena==0 && unidad==0) {  /* la centena de cien, necesita especificar si es 100, o más de 100, si la decena es 0 y la unidad es 0, estonces reelice los siguientes casos*/

                     cout<<"cien ";
                    }
                     else {
                      cout<<"ciento ";  
                     }
                break;
         // el break en general para todos los case, finaliza la ejecución de dichos bucles y salta a la primera instrucción siguiente

      case 2: cout<< "doscientos "; break;
      case 3: cout<< "trescientos "; break;
      case 4: cout<< "cuatrocientos "; break;
      case 5: cout<< "quinientos "; break;
      case 6: cout<< "seiscientos "; break;
      case 7: cout<< "sietecientos "; break;
      case 8: cout<< "ochocientos "; break;
      case 9: cout<< "nuevecientos "; break;
    }




  //ahora los diferentes bucles para leer las decenas
  
   switch (decena){
    // agregué el case 0, para que me motrara los numeros del 101 al 109, 201 al 209, 301 al 309 y así sucesivamente
     case 0: switch (unidad){
         
         case 0: cout<< " "; break;
         case 1: cout<< "uno "; break;
         case 2: cout<< "dos"; break;
         case 3: cout<< "tres "; break;
         case 4: cout<< "cuatro "; break;
         case 5: cout<< "cinco "; break;
         case 6: cout<< "seis "; break;
         case 7: cout<< "siete "; break;
         case 8: cout<< "ocho "; break;
         case 9: cout<< "nueve "; break;
       }
      break;

      case 1: switch (unidad){
         
         case 0: cout<< "diez "; break;
         case 1: cout<< "0nce "; break;
         case 2: cout<< "doce "; break;
         case 3: cout<< "trece "; break;
         case 4: cout<< "catorce "; break;
         case 5: cout<< "quince "; break;
         case 6: cout<< "dieciseis "; break;
         case 7: cout<< "diecisiete "; break;
         case 8: cout<< "dieciocho "; break;
         case 9: cout<< "diecinueve "; break;
       }
      break;

      case 2: switch (unidad){
         
         case 0: cout<< "veinte "; break;
         case 1: cout<< "veintiuno "; break;
         case 2: cout<< "veintidos "; break;
         case 3: cout<< "veintitres "; break;
         case 4: cout<< "veinticuatro "; break;
         case 5: cout<< "veinticinco "; break;
         case 6: cout<< "veintiseis "; break;
         case 7: cout<< "veintisiete "; break;
         case 8: cout<< "veintiocho "; break;
         case 9: cout<< "veintinueve "; break;
       }
      break;

      case 3: switch (unidad){
         
         case 0: cout<< "treinta "; break;
         case 1: cout<< "treinta_y_uno "; break;
         case 2: cout<< "treinta_y_dos "; break;
         case 3: cout<< "treinta_y_tres "; break;
         case 4: cout<< "treinta_y_cuatro "; break;
         case 5: cout<< "treinta_y_cinco "; break;
         case 6: cout<< "treinta_y_seis "; break;
         case 7: cout<< "treina_y_siete "; break;
         case 8: cout<< "treinta_y_ocho "; break;
         case 9: cout<< "treinta_y_nueve "; break;
       }
      break;

      case 4: switch (unidad){
         
         case 0: cout<< "cuarenta "; break;
         case 1: cout<< "cuarenta_y_uno "; break;
         case 2: cout<< "cuarenta_y_dos "; break;
         case 3: cout<< "cuarenta_y_tres "; break;
         case 4: cout<< "cuarenta_y_cuatro "; break;
         case 5: cout<< "cuarenta_y_cinco "; break;
         case 6: cout<< "cuarenta_y_seis "; break;
         case 7: cout<< "cuarenta_y_siete "; break;
         case 8: cout<< "cuarenta_y_ocho "; break;
         case 9: cout<< "cuarenta_y_nueve "; break;
       }
      break;


      case 5: switch (unidad){
         
         case 0: cout<< "cincuenta "; break;
         case 1: cout<< "cincuenta_y_uno "; break;
         case 2: cout<< "cincuenta_y_dos "; break;
         case 3: cout<< "cincuenta_y_tres "; break;
         case 4: cout<< "cincuenta_y_cuatro "; break;
         case 5: cout<< "cincuenta_y_cinco "; break;
         case 6: cout<< "cincuenta_y_seis "; break;
         case 7: cout<< "cincuenta_y_siete "; break;
         case 8: cout<< "cincuenta_y_ocho "; break;
         case 9: cout<< "cincuenta_y_nueve "; break;
       }
      break;


      case 6: switch (unidad){
         
         case 0: cout<< "sesenta "; break;
         case 1: cout<< "sesenta_y_uno "; break;
         case 2: cout<< "sesenta_y_dos "; break;
         case 3: cout<< "sesenta_y_tres "; break;
         case 4: cout<< "sesenta_y_cuatro "; break;
         case 5: cout<< "sesenta_y_cinco "; break;
         case 6: cout<< "sesenta_y_seis "; break;
         case 7: cout<< "sesenta_y_siete "; break;
         case 8: cout<< "sesenta_y_ocho "; break;
         case 9: cout<< "sesenta_y_nueve "; break;
       }
      break;

      case 7: switch (unidad){
         
         case 0: cout<< "setenta "; break;
         case 1: cout<< "setenta_y_uno "; break;
         case 2: cout<< "setenta_y_dos "; break;
         case 3: cout<< "setenta_y_tres "; break;
         case 4: cout<< "setenta_y_cuatro "; break;
         case 5: cout<< "setenta_y_cinco "; break;
         case 6: cout<< "setenta_y_seis "; break;
         case 7: cout<< "setenta_y_siete "; break;
         case 8: cout<< "setenta_y_ocho "; break;
         case 9: cout<< "setenta_y_nueve "; break;
       }
      break;

      case 8: switch (unidad){
         
         case 0: cout<< "ochenta "; break;
         case 1: cout<< "ochenta_y_uno "; break;
         case 2: cout<< "ochenta_y_dos "; break;
         case 3: cout<< "ochenta_y_tres "; break;
         case 4: cout<< "ochenta_y_cuatro "; break;
         case 5: cout<< "ochenta_y_cinco "; break;
         case 6: cout<< "ochenta_y_seis "; break;
         case 7: cout<< "ochenta_y_siete "; break;
         case 8: cout<< "ochenta_y_ocho "; break;
         case 9: cout<< "ochenta_y_nueve "; break;
       }
      break;

      case 9: switch (unidad){
         
         case 0: cout<< "noventa "; break;
         case 1: cout<< "noventa_y_uno "; break;
         case 2: cout<< "noventa_y_dos "; break;
         case 3: cout<< "noventa_y_tres "; break;
         case 4: cout<< "noventa_y_cuatro "; break;
         case 5: cout<< "noventa_y_cinco "; break;
         case 6: cout<< "noventa_y_seis "; break;
         case 7: cout<< "noventa_y_siete "; break;
         case 8: cout<< "noventa_y_ocho "; break;
         case 9: cout<< "noventa_y_nueve "; break;
       }
      break;

   /* las siguientes llaves son para cerrar los diferentes
   condicionales, switch y case del programa */ 
  }
}
}
}
