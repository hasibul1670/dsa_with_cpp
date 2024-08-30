#include <iostream>
using namespace std;
int main() {
int x ;
    string a = "Hasibul";
    cout << "AT this Point C++--> " <<a.at(1);
    a.at(0)='B';
    cout<<"Modified text ->"<<a;
    return 0;
}