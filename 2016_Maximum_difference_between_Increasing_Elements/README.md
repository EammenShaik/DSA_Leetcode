<body>
  <h3>LeetCode</h3>
  <h2><a href="https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/">Maximum Difference Between Increasing Elements</a></h2>
  <p>Given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>n</code>, find the <strong>maximum difference</strong> between <code>nums[i]</code> and <code>nums[j]</code> (i.e., <code>nums[j] - nums[i]</code>), such that <code>0 <= i < j < n and nums[i] < nums[j]</code>.</p>
  <p>Return <em>the <strong>maximum difference</strong></em>. If no such <code>i</code> and <code>j</code> exists, return <code>-1</code>.</p>

  <p>&nbsp;</p>
  <p><strong class="Example">Example 1:</strong></p>
  <pre>
    <strong>Input:</strong> nums = [7,1,5,4]
    <strong>Output:</strong> 4
    <strong>Explanation:</strong> The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
    Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.
  </pre>

  <p><strong class="Example">Example 2:</strong></p>
  <pre>
    <strong>Input:</strong> nums = [9,4,3,2]
    <strong>Output:</strong> -1
    <strong>Explanation:</strong> There is no i and j such that i < j and nums[i] < nums[j].
  </pre>

  <p><strong class="Example">Example 3:</strong></p>
  <pre>
    <strong>Input:</strong> nums = [<strong><u>1</u></strong>,5,2,<u><strong>10</strong></u>]
    <strong>Output:</strong> 9
    <strong>Explanation:</strong> The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.
  </pre>
      
  <p>&nbsp;</p>
  <p><strong class="Constraints">Constraints:</strong></p>
  <ul>
    <li><code>n == nums.length</code></li>
    <li><code>2 <= n <= 1000</code></li>
    <li><code>1 <= nums[i] <= 10<sup>9</sup></code></li>
  </ul>
  
</body>
