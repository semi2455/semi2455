#include <bits/stdc++.h>
using namespace std;

int main(void){
    // Your code here!
    string f;
    cout << "数字?true or false"<<endl;
    cin >> f;
    
    if(f == "true"){
        cout << "小数を含む？true or false" <<endl;
        cin >> f;
        if(f == "true"){
            cout<<"doubleかfloat" << endl;
        }
        else if(f == "false"){
            cout << "int" <<endl;
        }
    }else{
        cout << "stringかchar" << endl;
    }
    
}