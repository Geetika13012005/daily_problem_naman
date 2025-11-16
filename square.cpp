#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>ans;
    while (t--)
    {
        
        vector<int> s(4);
        for(int i=0;i<4;i++) {
            cin>>s[i];
        }
            sort(s.begin(),s.end());
        if (s[0]== s[1] && s[1]==s[2] && s[2]==s[3])
        
            ans.push_back("YES");
        else    
            ans.push_back("NO");
        
    }
    for(string x:ans)
    cout<<x<<"\n";
    return 0;
        
}