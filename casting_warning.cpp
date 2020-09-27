#include <iostream>

using namespace std;

int main()
{
	float a = -3.5;
	unsigned int b;
	b = a;
	cout << b << endl; // INTEL : 4294967293, ARM : 0
	cout << static_cast<unsigned int>(static_cast<int>(a)) << endl; // 4294967293
	
	return 0;
}
