class Solution {
public:
    void clear(int a[])
    {
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
    }
    vector<int> findAnagrams(string s, string p) {
//         vector<int>v;
// //         if(p.length()==s.length())
// //         {
// //             if(p==s)
// //             {
// //                 v.push_back(0);
// //                 return v;
// //             }
// //         }
// //         if(p.length()>s.length())
// //             return v;
// //         sort(p.begin(),p.end());
// //         for(int i=0;i<s.length()-p.length()+1;i++)
// //         {
// //             string temp;
// //             temp=s.substr(i,p.length());
// //             sort(temp.begin(),temp.end());
// //             //cout<<temp<<"\n";
// //             if(p==temp)
// //             {
// //                 v.push_back(i);
// //             }

// //         }
//         int a[26];
//         // clear(a);
//         std::fill(a, a+26, 0);
//              if(p.length()==s.length())
//         {
//             if(p==s)
//             {
//                 v.push_back(0);
//                 return v;
//             }
//         }
//         if(p.length()>s.length())
//             return v;

//         for(int i=0;i<s.length();i++)
//         {
//             int flag=0;
//             string temp;
//            temp=s.substr(i,p.length());
//             cout<<temp<<"\n";
//             if(temp.length()==p.length())
//             {
//                 for(int j=0;j<temp.length();j++)
//                 {
//                     int temp1=temp[j]-'a';
//                     a[temp1]++;
//                     int temp2=p[j]-'a';
//                     a[temp2]--;
//                 }
//                 for(int i=0;i<26;i++)
//                 {
//                     if(a[i]!=0)
//                     {
//                         flag=1;
//                         break;
//                     }
//                 }
//                 // clear(a);
//                 std::fill(a, a+26, 0);
//                 if(flag==0)
//                     v.push_back(i);
//             }

//        }

//         return v;
        vector<int> result;
        if (p.empty() || s.empty()) {
            return result;
        }

        vector<int> cnts(26);
        for (const auto& c : p) {
            ++cnts[c - 'a'];
        }

        for (int left = 0, right = 0; right < s.length(); ++right) {
            --cnts[s[right] - 'a'];
            while (left <= right && cnts[s[right] - 'a'] < 0) {
                ++cnts[s[left++] - 'a'];
            }
            if (right - left + 1 == p.length()) {
                result.emplace_back(left);
            }
        }
        return result;
    }
};
