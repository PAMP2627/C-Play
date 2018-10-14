/*
 * By Putra Amar Mukti Pamungkas
 * Simple CLI Calculator
 * C++ COde
 */


#include <iostream>
using namespace std;



int a,b;
char pilih;

int main()
{

cout <<"==========Kalkulator==CLI=========="<<"\n";
cout <<"================By================="<<"\n";
cout <<"======Putra Amar Mukti Pamungkas==="<<"\n";
cout <<"\n";
cout << "masukkan angka : ";
cin >> a;
cout << "masukkan angka : ";
cin >> b;
cout <<"\n";
cout <<"pilihlah operasi perhitungan :"<<"\n";
cout <<"\n";
cout <<"a.pertambahan" << "\n";
cout <<"b.pengurangan"<< "\n";
cout <<"c.perkalian" <<"\n";
cout <<"d.pembagian"<<"\n";
cout <<"\n";
cout <<"pilih : ";
cin >> pilih;
if(pilih == 'a')
{
cout << "hasil angka setelah ditambah : "<< a + b;
cout <<"\n";		
}

else if(pilih == 'b')
{
cout << "hasil angka setelah dikurang : "<< a - b;
cout <<"\n";		
}

else if(pilih == 'c')
{
cout << "hasil angka setelah dikali : "<< a * b;
cout <<"\n";		
}

else if(pilih == 'd')
{
cout << "hasil angka setelah dibagi : "<< a / b;
cout <<"\n";		
}
else cout << "Maaf silahkan masukkan pilihan yang sudah tersedia ";





		
}

