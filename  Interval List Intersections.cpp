class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>v;
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            int temp=A[i][0];
            int temp1=A[i][1];

            for(int j=0;j<B.size();j++)
            {
                int temp2=B[j][0];
                int temp3=B[j][1];
                 if(temp>=temp2&&temp1<=temp3)
                {

                    v.push_back(std::vector<int>());
                   // cout<<temp<<"\t"<<temp1<<"\n";
                    v[count].push_back(temp);
                    v[count].push_back(temp1);
                    count++;
                }
               else if(temp<=temp3&&temp>=temp2)
                {
                    v.push_back(std::vector<int>());
                  //  cout<<temp<<"\t"<<temp3<<"\n";
                    v[count].push_back(temp);
                    v[count].push_back(temp3);
                    count++;
                }
                else if(temp1>=temp2&&temp1<=temp3)
                {

                    v.push_back(std::vector<int>());
                  //  cout<<temp2<<"\t"<<temp1<<"\n";
                    v[count].push_back(temp2);
                    v[count].push_back(temp1);
                    count++;
                }
                else if(temp<=temp2&&temp1>=temp3)
                {

                    v.push_back(std::vector<int>());
                   // cout<<temp2<<"\t"<<temp3<<"\n";
                    v[count].push_back(temp2);
                    v[count].push_back(temp3);
                    count++;
                }
                else if(temp<temp2&&temp1<temp3)
                   break;
               // cout<<temp2<<"\t"<<temp3<<"\n";

            }
        }
        return v;
    }
};
