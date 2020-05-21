class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int maxtemp=A[0];
        int maxperm=A[0];
        for(int i=1;i<A.size();i++)
        {
            maxtemp=max(A[i],maxtemp+A[i]);

            maxperm=max(maxperm,maxtemp);
            // cout<<maxtemp<<"\t"<<maxperm<<"\n";
        }
        int sum=0;
        int least=-40000;
        for(int i=0;i<A.size();i++)
        {
            if(least<A[i])
                least=A[i];
            sum=sum+A[i];
            A[i]=-A[i];
        }

        int maxtemp1=A[0];
        int maxperm1=A[0];
        for(int i=1;i<A.size();i++)
        {
            maxtemp1=max(A[i],maxtemp1+A[i]);

            maxperm1=max(maxperm1,maxtemp1);
            // cout<<maxtemp1<<"\t"<<maxperm1<<"\n";
        }
        if(max(maxperm,sum+maxperm1)==0)
            return least;
        return max(maxperm,sum+maxperm1);
            // //         for(int i=A.size()/2+1;i<A.size()+A.size()/2+1;i++)
// //         {
// //             maxtemp1=max(A[i%A.size()],maxtemp1+A[i%A.size()]);

// //             maxperm1=max(maxperm1,maxtemp1);
// //             cout<<i<<"\t"<<maxtemp1<<"\t"<<maxperm1<<"\n";

// //         }
//         for(int i=1;i<A.size();i++)
//         {
//             int x=((i+A.size()/2))%A.size();
//             maxtemp1=max(A[x],maxtemp1+A[x]);

//             maxperm1=max(maxperm1,maxtemp1);
//             cout<<x<<"\t"<<maxtemp1<<"\t"<<maxperm1<<"\n";
//         }
// //         return max(maxperm,maxperm1);
//       int max_so_far = INT_MIN, max_ending_here = 0,
//        start =0, end = 0, s=0,flag=0;

//     for (int i=0; i<2*A.size(); i++ )
//     {
//        int  x=i%A.size();
//         if(i==A.size())
//             flag=1;
//         if(flag==1)
//         {
//             if(x==s)
//             {
//                 max_so_far=max_so_far-A[s];
//                 max_ending_here=max_ending_here-A[s];
//                 s++;
//                 s=s%A.size();
//             }
//         }
//         max_ending_here += A[x];

//         if (max_so_far < max_ending_here)
//         {
//             max_so_far = max_ending_here;
//             start = s;
//             end = i;
//         }

//         if (max_ending_here < 0)
//         {
//             max_ending_here = 0;
//             s = i + 1;
//         }
//     }
//     cout << "Maximum contiguous sum is "
//         << max_so_far << endl;
//     cout << "Starting index "<< start
//         << endl << "Ending index "<< end << endl;
//         return max_so_far;
    }
};
