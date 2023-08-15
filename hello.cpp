

#include<iostream>
#include<windows.h>
//libreria de configuraciones especificas
#include<locale.h>


#define color SetConsoleTextAttribute
using namespace std;

int main(){
	
setlocale(LC_CTYPE,"Spanish");

 //RESUMEN
 HANDLE hConsole= GetStdHandle( STD_OUTPUT_HANDLE);
 
 color(hConsole, 70);
cout<<"GENERACIONES DE LAS COMPUTADORAS."<<endl;
cout<<"\n\nPrimera generaci�n (1940-1950)."<<endl;

cout<<"Caracter�sticas: Utilizaci�n de v�lvulas de vac�o para procesamiento. Grandes, costosas y propensas a fallas.";
cout<<"\nLogros notables: ENIAC, UNIVAC I, EDSAC. Programaci�n en lenguaje de m�quina.";
cout<<"\nAplicaciones: C�lculos cient�ficos y militares."<<endl;
cout<<"\nSegunda generaci�n (1950-1960):";

cout<<"Caracter�sticas: Introducci�n de transistores en lugar de v�lvulas. Computadoras m�s peque�as, eficientes y fiables.";
cout<<"\nLogros notables: IBM 1401, UNIVAC 1107. Uso continuado del lenguaje de m�quina.";
cout<<"\nAplicaciones: Procesamiento de datos comerciales y cient�ficos."<<endl;
cout<<"\nTercera generaci�n (1960-1970):";

cout<<"Caracter�sticas: Invenci�n de circuitos integrados. Mayor capacidad de procesamiento y reducci�n de tama�o.";
cout<<"\nLogros notables: IBM System/360, DEC PDP-8. Introducci�n de lenguajes de programaci�n de alto nivel como COBOL y Fortran.";
cout<<"\nAplicaciones: Amplio uso en negocios, investigaci�n y gobierno."<<endl;
cout<<"\nCuarta generaci�n (1970-1980):";

cout<<"Caracter�sticas: Microprocesadores en un solo chip. Auge de las computadoras personales y avances en el rendimiento.";
cout<<"\nLogros notables: Altair 8800, Apple II. Desarrollo de lenguajes de programaci�n m�s accesibles.";
cout<<"\nAplicaciones: Uso en el hogar, oficinas y educaci�n."<<endl;
cout<<"\nQuinta generaci�n (1980-presente):";

cout<<"Caracter�sticas: Avances en microprocesadores, IA y tecnolog�a de chips. Mayor potencia de c�mputo y diversidad de dispositivos.";
cout<<"\nLogros notables: Computadoras personales avanzadas, servidores potentes, dispositivos m�viles, Internet de las cosas.";
cout<<"\nAplicaciones: Amplio espectro, desde tareas cotidianas hasta investigaci�n cient�fica y empresarial. Enfoque en la conectividad y la inteligencia artificial."<<endl;	
}
