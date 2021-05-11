//digite un número del 0 al 999 y escribalo en letras 

#include <iostream>
#include <locale.h> //admite configuraciones específicas de localización
using namespace std;

int main() {  // inicia nuestro programa
  
  int numero, unidad, decena, centena, unimil;
  cout << "escriba un número del o al 999: "; cin>> numero;  // ingresamos un número


  if(numero>=0 && numero<=999){  // si el número es mayor o igual a cero, ay además es menos o igual a 999, entonces :

    // ahora el % nos da el residuo y el / el cociente
    unidad=numero%10;  numero=numero/10; 
    decena=numero%10;  numero=numero/10;
    centena=numero%10; numero=numero/10;
    


    // ahora mostramos las centenas

    switch (centena){
      case 0: cout<< "cero"; break;
      case 1:     if (decena==0 && unidad==0) {  // la centena de cien, necesita especificar si es 100, o más de 100

                     cout<<"cien ";
                    }
                     else {
                      cout<<"ciento ";  
                     }
                break;
 
      case 2: cout<< "doscientos "; break;
      case 3: cout<< "trescientos "; break;
      case 4: cout<< "cuatrocientos "; break;
      case 5: cout<< "quinientos "; break;
      case 6: cout<< "seiscientos "; break;
      case 7: cout<< "sietecientos "; break;
      case 8: cout<< "ochocientos "; break;
      case 9: cout<< "nuevecientos "; break;
    }

  //ahora las decenas
   switch (decena){
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


  }
}
}