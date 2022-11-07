#include <iostream>
#include "Cube.h"
#include "Stockage.h"
int main() {
    Cube test(10);
    string message = test.afficheInfo();
    cout << message << endl;
    Stockage test1(10);
    test1.ajouter(&test);
    test1.afficherInfo();
}
