/*class Solution {
public:
    void dfs(vector<vector<int>>& image, int old, int newColor, int sr, int sc)
    {
        if (sr >= 0 && sc >= 0 && sr < image.size() && sc < image[0].size() && image[sr][sc] == old)
        {
            image[sr][sc] = newColor;
            dfs(image, old, newColor, sr + 1, sc);
            dfs(image, old, newColor, sr, sc + 1);
            dfs(image, old, newColor, sr - 1, sc);
            dfs(image, old, newColor, sr, sc - 1);
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor)
            return image;
        int old = image[sr][sc];
        image[sr][sc] = newColor;
        dfs(image, old, newColor, sr + 1, sc);
        dfs(image, old, newColor, sr, sc + 1);
        dfs(image, old, newColor, sr - 1, sc);
        dfs(image, old, newColor, sr, sc - 1);
        return image;
    }
};*/