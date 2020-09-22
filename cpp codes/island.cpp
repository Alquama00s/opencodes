//https://www.codechef.com/problems/COAD03
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int t,n;
    vector<int> dpo;
    cin>>t;
    while (t-->0)
    {
        cin>>n;
        dpo.clear();
        dpo.resize(n,0);
        dpo[0]=1;
        for(int i=1;i<n;i++){
            if((i+1)%2==0){
                dpo[i]=min(dpo[i-1]+1,dpo[(i-1)/2]+2);
            }else{
            dpo[i]=dpo[i-1]+1;}
        }
        cout<<dpo[n-1]<<"\n";
    }
    

    return 0;
}