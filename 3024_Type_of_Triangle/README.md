<body>
  <h3>LeetCode</h3>
  <h2><a href="https://leetcode.com/problems/type-of-triangle/description/">Type of Triangle</a></h2> 
  <img src="https://img.shields.io/badge/DIFFICULTY-EASY-green">
  <p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>3</code> which can form the sides of a triangle.</p>
  <ul>
    <li>A triangle is called <strong>equilateral</strong> if it has all sides of equal length.</li>
    <li>A triangle is called <strong>isosceles</strong> if it has exactly two sides of equal length.</li>
    <li>A triangle is called <strong>scalene</strong> if all its sides are of different lengths.</li>
  </ul>
  <p><em>Return a string representing the type of triangle that can be formed or</em> <code>"none"</code> <em>if it <strong>cannot</strong> form a triangle.</em></p>
  
  <p>&nbsp;</p>
  <p><strong class="example">Example 1:</strong></p>
  <pre>
  <strong>Input:</strong> nums = [3,3,3]
  <strong>Output:</strong> "equilateral"
  <strong>Explanation:</strong> Since all the sides are of equal length, therefore, it will form an equilateral triangle.
  </pre>

  <p><strong class="example">Example 2:</strong></p>
  <pre>
  <strong>Input:</strong> nums = [3,4,5]
  <strong>Output:</strong> "scalene"
  <strong>Explanation:</strong>
  nums[0] + nums[1] = 3 + 4 = 7, which is greater than nums[2] = 5.
  nums[0] + nums[2] = 3 + 5 = 8, which is greater than nums[1] = 4.
  nums[1] + nums[2] = 4 + 5 = 9, which is greater than nums[0] = 3. 
  Since the sum of the two sides is greater than the third side for all three cases, therefore, it can form a triangle.
  As all the sides are of different lengths, it will form a scalene triangle.
  </pre>

  <p>&nbsp;</p>
  <p><strong class="Constraints">Constraints:</strong></p>
  <ul>
    <li><code>nums.length == 3</code></li>
    <li><code>1 <= nums[i] <= 100</code></li>
    </ul>
  
</body>
