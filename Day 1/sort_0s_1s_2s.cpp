#include<iostream>
#include<vector>
using namespace std;

//day 1 problem 5

void sortColors(vector<int>& nums)
{
    int low =  0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid <= high)
    {
        switch(nums[mid])
        {
            case 0:
                swap(nums[mid++] , nums[low++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[high--], nums[mid]);
                    break;
        }   
    }
}

//driver code

void display(vector<int>& nums)
{
    for(int i =0;i<nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>vec = {0,1,2,2,1,2,0};
    sortColors(vec);
    display(vec);
}