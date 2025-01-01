class Solution {
public:
    int findTheWinner(int n, int k) {
        // approach 1
        // vector<int>circle;
        // for(int i=1;i<=n;i++)
        // {
        //     circle.push_back(i);
        // }

        // int startIndex=0;
        // while(circle.size()>1)
        // {
        //     int removalIndex = (startIndex+k-1)%(circle.size());
        //     circle.erase(circle.begin()+removalIndex);
        //     startIndex = removalIndex;
        // }
        // return circle.front();

        // approach 2
        queue<int>q;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        int startIndex = 0;
        while(q.size()>1)
        {
            for(int i=0;i<k-1;i++)
            {
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }
        return q.front();
    }
};