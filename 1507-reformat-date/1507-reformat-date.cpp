class Solution {
public:
    string reformatDate(string t) {
        map<string, string> n = {{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}};
        string y = t.substr(t.size() - 4), m = n[t.substr(t.size() - 8, 3)], d = t.substr(0, t.find(" ")), q = d.substr(0, d.size() - 2);
        return y + "-" + m + "-" + (q.size() == 1 ? ("0" + q) : q);
    }
};