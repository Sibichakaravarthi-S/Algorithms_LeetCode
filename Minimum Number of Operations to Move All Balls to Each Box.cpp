class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> result(n, 0);
        
        // Left pass: calculate operations for balls on the left
        int leftBalls = 0;
        int leftOperations = 0;
        
        for(int i = 0; i < n; i++) {
            result[i] += leftOperations;
            if(boxes[i] == '1') {
                leftBalls++;
            }
            leftOperations += leftBalls;
        }
        
        // Right pass: calculate operations for balls on the right
        int rightBalls = 0;
        int rightOperations = 0;
        
        for(int i = n - 1; i >= 0; i--) {
            result[i] += rightOperations;
            if(boxes[i] == '1') {
                rightBalls++;
            }
            rightOperations += rightBalls;
        }
        
        return result;
    }
};