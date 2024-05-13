#include <iostream>

using namespace std;
void toPrintName(){
    cout<<"Your Name is Daksh";
    return;
}

bool toCheck(){
    if(2 != 0){
        return true;
    }
    return false;
}
int main(){
    if(toCheck() == 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}