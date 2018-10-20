#include <iostream>
using namespace std;

void garis(),pesan(),pesan2(); //rangka

int main()
{
	cout << "Halo,Saya adalah pengantar pesan." << endl;
	cout << endl;
	cout << "Pesannya akan saya tampilkan dibawah." << endl;
	cout << endl;
	garis();
	garis();
	pesan(); //ini adalah pesan yang pertama
	garis();
	garis();
	pesan2(); //ini adalah pesan yang kedua
	
	
	}

void garis()	//Untuk Membuat Garis
	{
	cout << "----------------------------" << endl;
	}
	
void pesan()	//Untuk Menampilkan Pesan
	{
	cout << "Ini adalah pesan pertama" << endl;
	}
	
void pesan2()
	{
	cout << "Ini adalah pesan kedua" << endl;
	}
