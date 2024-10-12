#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kokoEatBanana(vector<int>&piles,int h){
    int s =1;
    int e = *max_element(piles.begin(),piles.end());
    int result = e;
    while(s<=e){
        int mid = (s+e)/2;
        long long totalTime=0;
        for(int p:piles){
            totalTime+=(p+mid-1)/mid;
        }
        if(totalTime<=h){
            result=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
}
int main(){
    int n,h;
    cin>>n;
    cin>>h;
    vector<int>piles;
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    cout<<kokoEatBanana(piles,h);
return 0;
}
