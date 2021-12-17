#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        //alternative and easy way to do the same
        maxi=max(maxi,arr[i]); //predefine thing to comapre for ,max vlaue
       /*  if(arr[i]>max){
            max= arr[i];
        } */
    }
    return maxi;

}

int getMin(int arr[],int n){
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
        min=arr[i];
                    }
    }
    return min;
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


cout<<"max value is :"<<getMax(arr,size)<<endl;
cout<<"min value is :"<<getMin(arr,size)<<endl;


return 0;






}