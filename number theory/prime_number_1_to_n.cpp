#include<bits/stdc++.h>
using namespace std;

vector<int> give_prime_from_1_to_n(int n){
    vector<bool> prime_sieve(n+1,true);

    for(int i=2;i*i<=n;i++){
        if(!prime_sieve[i])
            continue;
        for(int j=2;i*j<=n;j++)
            prime_sieve[i*j]=false;
    }

    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(prime_sieve[i])
            ans.push_back(i);
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> ans=give_prime_from_1_to_n(n);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}
