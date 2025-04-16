#include <iostream>
#include <string>

using namespace std;
static const string asterisk{"*"};

void a() {
    string txt{asterisk};
    for (size_t i = 0; i < 5; i++)
    {
        cout << txt << endl;
        txt += asterisk;
    }
}
void b() {
    string txt{5, asterisk};
    for (size_t i = 0; i < 5; i++)
    {
        cout << txt << endl;
        txt[i] = ' ';
    }
};

int main() {
    a();
    b();
    return 0;
}