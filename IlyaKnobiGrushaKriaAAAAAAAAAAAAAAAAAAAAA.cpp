#include <iostream>
using namespace std;

char answer; 

static void test() {
    for (int i = 0; i < 1;) {
        cout << "Кря! "; 
        cin >> answer; 
        if (answer != '0') continue;
        else i++; 
    }
}


void main()
{
    setlocale(LC_ALL, "Rus");
    test();
}