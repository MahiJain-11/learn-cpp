#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>&nums){
    int candidate =0;
    int count =0;
    for(int val: nums){
        if(count==0){
            candidate = val;
        }
        if(val=candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}
int main(){
    vector<int>nums={2,2,1,2,3,2,7};
    cout<<majorityElement(nums);
    return 0;
}