class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
            return true;
        else
        {
            float y=float(coordinates[0][1]-coordinates[coordinates.size()-1][1]);
            float x=float(coordinates[0][0]-coordinates[coordinates.size()-1][0]);
            cout<<x<<"\t"<<y<<"\n";
            for(int i=1;i<coordinates.size()-1;i++)
            {
                cout<<coordinates[i][1]-coordinates[0][1]<<"\t"<<coordinates[i][0]-coordinates[0][0]<<"\n";
                if((float)((coordinates[i][1]-coordinates[0][1])*x)==(float)((coordinates[i][0]-coordinates[0][0])*y))
                {
                    cout<<((coordinates[i][1]-coordinates[0][1])/y)<<"\t"<<((coordinates[i][0]-coordinates[0][0])/x);
                    continue;
                }
                else
                    return false;
            }
            return true;
        }
       // return false;

    }
};
