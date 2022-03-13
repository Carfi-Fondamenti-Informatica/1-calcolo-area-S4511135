/*
Nome Giulio
Cognome Anyanwu
Matricola S4511135
Esercizio : Calcolare le varie Aree delle figure geometriche, inserendo a,b,c da tastiera

*/

#include <iostream>
using namespace std;

int main() 
{
    float A = 0, B = 0, C = 0, AreaTriangolo = 0, AreaQuadrato = 0, AreaRettangolo = 0, AreaTrapezio = 0;
    cin>>A>>B>>C;
	
    AreaTriangolo = (A * B) / 2;
	cout<<"L'AreaTriangolo e' : "<<AreaTriangolo<<endl;
	
    AreaQuadrato = A * A;
	cout<<"L'AreaQuadrato e': "<<AreaQuadrato<<endl;
	
    AreaRettangolo = A * B;
	cout<<"L'AreaRettangolo e': "<<AreaRettangolo<<endl;
	
    AreaTrapezio=(A + B) * C/2;
	cout<<"L'AreaTrapezio e': "<< AreaTrapezio<<endl;


    return 0;
}
