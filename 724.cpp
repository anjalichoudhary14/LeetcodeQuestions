class Solution {
    public int pivotIndex(int[] nums) {
           int totalSum = 0;
        // Initialize 'leftsum' as sum of first i numbers, not including nums[i]...
        int leftsum = 0;
        // Traverse the elements and add them to store the totalSum...
        for (int ele : nums)
            totalSum += ele;
        // Again traverse all the elements through the for loop and store the sum of i numbers from left to right...
        for (int i = 0; i < nums.length; leftsum += nums[i++])
          
            if (leftsum * 2 == totalSum - nums[i])
                return i;       // Return the pivot index...
        return -1;   
    }
}

//java