class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec;
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 == 0 && i % 5 == 0)
            {
                vec.insert(vec.end(),"FizzBuzz");
            }
            else if(i % 3 == 0)
            {
                vec.insert(vec.end(),"Fizz");
            }
            else if(i % 5 == 0)
            {
                vec.insert(vec.end(),"Buzz");
            }
            else
            {
                string x = to_string(i);
                vec.insert(vec.end(),x);
            }
        }
        return vec;
    }
};