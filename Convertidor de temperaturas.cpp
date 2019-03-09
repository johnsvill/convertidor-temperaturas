#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

	float celc=0;
	float fahr=0;
	float kel=0;

void celc_fahr(){
	
	cout<<"Ingrese temperatura en grados Celcius:"<<endl;
	cin>>celc;
	fahr=celc*8+32;
	cout<<"Temperatura en grados Fahrenheit:"<<endl;
	cout<<fahr<<endl;
	system ("pause");
}

void celc_kel(){

	cout<<"Ingrese temperatura en grados Celcius:"<<endl;
	cin>>celc;
	kel=celc+273.15;
	cout<<"Temperatura en grados Kelvin:"<<endl;
	cout<<kel<<endl;
	system("pause");
}

void fahr_celc(){

	cout<<"Ingrese temperatura en grados Fahrenheit:"<<endl;
	cin>>fahr;
	celc=(fahr-32)/1.8;
	cout<<"Temperatura en grados grados Celcius:"<<endl;
	cout<<celc<<endl;
	system("pause");
}

void fahr_kel(){
	
	cout<<"Ingrese temperatura en grados Fahrenheit:"<<endl;
	cin>>fahr;
	kel=(5/9)*(fahr-32)+273.15;
	cout<<"Temperatura en grados Kelvin:"<<endl;
	cout<<kel<<endl;
	system("pause");
}

void kel_celcius(){

	cout<<"Ingrese temperatura en grados Kelvin:"<<endl;
	cin>>kel;
	celc=kel-273.15;
	cout<<"Temperatura en grados Celcius:"<<endl;
	cout<<celc<<endl;
	system("pause");
}

void kel_fahr(){

	cout<<"Ingrese temperatura en grados Kelvin:"<<endl;
	cin>>kel;
	fahr=1.8*(kel-273.15)+32;
	cout<<"Temperatura en grados Fahrenheit:"<<endl;
	cout<<fahr<<endl;
	system("pause");
}

int main(){
	system("color 0a");
	int opcion;
	int result=0;
	while(opcion!=7){
		system("cls");
		cout<<"MENU PRINCIPAL:"<<endl;
		cout<<"1: Celcius-Fahrenheit"<<endl;
		cout<<"2: Celcius-Kelvin"<<endl;
		cout<<"3: Fahrenheit-Celcius"<<endl;
		cout<<"4: Fahrenheit-Kelvin"<<endl;
		cout<<"5: Kelvin-Celcius"<<endl;
		cout<<"6: kelvin-Fahrenheit"<<endl;
		cout<<"7: SALIR"<<endl;
		cout<<"Que opcion desea?"<<endl;
		cin>>opcion;
		if(opcion==1){
			system("cls");
			celc_fahr();
		}
		if(opcion==2){
			system("cls");		
			celc_kel();
		}
		if(opcion==3){
			system("cls");
			fahr_celc();
		}
		if(opcion==4){
			system("cls");
			fahr_kel();
		}
		if(opcion==5){
			system("cls");
			kel_celcius();
		}
		if(opcion==6){
			system("cls");
			kel_fahr();
		}
		
	}
	return 0;
}
