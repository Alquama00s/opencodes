//https://leetcode.com/problems/top-k-frequent-elements/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<queue>
using namespace std;
typedef pair<int,int> pd;
struct myComp { 
    constexpr bool operator()( 
        pair<int, int> const& a, 
        pair<int, int> const& b) 
        const noexcept 
    { 
        return a.second < b.second; 
    } 
};
template<typename K, typename V>
void print_map(std::unordered_map<K,V> const &m)
{
	for (auto const& pair: m) {
		std::cout << "{" << pair.first << ": " << pair.second << "}\n";
	}
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int low=nums[0];
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        //print_map(freq);
        priority_queue<pd,vector<pd>,myComp> pq;
        unordered_map<int,int>::iterator it;
        for(auto pair:freq){
        pq.push(pair);
    }
        for(int i=0;i<k;i++){
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
    }
};
int main(){
    std::ios::sync_with_stdio(0);
    vector<int> data,res;
    int k;
    Solution s;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        data.push_back(temp);
    }
    cin>>k;
    res=s.topKFrequent(data,k);
    for(int i=0;i<res.size();i++){
        std::cout<<res[i]<<" ";
    }std::cout<<"\n";
    return 0;
}