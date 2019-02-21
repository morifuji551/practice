#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *pa;
    pa = &a;
    cout<<"aの値は"<<a<<"です\n";
    cout<<"ポインタaの値は"<<pa<<"です\n";
    return 0;
}