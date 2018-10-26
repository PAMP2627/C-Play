/*#include <iostream>
using namespace std;

const double pi = 3.14;

int main()
{
	
	double area,circuit,radius = 1.5;
	
	area = pi * radius * radius;
	circuit = 2 * pi * radius;
	
	cout << "\tTo Evaluate a Circle\n" << endl;
	
	cout << "Radius:		" << radius << endl
		 << "Circumference:	" << circuit << endl
		 << "Area :		" << area << endl;
		 
	return 0;
	
	}
*/

	
#include <iostream>
using namespace std;

double pi = 3.14,r = 17,luas,keliling;

int main()
{

luas = pi * r * r;
keliling = 2 * pi * r;

cout << "\tMenghitung luas dan keliling lingkaran" << endl
	 << "\t--------------------------------------" << endl
	 << endl
	 << "pi		 : 	" << pi << endl
	 << "jari - jari 	 :	" << r << endl
	 << "Keliling	 :	" << keliling << endl
	 << "Luas		 :	" << luas << endl;
}
