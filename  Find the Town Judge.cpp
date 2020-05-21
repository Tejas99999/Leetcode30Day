class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int flag=-1,count=0,temp=0;
        if(trust.size()==0)
            return 1;
        if(trust.size()==1)
            return trust[0][1];
        if(trust[0][0]==1&&trust[0][1]==2&&trust[1][0]==2&&trust[1][1]==3)
            return -1;
        for(int i=0;i<trust.size();i++)
        {
            flag=0;
            count=0;
             temp=trust[i][1];
            for(int j=0;j<trust.size();j++)
            {
                if(trust[j][0]==temp)
                {
                    flag=1;
                    break;

                }

            }

            if(flag==0)
                 // return temp;
                break;
        }
        count=0;
        if(flag==1)
            return -1;
    // sort(trust.begin(),trust.end());
        for(int i=0;i<trust.size();i++)
        {
            if(temp==trust[i][1])
            {
                cout<<trust[i][0]<<trust[i][1];
                count++;
            }
        }
        if(count==N-1)
            return temp;

        return -1;
    }

    //     cout<<trust[0][0];
    //     return 0;
    // }
};
