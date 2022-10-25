/*Programa para diagnostico de Coronavirus*/
#include <iostream>
#include <cstdlib>
void pecho();
void fiebre1();
void tos();
void garganta();
using namespace std;
int main(){
    int fiebre;
    system("COLOR F1");
    cout << "\t\tTEST DE CORONAVIRUS" << endl << endl;
    cout << "Tenes Fiebre: " << endl;
    cout << " - 1 En caso positivo" << endl;
    cout << " - 2 En caso negativo" << endl;
    cout << "\nSu respuesta es: ";
    cin >> fiebre;
    if(fiebre == 1){
        fiebre1();
        tos();
        garganta();
        pecho();
        system("CLS");
        cout << "\n\n\t\tSi usted cumplio con almenos 2 SINTOMAS, consulte a su MEDICO " << endl;
    }
    if(fiebre == 2){
        system("cls");
        cout << "Usted no tiene fiebre, siga contestando el test: ";
        tos();
        pecho();
    }
    system("pause");
    system("CLS");
    cout << "\n\n\t\tRECUERDE QUE LA FIEBRE ES EL SINTOMA MAS IMPORTANTE" << endl;
return 0;
}
void fiebre1(){
    char fiebre[2],tos[2],cansacio[2];
    float grados;
    cout << "\nCuantos grados de temperatura posee: (Numero Exacto): ";
    cin >> grados;
    if(grados>=37){
        system("cls");
        cout << "\nSu temperatura es SINTOMA de CORONAVIRUS" << endl;
        cout << "Seguiremos con las pruebas" << endl;
    }
    else
    if(grados<37){
        system("cls");
        cout << "\nNo esta dentro de los SINTOMAS del CORONAVIRUS" << endl;
        cout << "Para mayor presicion seguiremos con las pruebas";
    }
}
void tos(){
    int tos;
    cout << "\nTenes TOS: " << endl;
    cout << " - 1 En caso positivo" << endl;
    cout << " - 2 En caso negativo" << endl;
    cout << "\nSu respuesta es: ";
    cin >> tos;
    if(tos == 1){
        cout << "\nSu TOS es SINTOMA de CORONAVIRUS" << endl;
    }
    else
    if(tos == 2){
        system("cls");
        cout << "\nUsted no cumple con este sintoma, procederemos a realizar mas pruebas" << endl;
    }
}
void garganta(){
int garg;
    cout << "\nTenes dolor de garganta: " << endl;
    cout << " - 1 En caso positivo" << endl;
    cout << " - 2 En caso negativo" << endl;
    cout << "\nSu respuesta es: ";
    cin >> garg;
        if(garg == 1){
        cout << "\nEste dolor es SINTOMA de CORONAVIRUS" << endl;
    }
    else
    if(garg == 2){
        system("CLS");
        cout << "\nUsted no cumple con este sintoma, procederemos a realizar mas pruebas" << endl;
    }
}
void pecho(){
   int pe;
    cout << "\nTenes dificultades al respirar: " << endl;
    cout << " - 1 En caso positivo" << endl;
    cout << " - 2 En caso negativo" << endl;
    cout << "\nSu respuesta es: ";
    cin >> pe;
        if(pe == 1){
        cout << "\nEste dolor es SINTOMA de CORONAVIRUS" << endl;
    }
    else
    if(pe == 2){
        system("CLS");
        cout << "\nUsted no cumple con este sintoma, procederemos a realizar mas pruebas" << endl;
    }
}
