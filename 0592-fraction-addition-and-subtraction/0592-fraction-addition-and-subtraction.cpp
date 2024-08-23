class Solution {
public:
    string fractionAddition(string expression) {
        stringstream ss(expression);
        int num = 0, den = 1, num2, den2;
        char op;
        while (ss >> num2 >> op >> den2) {
            num = num * den2 + num2 * den;
            den *= den2;
            int g = gcd(abs(num), den);
            num /= g;
            den /= g;
        }
        return to_string(num) + "/" + to_string(den);
    }
};