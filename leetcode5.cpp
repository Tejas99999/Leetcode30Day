class Solution {
public:
    int firstUniqChar(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            count=0;
            char temp=s[i];
            for(int j=0;j<s.length();j++)
            {
                if(temp==s[j])
                {
                    count++;
                }

                if(count>1)
                    break;

            }

            if(count==1)
            {
                return i;
            }

        }
        // if(s.length()==1)
        //     return 0;
        return -1;

    }
};
