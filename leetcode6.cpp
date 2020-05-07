class Solution {
public:
   int majorityElement(vector<int>& nums) {
//         int count=1,temp;
//         int size=nums.size();
//         for(int i=0;i<nums.size();i++)
//         {
//             count=1;

//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[j]==nums[i])
//                 {
//                     count++;

//                     nums.erase(nums.begin()+j);
//                    // nums.shrink_to_fit();
//                     j--;
//                     temp=nums[j];
//                     cout<<temp;
//                 }
//                 if(count>size/2)
//                     return nums[i];
//             }
//              nums.erase(nums.begin()+i);
//             i--;



//         }
//         return nums[0];


    sort(nums.begin(),nums.end());

    int count = 1, max_ele = -1, temp = nums[0], ele, f=0;

    for(int i=1;i<nums.size();i++)
    {
        // increases the count if the same element occurs
        // otherwise starts counting new element
        if(temp==nums[i])
        {
            count++;
        }
        else
        {
            count = 1;
            temp = nums[i];
        }

        // sets maximum count
        // and stores maximum occured element so far
        // if maximum count becomes greater than n/2
        // it breaks out setting the flag
        if(max_ele<count)
        {
            max_ele = count;
            ele = nums[i];

            if(max_ele>(nums.size()/2))
            {
                f = 1;
                break;
            }
        }
    }

    // returns maximum occured element
    // if there is no such element, returns -1
    return (f==1 ? ele : nums[0]);

    }
};
