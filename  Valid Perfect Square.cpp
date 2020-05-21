class Solution {
public:
    bool isPerfectSquare(int num) {
       for(long i=1;i<=num;i=i*10)
       {

           cout<<i;
           if(i*i<=num)
           {
               if(i*i==num)
                   return true;
               for(long j=i;j<i*10;j++)
               {
                    if(j*j==num)
                        return true;
                   if(j*j>num)
                       return false;
               }
           }
           else
               continue;
       }
        return false;
    }
};
