#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1,s2;
    cin>>s1>>s2;
    
    string c = s1+s2;
    
    int n1 = s1.size();
    int n2 = s2.size();
    int n3 = c.size();
    
   
    
    s1[0] = s2[0];
    s2[0] = c[0];
    
    
    cout<<n1<<" "<<n2<<"\n";
    cout<<c<<"\n";
    cout<<s1<<" "<<s2;
    
    
    
    return 0;
}
