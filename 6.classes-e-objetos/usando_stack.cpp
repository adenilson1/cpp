// usando a memoria stack para alocação de sistemas
#include <iostream>
using namespace std;

class Person{
    public:
    string name;

    Person (string name) : name(name){ cout << "Hello!, my name is " << name << endl; }
    ~Person(){cout << name << " saying goodbay!!" << endl;}
};
Person* createPerson(){
    Person p ("Hanna");
    return &p;
}

int main() {
    Person* pp1;

    {
        Person p1("Peter");
        pp1 = &p1;
    }
    cout << pp1->name << endl;
    
    Person* pp2 = createPerson();
    cout << pp2->name << endl;

    cout << "End of code" << endl;
    return 0;
}