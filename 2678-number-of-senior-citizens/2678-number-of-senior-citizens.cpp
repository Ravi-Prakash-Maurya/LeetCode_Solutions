// class Solution {
// public:
//     int countSeniors(vector<string>& details) {
//         int count = -1;
//         int x = 0;
//         for(int i = 0; i < details.size(); i++)
//         {
//             string s = details[i].substr(11,2);
//             for (char c : s) {
//                 if (c >= '0' && c <= '9') 
//                 {
//                     x = x * 10 + (c - '0');
//                 }
//             }
//             // x = x / 100;
//             if(x > 60)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (const string& detail : details) {
        int age = stoi(detail.substr(11, 2));
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};