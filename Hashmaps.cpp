

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    for(int i=0;i<5;i++){
        mp[i]=1;
    }
    mp[4]=10;
    mp.insert({5,10});
    cout<<mp.begin()<<"   "<<mp.end();
    for(auto &m:mp)
    {
        cout<<m.first<<" : "<<m.second<<endl;
    }
    cout<<"SIZE OF MAP: "<<mp.size()<<endl;
    
    mp.erase(5);
    for(auto &m:mp)
    {
        cout<<m.first<<" : "<<m.second<<endl;
    }
    cout<<"SIZE OF MAP: "<<mp.size()<<endl;
    cout<<".............................";
    mp.clear();
    for(auto &m:mp)
    {
        cout<<m.first<<" : "<<m.second<<endl;
    }
    string fact= mp.empty()?"true":"false";
    cout<<fact;
    return 0;
}