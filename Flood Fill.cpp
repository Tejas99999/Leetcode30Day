class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // if(sr<0||sc<0||sr>=image.size()||sc>image[0].size())
        //     return image;
        // int oldcolor=image[sr][sc];
        // if(oldcolor==newColor)
        //     return image;
        // else
        // {
        //     image[sr][sc]=newColor;
        //     floodFill(image,sr+1,sc,newColor);
        //     floodFill(image,sr,sc+1,newColor);
        //     floodFill(image,sr-1,sc,newColor);
        //     floodFill(image,sr,sc-1,newColor);
        // }
        // return image;
        int temp=image[sr][sc];
       return floodFill1(image,sr,sc,newColor,temp);





    }
     vector<vector<int>> floodFill1(vector<vector<int>>& image, int sr, int sc, int newColor, int temp)
     {
          if(sr<0||sc<0||sr>=image.size()||sc>image[0].size())
            return image;
        int oldcolor=image[sr][sc];
        if(oldcolor==newColor)
            return image;
        else if(oldcolor==temp)
        {
            image[sr][sc]=newColor;
            floodFill1(image,sr+1,sc,newColor,temp);
            floodFill1(image,sr,sc+1,newColor,temp);
            floodFill1(image,sr-1,sc,newColor,temp);
            floodFill1(image,sr,sc-1,newColor,temp);
        }
        return image;
     }


};
