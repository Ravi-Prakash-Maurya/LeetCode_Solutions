class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        string result(m + n, '0');
        for (int i = m - 1; i >= 0; i--) 
        {
            int carry = 0;
            for (int j = n - 1; j >= 0; j--) 
            {
                int product = (num1[i] - '0')*(num2[j] - '0')+(result[i + j + 1] - '0')+carry;
                result[i + j + 1] = product % 10 + '0';
                carry = product / 10;
            }
            result[i] += carry;
        }
        // Remove leading zeros
        size_t startPos = result.find_first_not_of('0');
        if (startPos != string::npos) 
        {
            return result.substr(startPos);
        }
        return "0";
    }
};
