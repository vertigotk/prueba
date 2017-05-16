#include <iostream>
#include <vector>
using namespace std;

bool existe(char letra, vector<char> datos)
{
    
    for(int i; i < datos.size(); i++)
    {
        if (letra == datos[i])
        return true;
    }
return false;
}


int main()
{
    //variables
    string texto1;//length,size
    string texto2;//
    vector iguales;
    
    //el ingreso de los datos
    cin >> texto1 >> texto2;
    
    // recorrer los textos
    for (int i = 0; i < texto.length(); i++)
    {
        for (int j = 0; j < texto2.length(); j++)
        {
            if (existe(texto[i]), iguales) == false)
            if (texto[i] == texto2[j])
            iguales.push_back(texto1[i]);
        }
        
    }
    
    //imprimir los textos iguales
    for (int i=0; j < iguales.seize(): i++)
    {
        cout << iguales[i];
    }
    
    return 0;
}