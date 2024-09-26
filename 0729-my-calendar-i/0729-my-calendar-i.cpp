class MyCalendar {
private:
    vector<pair<int, int>> vec;
public:
    MyCalendar() {}
    bool book(int start, int end) {
        for(auto& p : vec) if(max(start, p.first) < min(end, p.second)) return false;
        vec.push_back({start, end});
        return true;
    }
};