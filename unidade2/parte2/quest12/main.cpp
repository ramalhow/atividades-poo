#include <iostream>
#include <ostream>
using std::cout, std::endl;

#include "Time.hpp"

int main() {
	Time t0(11, 50, 59);
    cout << "t0 pré tick: " << t0.toUniversal() << endl;
    t0.tick();
    cout << "t0 pós tick: " << t0.toUniversal() << endl;
    

    Time t1(11, 59, 59);
    cout << "t1 pré tick: " << t1.toUniversal() << endl;
    t1.tick();
    cout << "t1 pós tick: " << t1.toUniversal() << endl;

    
    Time t2(23, 59, 59);
    cout << "t2 pré tick: " << t2.toUniversal() << endl;
    t2.tick();
    cout << "t2 pós tick: " << t2.toUniversal() << endl;
    t2.tick();
    cout << "t2: " << t2.toUniversal() << endl;

	return 0;
}
