#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int total = 0;
    int qty = 0;

    while (number != -1) {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if(number != -1){
            total += number;
            qty++;
        }
        
    }
    // cast = converte uma variavel em outra. tipo int em double
    double avg = ((double) total) / qty;

    cout << avg << endl;
    
    return 0;
}