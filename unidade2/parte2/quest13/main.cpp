#include <iostream>
#include <ostream>
using std::cout, std::endl;

#include "Time.hpp"

int main() {
	Time t_now;
    cout << "Tempo atual: " << t_now.toUniversal() << endl;

	return 0;
}
