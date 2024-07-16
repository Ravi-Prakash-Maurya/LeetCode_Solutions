class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        bool flag = true;
        // int x ;
        // vector<int> vec(arr.size()-1);
        // for(int i = 0 ; i < arr.size();i++)
        // {
        //     x = (arr[1] - arr[0]);
        //     vec.insert(vec.end(),x);
        //     x = (arr[2] - arr[1]);
        //     vec.insert(vec.end(),x);
        // }
        // if(vec.size() == 1)
        // {
        //     flag = true;
        // }
        // if(vec.size() >= 2)
        // {
        //     for(int i = 0 ; i < vec.size();i++)
        //     {
        //         if(vec[0] != vec[1])
        //         {
        //             flag = false;
        //             // break;
        //         }
        //     }
        // }
            for(int i = 0 ; i< arr.size()-2;i++)
            {
                if((arr[i+2] - arr[i+1])  !=  (arr[i+1] - arr[i]))
                {
                    flag = false;
                }
            }    
        // else if(arr.size() < 1)

        return flag;
    }
};