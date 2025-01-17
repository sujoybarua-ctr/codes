#include <iostream>
using namespace std;

int main() {
    int n=20; 
    if (n <= 0) {
        cout << "invalid input";
    } else {
        int a = 0, b = 1; 
        cout << "first 20 fibonacci seris is ";

        for (int i = 1; i <= n; i++) {
            cout << a << " "; 
            int c = a + b; 
            a= b; 
            b = c; 
        
        }
    }
cout<<"highest number = 4181"<<endl;
cout<<"lowest number = 0";
    return 0;
}