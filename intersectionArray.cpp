#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int>nums1(n);
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    cin>>m;
    vector<int>nums2(m);
    for(int i=0;i<m;i++){
        cin>>nums2[i];
    }
   unordered_set<int>s(nums1.begin(),nums1.end());
  vector<int>intersection;
  for(int num:nums2){
  if(s.find(num) != s.end()){
    intersection.push_back (num);
    s.erase(num);
  }
  }
  for(int x:intersection)
  cout<<x<<" ";
}