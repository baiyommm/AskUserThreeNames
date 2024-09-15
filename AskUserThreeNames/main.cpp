#include <iostream>
using namespace std;

int main() {
    
    string name1, name2, name3;
    cout << "Enter your name please: " << endl;
    
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, name3);
    
    cout << "Hi " << name1 << "!"<< endl;
    
    return 0;
}
