#include <iostream>
#include <string>

using namespace std;

void a()
{
    for (size_t i = 0; i < 5; i++)
    {
        for (int c = 0; c <= i; c++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void b()
{
    for (size_t i = 0; i < 5; i++)
    {
        for (int e = 0; e <= i; e++)
        {
            cout << ' ';
        }
        for (int c = 5 - i; c > 0; c--)
        {
            cout << '*';
        }
        cout << endl;
    }
};

void c()
{
    int numAsterisk{1}, numSpace{3}, step{1};
    for (int i = 0; i < 5; i++) {
        
        if (i == 2) step = -1;
        
        for (int e = 0; e < numSpace; e++) {
            cout << ' ';
        }
        
        for (int a = 0; a < numAsterisk; a++) {
            cout << '*';
        }
        
        for (int e = 0; e < numSpace; e++) {
            cout << ' ';
        }
        
        numAsterisk += 2 * step;
        numSpace    += -1 * step;
        cout << endl;
    }
}

void d()
{
    int numAsterisk{1}, numSpace{3};
    for (int i = 0; i < 4; i++) {
        
        for (int e = 0; e < numSpace; e++) {
            cout << ' ';
        }
        
        for (int a = 0; a < numAsterisk; a++) {
            cout << '*';
        }
        
        for (int e = 0; e < numSpace; e++) {
            cout << ' ';
        }
        
        numAsterisk += 2;
        numSpace--;
        cout << endl;
    }
}

int main()
{
    a();
    b();
    c();
    d();

    return 0;
}