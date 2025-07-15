#include<iostream>
#include<vector> 
#include<unordered_map> 
#include<algorithm>

using namespace std; 

class Solution{
public: 
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res; 
        unordered_map<string, vector<string>> mp; 

        for(string s:strs){
          string key = s; 
          sort(key.begin(), key.end()); 
          mp[key].push_back(s); 
        }
        for(auto [key, group]: mp){
          res.push_back(group); 
        }
        return res; 
      }
};
int main(){
  vector<string> strs= {"eat","tea","tan","ate","nat","bat"}; 
  Solution sol; 
  vector<vector<string>> res = sol.groupAnagrams(strs); 
  for(auto vec: res){
    
    for(string s: vec){
      cout << s << "," ; 
    }
    cout << endl; 
  }
  return 0; 
}
