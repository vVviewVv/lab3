#include <iostream>
#include <string>
using namespace std;

int main (){
    string text1;
    string text2;
    int n;

    cout << "Enter the first text:";
    cin >> text1;
    cout << "Enter the second text:";
    cin >> text2;
    cout << "Enter n:";
    cin >> n;

    while (n>0)
    {
      if((n%2)==0){
        cout << text1 << "\n";
      }else{
        cout << text2 << "\n";
      }
      n-1;
    }
    return 0;
}