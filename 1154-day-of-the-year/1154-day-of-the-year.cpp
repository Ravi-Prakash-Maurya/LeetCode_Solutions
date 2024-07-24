class Solution {
public:
    int dayOfYear(string d) {
        int Y = stoi(d.substr(0, 4)), M = stoi(d.substr(5, 2)), D = stoi(d.substr(8, 2)), x = D;
        vector<int> vec({31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31});
        if(Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0)) vec[1] = 29;
        for(int i = 0; i < M - 1; i++) x += vec[i];
        return x;
    }
};