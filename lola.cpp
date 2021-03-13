#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include <windows.h>
using namespace std;
using std::ifstream;
using std::ofstream;

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);}

main(){
	
int canti,le,pro,opc,lecan,lepre,suma,ag,resta,i,cual,num;
string nomb,lenom;
cout<<" Buenos dias  ";
gotoxy(3,3);
cout<<" (1) administrador ";
gotoxy(4,6);
cout<<" (2) imprimir ";
gotoxy(5,9);
cout<<" (3) compras";
gotoxy(5,12);	
cout<<"Donde quiere entrar :";
cin>>le;
if(le==1){
	cout<<"para ingresar productos \n";
	
	
		ofstream tiem("pro.txt", ios::app);
		cout<<"Cantidad:";
		cin>>canti;
		cout<<"Nombre:";
		cin>>nomb;
		cout<<"Precio:";
		cin>>pro;
		tiem<<canti;
		tiem<<" ";
		tiem<<pro;
		tiem<<" ";
		tiem<<nomb;
		tiem<<" ";
		tiem<<"\n";
		tiem.close();
	}
if(le==2)
	{
		ifstream tiem("pro.txt");
		while(!tiem.eof()){
		tiem>>lecan>>lepre>>lenom;
	cout<<" \n\t El nombre es: "<<lenom<<" el precio es: "<<lepre<<" la cantidad es: "<<lecan<<"\n";
		}
		}
	
if(le==3)
	{
		ifstream tiem("pro.txt");
		while(!tiem.eof()){
		tiem>>lecan>>lepre>>lenom;
	cout<<" \n\t El nombre es: "<<lenom<<" el precio es: "<<lepre<<" la cantidad es: "<<lecan<<"\n";
		}
cout<<"cuantos productos quieres:";
cin>>cual;
for (i=0; i<cual; i++)
    {
        cout<<"\n ingrese el presio por favor :  ";
        cin>>num;
        suma = suma + num;
    }
gotoxy(18,30);
cout<<"el volor de sus productos es :"<<suma;
Sleep(1000);
system("cls");
gotoxy(4,2);
cout<<"con cuanto dinero pagaras :";
cin>>ag; 
if(ag>suma){
gotoxy(8,4);
for (i=0; i<ag; i++)
    {
        resta = ag - suma;
    }
cout<<"le sobra :"<<resta; 
}
if(suma>ag){
gotoxy(8,4);
for (i=0; i<ag; i++)
    {
        resta = suma-ag;
    }
cout<<"le falta"<<resta;
}if(suma==ag){
	cout<<"la sifra esta completa feliz dia ";
}

	}

}


		
		
	


