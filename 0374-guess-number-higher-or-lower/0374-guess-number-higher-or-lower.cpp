/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        long long end = n;
        long long c = end / 2;
        if(guess(start) == 0)
            return start;
        else if(guess(end) == 0)
            return end;
        while(guess(c) != 0)
        {

            if(guess(c) == -1)
            {
                end = c;
                c = (start + end) / 2;
            }
            else if(guess(c) == 1)
            {
                start = c;
                c = (start + end) / 2;
            }
        }
        return c;
    }
};