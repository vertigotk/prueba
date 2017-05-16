#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //variables
    int n;
    std::vector<<int>> datos;
     
     // ingreso de datos
     cin >> n;
     for ( int i = 0; i < n; i++)
     {
         int x;
         cin >> x;
         datos.push_back(x);
     }
     // valor maximo
     int max = datos[0];
     for ( int i = 0; i < datos.size(); i++)
         if (datos[i] > max)
         max = datos[i];
     
     
     // crear el vector comunes de tamaño 
     vector<int> comunes(max+1);
     
     // calcular frecuencias
     for (int i = 0; i < datos.size(); i++)
     {
         int posicion = datos[i];
         comunes[posicion] += 1;
     }
     
     // calculo maxima frecuencia 
     int maxFrec = comunes[0];
     for (int i = 0; i < comunes.size(); i++)
     if (comunes[i] > maxFrec)
     maxFrec = comunes[i];
     
     // imprimiendo numeros con maxima frecuencia
     for ( int i = 0; comunes.size(); i++)
     if (maxFrec == comunes[i])
     cout << i << endl;
     
     
     
     
     return 0;
}