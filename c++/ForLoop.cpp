#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int a,b,i;
cin>>a>>b;
string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};    
for(i=a; i<=b; i++){       
  if(i>9)
  i%2==0? cout<<"even\n":cout<<"odd\n";
  
  else{
      cout<<num[i]<<endl;
  }
}
    
    return 0;
}
