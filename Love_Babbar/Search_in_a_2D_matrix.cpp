class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        // aakha ni size shu che ok ane m mare matrix na pehla elemnet ni size shu cheok
        int m = matrix[0].size();
        int l = 0;
        int h = (m * n) - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            int row = mid / m;
            int column = mid % m;
            if (matrix[row][column] == target)
            {
                return true;
            }
            else if (matrix[row][column] > target)
            {
                h = mid - 1;
            }
            else if (matrix[row][column] < target)
            {
                l = mid + 1;
            }
            mid = (l + h) / 2;
        }
        return false;
    }
};
// This is the method jema dar vakhte 2D ne 1D ma convert kare che ok

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
