// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // for(int i=1,j=n;i<=n;i=i+2,j=j-2)
        // {
        //     if(isBadVersion(i))
        //         return i;
        //     else if(isBadVersion(i+1))
        //         return i+1;
        //     if()
        // }
        // return 0;
        for(int j=n;j>=1;j=j-10)
        {
            if(isBadVersion(j))
            {
                if(isBadVersion(j-10))
                    continue;
                else
                {
                    for(int i=j;i>=j-10;i--)
                    {
                        if(!isBadVersion(i))
                            return i+1;

                    }
                }
            }
        }
        return 0;
    }
};
