#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    while(n--){
    string s,s1,s2;
    cin>>s;
    
    int n =s.length();
    for(int i=0; i<n; i++){
        if(i%2==0){
            s1+=s[i];
        }else{
            s2+=s[i];
        }
    } 
    cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
