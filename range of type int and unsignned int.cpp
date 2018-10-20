/*By 
 * Putra Amar Mukti Pamungkas
 * 	 BLC Telkom Klaten
 */
#include <iostream>
#include <climits> //definisi dari INT_MIN. ...
using namespace std;

int main()
{
	cout << "jarak angka dari tipe data"
		 << endl << endl;
	cout << "Tipe		Minimal		Maximal"
		 << endl
		 << "-----------------------------------"
		 << endl;
		 
	cout << "char		" << CHAR_MIN << "		"
						  << CHAR_MAX << endl;
						  
	cout << "unsigned char " << "		0		"
							<< UCHAR_MAX << endl;
		 
		 
	cout << "int		" << INT_MIN << "		"
						  << INT_MAX << endl;
						  
	cout << "unsigned int " << "		0		"
							<< UINT_MAX << endl;
		 
		 
	cout << "long		" << LONG_MIN << "		"
						  << LONG_MAX << endl;
						  
	cout << "unsigned char " << "		0		"
							<< ULONG_LONG_MAX << endl;
		 
	return 0;
}
