/*
Escuela: Conalepmich Plantel Los Reyes-Santa Clara.
Nombre del Alumno: Javier Alejandro Mendez Rodriguez.
Matricula:121800011-3
Grupo:402.
Carrera:PT-PTB Informatica.
Maestro:Gerardo Arroyo Perez.
Ejercicio Numero:2:Hacer un programa que pida la edad de una persona en la funcion main y la muestre en la funcion mostrar.
*/
#include<iostream.h>
#include<conio.c>
void mostrar(int);
int main()
{
int edad;
clrscr();
cout<<"Cual es tu edad?:";
cin>>edad;
mostrar(edad);
getch();
return 0;
}
void mostrar(int temp)
{
cout<<"Tu edad es: "<<temp<<" Anyos";
}
