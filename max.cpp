#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int maxNum; 
    if (a >= b && a >= c)
        
        cout<<"A max_number: " <<a;
    else if (b >= a && b >= c)
        cout<<" B max_number: " <<b;
    else
       cout<<" C max_number: " <<c;

   
    return 0;
}
