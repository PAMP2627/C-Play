#include <iostream> //pendeklarasian dari cin dan cout
#include <cstdlib>	//rancangan dari srand(), rand():
					//void srand(unsigned int seed);
					//int rand(void);
using namespace std;
int main()
{

unsigned int seed;
int z1,z2,z3;

cout << "	--- Random Numbers ---	\n" << endl;
cout << "To initialize the random number generator, "
	 << "\n please enter an integer value: ";
cin	 >> seed;		//masukkan bilangan yang dengan bernialai integer

srand(seed);		//dan gunakan utnuk argument 
					//angka acak berkelanjutan.

z1 = rand();		//menghitung 3 angka acak.
z2 = rand();
z3 = rand();

cout << "\nThree random number: "
	 << z1 << "	  " << z2 << "	 " << z3 << endl;
	 


}
