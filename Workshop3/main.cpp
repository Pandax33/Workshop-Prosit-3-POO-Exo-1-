#include <iostream>
#include "Cube.h"
int main() {
    Cube test(10);
    int test1=test.getCote();
    cout << test1 << endl;
    int test2=test.getAire();
    cout << test2 <<endl;
    int test3 = test.getPerimetre();
    cout << test3 <<endl;
    string message = test.afficheInfo();
    cout << message << endl;
}
