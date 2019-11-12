/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Nov 2019 10:49:12 PM PST
 ************************************************************************/

#include<iostream>
#include "init_string.h"
using namespace std;

int main(){
    cout << "hello world" << endl;
    int i;
    
    int x[31]= {0};
    x[1] = 2;
    for(i = 1; i < 15; i++){
        x[2*i] = x[2*i - 1] + 5 * i;
        x[2*i+1] = x[2*i] + 5 * i;
    }

    for(i = 0; i < 30; i++){
        cout << x[i] << " , ";
    }
    cout << endl;

    return 0;
}
