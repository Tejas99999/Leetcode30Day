class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.length())
            return "0";
        int count=0;




//         for(int i=0;i<num.length();i++)
//         {
//             if(i==0)
//             {
//                 if(num[i]>num[i+1])
//                 {
//                     num.erase(i,1);
//                     i--;
//                     count++;
//                 }
//             }
//             else
//             {
//                 if((num[i]-'0')>(num[i+1]-'0')&&(num[i]-'0')>=(num[i-1]-'0'))
//                 {
//                     cout<<i;
//                     num.erase(i,1);
//                     i--;
//                     cout<<count;
//                     count++;
//                 }

//             }
//             if(count==k)
//                   break;
//         }
//          if(count<k)
//             {
//                 cout<<"yead";
//                 num.erase(num.length()-1-(k-count),k-count);
//             }
//             if(num[0]=='0')
//             {
//                 while(num[0]=='0')
//                     num.erase(0,1);
//             }
//             if(num.length()==0)
//                     return "0";
//             return num;

  for(int i=0;i<num.length()-1;i++)
        {


                if(num[i]>num[i+1]&&i<num.length()-1)
                {
                    num.erase(i,1);
                    i=-1;
                    count++;
                }


            if(count==k)
                  break;
        }
         if(count<k)
            {
                cout<<"yead";
                num.erase(num.length()-(k-count),k-count);
            }
            if(num[0]=='0')
            {
                while(num[0]=='0')
                    num.erase(0,1);
            }
            if(num.length()==0)
                    return "0";
            return num;


    }
};
