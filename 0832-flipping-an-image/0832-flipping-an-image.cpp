class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int x = image.size();
        int y = image[0].size();
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j <= ((y / 2) - 1); j++)
            {
                int temp = image[i][j];
                image[i][j] = image[i][y-j-1];
                image[i][y-j-1] = temp;
            }
            for(int j = 0; j < y; j++)
            {
                if(image[i][j] == 1)
                {
                    image[i][j] = 0;
                }
                else  if(image[i][j] == 0)
                {
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};