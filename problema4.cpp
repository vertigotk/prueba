#include <iostream>
#include <vector>
using namespace std;
int main()
{
// Variables
int n;
vector<int> datos;
// Ingreso de datos
cin >> n;
for (int i = 0; i < n; i++) 
{
int x;
cin >> x;
datos.push_back(x);
}
// Valor maximo
int max = datos[0];
for (int i = 0; i < datos.size(); i++)
if (datos[i] > max)
max = datos[i];
// Crear el vector comunes de tamaño max
vector<int> comunes(max+1);
// Calcular frecuencias
for (int i = 0; i < datos.size(); i++) 
{
int posicion = datos[i];
comunes[posicion] += 1;
}
// Calcular maxima frecuencia
int maxFrec = comunes[0];
for (int i = 0; i < comunes.size(); i++)
if (comunes[i] > maxFrec)
maxFrec = comunes[i];

cout << "los numeros frecuentes son:" << endl;
// Imprimiendo numeros con maxima frecuencia
for (int i = 0; i < comunes.size(); i++)
if (maxFrec == comunes[i])
cout << i << endl;
return 0;
}