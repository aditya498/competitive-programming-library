#include<bits/stdc++.h>
using namespace std;

class euclid_tripet{
    public:
        int x;
        int y;
        int gcd;
};

euclid_tripet extended_euclid(int a,int b){    
    if(b==0){
        euclid_tripet ans;
        ans.x=1;
        ans.y=0;
        ans.gcd=a;
        return ans;
    }

    euclid_tripet temp=extended_euclid(b,a%b);
    
    euclid_tripet ans;
    ans.gcd=temp.gcd;
    ans.x=temp.y;
    ans.y=temp.x-(a/b)*temp.y;

    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    euclid_tripet ans=extended_euclid(a,b);
    cout<<ans.x<<" "<<ans.y<<endl;
}