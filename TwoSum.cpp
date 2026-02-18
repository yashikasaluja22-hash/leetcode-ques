#include <iostream>
#include <vector>
// answer of Two Sum problem of leetcode
using namespace std;
int main() {
class Solution{
public:
vector<int> twoSum(vector<int>& nums, int target){
for(int i = 0; i < nums.size(); i++){
    for(int j = i + 1; j < nums.size(); j++){
        if(nums[i] + nums[j] == target){
            return {i, j};
        }
    }
}
return {};
}
};

}
//in leetcode iostream, vector or any header file, using namspace std and return 0 wali cheez already hai 
// so don't write them
// and in leetcode u need to write function only, type of function u need to complete the code
//in leetcode also it sensitive about the name used in function, so use name whatever leetcode has provided