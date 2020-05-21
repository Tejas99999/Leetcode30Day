class StockSpanner {
public:
    vector<int>v;
    StockSpanner() {
        vector<int>v;
    }

    int next(int price) {
        v.push_back(price);
        int count=1;
        int temp=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i=i-2)
        {
            if(temp>=v[i])
                count++;
            else
                break;
            if(i==0)
                break;
            if(temp>=v[i-1])
                count++;
            else
                break;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
