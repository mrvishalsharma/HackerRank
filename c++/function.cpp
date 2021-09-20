#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void max_of_four(int a, int b, int c, int d){
    if(a > b && a > c && a > d){
        cout<<a<<endl;
    }
    else if(b > c && b > d){
        cout<<b<<endl;
    }
    else if(c > d){
        cout<<c<<endl;
    }
    else{
        cout<<d<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,d; 
    cin>>a>>b>>c>>d;
    max_of_four(a, b, c,d);
    return 0;
}
