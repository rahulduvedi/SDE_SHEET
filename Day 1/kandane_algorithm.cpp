//day 1 problem 4

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int n = nums.size();
    int max_so_far = -10000;//contrants
    int result = -10000;//constraints
    for(int i =0;i<n;i++)
    {
        max_so_far = max(nums[i] , max_so_far + nums[i]);
        result = max(result , max_so_far);
    }
    return result;
}

//driver code
int main()
{
    vector<int>vec = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(vec);
}