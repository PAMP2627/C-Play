/* By Putra Amar Mukti Pamungkas
 * 		
 * BLC Telkom Klaten
 * 
 * Program Hello World dengan menggunakan lebih dari satu bahasa
 * */


#include <iostream>
using namespace std;

char pilih;

int main(){


cout << "  Menyapa Dunia Dalam Berbagai Bahasa  "<<"\n";
cout << "==================By====================="<<"\n";
cout << "========================================="<<"\n";
cout << "=======Putra Amar Mukti Pamungkas========"<<"\n";
cout << "========================================="<<"\n";
cout << "===========BLC Telkom Klaten============="<<"\n";
cout << "\n";
cout << "=============Daftar Bahasa==============="<<"\n"; 
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" ____________________"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|a.bahasa Indonesia  |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<	"|b.bahasa Inggris    |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|c.bahasa jerman     |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|d.bahasa Jepang     |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|e.bahasa Arab       |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|f.bahasa Italia     |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|g.bahasa Turki      |"<<"\n";
cout <<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<< "|h.bahasa Spanyol____|"<<"\n";
cout <<"\n";
cout << "Pilih bahasa yang anda inginkan : ";
cin >> pilih;


if(pilih == 'a'){
	cout <<"\n" << "Halo Dunia! (^_^)"<<"\n"; //bahasa Indonesia
	}

else if(pilih == 'b') {
	cout <<"\n" << "Hello World! (^_^)"<<"\n"; // bahasa Inggris	
	}

else if(pilih == 'c') {
	cout <<"\n" << "Hallo Welt! (^_^)"<<"\n"; // bahasa Jerman
	} 

else if(pilih == 'd') {
	cout <<"\n" << "Kon'nichiwa sekai! (^_^)"<<"\n"; // bahasa Jepang
	}
	
else if(pilih == 'e') {
	cout <<"\n" << "marhabaan bialealam! (^_^)"<<"\n"; // bahasa Arab
	}
	
else if(pilih == 'f') {
	cout <<"\n" << "Ciao mondo! (^_^)"<<"\n"; // bahasa Italia
	}

else if(pilih == 'g') {
	cout <<"\n" << "Selam Dünya! (^_^)"<<"\n"; // bahasa Turki
	}

else if(pilih == 'h') {
	cout <<"\n" << "Hola Mundo! (^_^)"<<"\n"; // bahasa Spanyol
	}
				
else cout << "Maaf,pilihlah bahasa yang ada di list";
	

}
