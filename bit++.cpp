#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;
    cin >> n;
    int x=0;
    string count;

    for (int i=0;i<n;i++){
        cin>>count;
        if (count.find("++") != string:: npos)  //count contain the statement , find(++) find the ++ in the statement if present then increment the x other
        //otherwise decrement ....npos = is not found special value
        x++;
        else
        x--;
    }
    cout<<x;
    return 0;
}