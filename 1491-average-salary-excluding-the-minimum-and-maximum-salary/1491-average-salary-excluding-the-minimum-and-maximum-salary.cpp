class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double count = 0;
        int x = 0;
        int y = salary.size();
        for(int i = 0;i<y ;i++)
        {
            if(i>0 && i<(y-1))
            {
                count += salary[i];
                x++;
            }
        }
        count = count / x;
        return count;
    }
};