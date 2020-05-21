class Solution {
public:
     void clear(int a[])
    {
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
    }
    bool checkInclusion(string s1, string s2) {
//         if (s1.empty() || s2.empty()) {
//             return false;
//         }

//         vector<int> cnts(26);
//         for (const auto& c : s1) {
//             ++cnts[c - 'a'];
//         }

//         for (int left = 0, right = 0; right < s2.length(); ++right) {
//             --cnts[s2[right] - 'a'];
//             while (left <= right && cnts[s2[right] - 'a'] < 0) {
//                 ++cnts[s2[left++] - 'a'];
//             }
//             if (right - left + 1 == s1.length()) {
//                 // result.emplace_back(left);
//                 return true;
//             }
//         }
//         return false;
//     }



                int a[26];
        // clear(a);
        std::fill(a, a+26, 0);
             if(s1.length()==s2.length())
        {
            if(s1==s2)
            {
               // v.push_back(0);
                return true;
            }
        }
        if(s1.length()>s2.length())
            return false;

        for(int i=0;i<s2.length();i++)
        {
            int flag=0;
            string temp;
           temp=s2.substr(i,s1.length());
          //  cout<<temp<<"\n";
            if(temp.length()==s1.length())
            {
                for(int j=0;j<temp.length();j++)
                {
                    int temp1=temp[j]-'a';
                    a[temp1]++;
                    int temp2=s1[j]-'a';
                    a[temp2]--;
                }
                for(int i=0;i<26;i++)
                {
                    if(a[i]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                // clear(a);
                std::fill(a, a+26, 0);
                if(flag==0)
                  //  v.push_back(i);
                    return true;
            }

       }

        return false;
    }
};
