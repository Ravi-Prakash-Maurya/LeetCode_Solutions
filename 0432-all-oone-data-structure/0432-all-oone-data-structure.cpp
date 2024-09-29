class AllOne {
public:
    unordered_map<string,int> m;
    set<pair<int,string>> s;
    AllOne() { m.clear(); }
    void inc(string key) {
        int n = m[key];
        m[key]++;
        s.erase({n, key});
        s.insert({n+1, key});
    }
    void dec(string key) {
        int n = m[key];
        m[key]--;
        s.erase({n, key});
        if(m[key] > 0) s.insert({n-1, key});
        else m.erase(key);
    }
    string getMaxKey() {
        if(!s.empty()) return s.rbegin()->second;
        return "";
    }
    string getMinKey() {
        if(!s.empty()) return s.begin()->second;
        return "";
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */