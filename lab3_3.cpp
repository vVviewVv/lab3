#include <iostream>
using namespace std;

int main() {
    
    float a = 1;
    float b = 6;
    float c;
    float ans = 0;

    while(b <= 19){
        c = a/b;
        ans = ans+c;
        b = b+1;
    }
    
    cout << "ans=" << ans;

    return 0;
}