class MyCalendarTwo {
private:
    vector<pair<int, int>> vec;
    vector<pair<int, int>> arr;
public:
    MyCalendarTwo() {}
    bool book(int start, int end) {
        for(auto p : arr) if(max(start, p.first) < min(end, p.second)) return false;
        for (auto p : vec) {
            int s = max(start, p.first), e = min(end, p.second);
            if (s < e) arr.push_back({s, e});
        }
        vec.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */