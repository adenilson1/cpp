#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a; // b copia o valor de a, esses variaveis atuama de forma independente.

    a++;
    b--;

    cout << a << " " << b ;


    return 0;
}