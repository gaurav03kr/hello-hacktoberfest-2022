#include<iostream>
using namespace std;

void subset(string s,string curr="",int i=0)
{
    if(i==s.length())
        cout<<curr;
        return ;
    subset(s,curr,i+1);
    subset(s,curr + s[i],i+1);
    
}

int main()
{
    int i;
    string s,curr;
    cin>>s;
    subset(curr);
    return 0;
}