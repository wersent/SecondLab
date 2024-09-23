#include <iostream>
using std::sqrt;
using std::cin;
using std::endl;

int main(){
    // variant 7
    int A{}, B{}, C{};
    cin >> A >> B >> C;
    std::cout << round((sqrt(pow(A, 2) + pow(B, 2) + pow(C, 2)))*10)/10; 
}