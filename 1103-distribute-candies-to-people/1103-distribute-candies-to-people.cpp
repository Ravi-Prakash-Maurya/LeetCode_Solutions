class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> vec(num_people);
        int i = 0;
        int count = 1;
        while(candies > 0)
        {
            int x = 0;
            if(candies > count)
                x = count;
            else
                x = candies;
            
            vec[i % num_people] += x;
            
            candies -= count;
            count++;
            i++;
            x = 0;
        }
        return vec;
    }
};