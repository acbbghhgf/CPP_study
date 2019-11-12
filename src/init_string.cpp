/*************************************************************************
	> File Name: src/init_string.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Nov 2019 11:30:16 PM PST
 ************************************************************************/

#include "init_string.h"

using namespace std;

void test_init_string()
{
    string s1;
    string s2 = s1;
    string s3 = "hiya";
    string s4(10, 'c');

    cout << "demo init string : " << endl;
    cout << s1 << "," << s2 << "," << s3 << "," << s4 << endl;
}

