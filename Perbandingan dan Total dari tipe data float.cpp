#include <iostream>
using namespace std;

int main(){

float x = 123.456F,
	  y = 76.543F,
	  sum;

sum = x + y;

cout << "Total:	"
	 << x << " + " << y << " = " << sum << endl;
	 
cout << "Difference: "
	 << x << " - " <<  y  << " = " << (x - y) << endl;


sum = x + y;
cout << "Total: "
	 << x << " + " << y << " = " << sum << endl; 
	 
cout << "Difference: " 
	 << x << " - " << y << " = "<< (x - y) << endl;


}
