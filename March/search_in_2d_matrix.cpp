class Solution {
public:
    bool binary_search(vector<int> v , int n, int target)
    {
        int l = 0;
        int h = n-1;
        int mid;
        while( l <= h)
        {
            mid = l + (h-l)/2;
            if(v[mid] == target)
            {
                return true;
            }
            else if(v[mid] < target)
            {
                l = mid +1;
            }
            else
            {
                h = mid -1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m;i++)
        {
            if(target >= matrix[i][0] && target <= matrix[i][n-1])
            {
                return binary_search(matrix[i],n,target);
            }
        }
        return false;
    }
};