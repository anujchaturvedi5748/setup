#include<bits/stdc++.h>
using namespace std;

int SumArray(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int size;
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cin>>arr[i];

}

cout<<"Sum of the ARRAY is :"<<SumArray(arr,size)<<endl;






}