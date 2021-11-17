#include<iostream>
using namespace std;
int main(){
    string inp;
    cout << "Enter a string: ";
    cin >> inp;
    string rev = "";
    for(int i =inp.size(); i >= 0; i--){
        rev += inp[i];
    }
    cout << rev;
    return 0;
}
