#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    
    int age;
    string first_name;
    string last_name;
    int standard;
        
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct student p;
   
    cin>>p.age>>p.first_name>>p.last_name>>p.standard;
    cout<<p.age<<" "<<p.first_name<<" "<<p.last_name<<" "<<p.standard;
    
    
       
    return 0;
}
