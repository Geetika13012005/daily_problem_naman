#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3]= {a,b,c};
    sort(arr,arr+3);
    int median=arr[1];
    int total_distance = abs(median - arr[0])+ abs(arr[2]-median);
    cout<<total_distance<<endl;
    return 0;
}