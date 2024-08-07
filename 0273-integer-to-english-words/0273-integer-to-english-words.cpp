class Solution {
public:
    string n(int a) {
        unordered_map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"}, {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}};
        if(a == 0) return "";
        else if(a < 20) return m[a] + " ";
        else if(a < 100) return m[(a / 10) * 10] + " " + n(a % 10);
        else return m[a / 100] + " Hundred " + n(a % 100);
    }
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        int b = num / 1000000000;
        int m = (num / 1000000) % 1000;
        int t = (num / 1000) % 1000;
        int p = num % 1000;
        string s;
        if(b) s += n(b) + "Billion ";
        if(m) s += n(m) + "Million ";
        if(t) s += n(t) + "Thousand ";
        if(p) s += n(p);
        if(s.back() == ' ') s.pop_back();
        return s;
    }
};