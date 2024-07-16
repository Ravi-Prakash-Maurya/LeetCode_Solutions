class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool flag = true; 
        int x = 0;
        int y = 0;
        for(int i = 0; i < bills.size(); i++)
        {
            if(bills[i] == 5)
            {
                x++;
            }
            else if(bills[i] == 10)
            {
                x--;
                y++;
            }
            else if(bills[i] == 20)
            {
                if(x > 2 && y == 0)
                {
                    x -= 3;
                }
                else
                {
                    y--;
                    x--;
                }
            }
            if(x < 0 || y < 0)
            {
                flag = false;
                break;
            }
        } 
        // if(x < 0 || y < 0)
        // {
        //     flag = false;
        // }
        return flag;
    }
};
// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int n = bills.size(), change5 = 0, change10 = 0;
//         for(int i=0; i<n; i++){
//             if(bills[i] == 5){
//                 change5++;
//             }
//             else if(bills[i] == 10){
//                 if(change5 <= 0){
//                     return false;
//                 }
//                 change5--;
//                 change10++;
//             }
//             else if(bills[i] == 20){
//                 if(change10 > 0 && change5 > 0){
//                     change10--;
//                     change5--;
//                 }
//                 else if(change5 > 2){
//                     change5 -= 3;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             if(change5 < 0 && change10 < 0){
//                 return false;
//             }
//         }

//         return true;
//     }
// };