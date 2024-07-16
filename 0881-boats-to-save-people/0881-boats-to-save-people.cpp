class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int x = 0, y = people.size() - 1, n = 0;
        sort(people.begin(), people.end());
        while(x <= y) {
            if(people[x] + people[y] <= limit) {
                n++;
                x++;
                y--;
            } else if(people[x] + people[y] > limit) {
                y--;
                n++;
            }
        }
        return n;
    }
};