#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

// int n;
// cin>>n;
// int m=47;
//  long long fact = 1;
//  for(int i=2;i<=n;i++){
//      fact=(fact*i)%m;
//  }
//  cout<<fact<<"\n";

// cout<<INT_MAX<<"\n";
// cout<<sizeof(m)<<endl;
//  int a = -12;
// cout<<a;
//  int a,b;
//  cin>>a>>b;
//  cout<<a<<" "<<b<<endl;
// 


int n;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"not prime no."<<endl;
    }
    
    i=i+1;
}



}