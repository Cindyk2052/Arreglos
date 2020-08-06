#include <iostream>
using namespace std;
void llenarArreglo (int a[]);
void arregloCambiado (int b[]);
void imprimir (int c[]);

int main() {
  int arreglo[50];
  cout << "Programa para Almacen DePrati" << endl;
  llenarArreglo(arreglo);
  cout << endl;
  cout << "Arreglo: " << endl;
  imprimir(arreglo);
  cout << "Nuevo arreglo: " << endl;
  arregloCambiado(arreglo);

  return 0;
}

void llenarArreglo (int a[]){
  for (int i= 0; i < 10; i++){
      cout << "Ingrese el elemento al arreglo: ";
      cin >> a[i];
  }
}

void arregloCambiado (int b[]){
  double d[50];
  int c = 0, i = 0;
  for (int i = 0; i < 10; i++){
    d[c] = b[i];
    c++; 
    
  }
  for (int i = 0; i < c; i++){
    if (d[c] > 50 & d[c] < 100){
      d[c] *= 0.5;
    }
    cout << d[i] << endl;
  }  
  
  
}

void imprimir (int c[]){
  for (int i=0; i< 10; i++)
  {
    cout << c[i]; 
    cout << endl;
  }
}