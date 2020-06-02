class Solution {
public:

    vector<int> countBits(int num) {
        vector<int>v;
        if(num==0)
        {
            v.push_back(0);
            return v;
        }
        v.push_back(0);
        if(num==0)
            return v;
        v.push_back(1);
        if(num==1)
            return v;
        int i=2;
        int temp=0;
        for(int j=2;j<=num;j++)
        {
            if(j<pow(2,i))
            {
                //int temp=j-pow(2,i-1);
                int no1=v[temp++]+1;
                v.push_back(no1);
            }
            else
            {
                i++;
                temp=0;
                j--;
                continue;
            }

        }
        return v;
    }
};
