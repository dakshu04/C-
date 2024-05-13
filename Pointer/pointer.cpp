#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int* ptr = &x;
    *ptr = 25;
    cout<<x;
}