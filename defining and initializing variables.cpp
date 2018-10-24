#include <iostream>
using namespace std;

int main()
{
	
int a(2.5);
int b = '?';
char z = 'a';
int big = 40000;
double hes(1.2E+5);
long large;
char c('\'');
unsigned char ch = '\201';
unsigned size(40000);
float val = 12345.12345;

cout <<"   Pemakaian Memory: "<<endl<<endl;
cout <<"\t"<< sizeof(a) 		 <<" Byte"<<endl;
cout <<"\t"<< sizeof(b) 		 <<" Byte"<<endl;
cout <<"\t"<< sizeof(z) 		 <<" Byte"<<endl;
cout <<"\t"<< sizeof(big) 	 <<" Byte"<<endl;
cout <<"\t"<< sizeof(hes) 	 <<" Byte"<<endl;
cout <<"\t"<< sizeof(large) 	 <<" Byte"<<endl;
cout <<"\t"<< sizeof(c) 		 <<" Byte"<<endl;
cout <<"\t"<< sizeof(ch)   	 <<" Byte"<<endl;
cout <<"\t"<< sizeof(size)     <<" Byte"<<endl;
cout <<"\t"<< sizeof(val)  	 <<" Byte"<<endl;


cout <<"\t"<< sizeof(short) 	<<" Byte"<<endl;
cout <<"\t"<< sizeof(long)	<<" Byte"<<endl;
cout <<"\t"<< sizeof(int)		<<" Byte"<<endl;
cout <<"\t"<< sizeof(char)	<<" Byte"<<endl;
cout <<"\t"<< sizeof(float)	<<" Byte"<<endl;

}
