#include <iostream>
#include "fixpointnum.hpp"

using namespace std;

int
main( ) {

	cout << "Fix Point Numbers\n--- ----- -------\n";

	// finde erstmal raus, aus wievielen bytes ein int besteht!
	// bei mir sinds 4 byte = 32 bit
	cout << "sizeof( int ): " << sizeof( int ) << endl;

	// lege ein paar fix point numbers an und addiere schonmal

	FPN<1,1>
	a = 1.,
	b = 2.5,
	c = a + b;

	// zeige, was so los ist

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	return 0;
}
