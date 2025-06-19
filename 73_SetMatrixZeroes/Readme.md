<body>
    <h3>LeetCode</h3>
    <h2><a href="https://leetcode.com/problems/set-matrix-zeroes/">Set Matrix Zeroes</a></h2> 
    <p>Given an <code>m x n</code> integer matrix <code>matrix</code>, if an element is <code>0</code> , set its entire row and column to <code>0</code>'s.</p>
    <p>You must do it <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in place</a></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2020/08/17/mat1.jpg" alt="" width="541" height="141">
<pre>
<strong>Input:</strong> matrix = [[1,1,1],[1,0,1],[1,1,1]]
<strong>Output:</strong> [[1,0,1],[0,0,0],[1,0,1]]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2020/08/17/mat2.jpg" alt="" width="591" height="141">
<pre>
<strong>Input:</strong> matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
<strong>Output:</strong>[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
</pre>

<p><strong class="Constraints:">Constraints:</strong></p>
<ul>
    <li><code>m == matrix.length</code></li>
    <li><code>n == matrix[0].length</code></li>
    <li><code>1 <= m, n <= 200</code></li>
    <li><code>-2<sup>31</sup> <= matrix[i][j] <= 2<sup>31</sup> - 1</code></li>
</ul>

<p><strong class="Follow up">Follow up:</strong></p>
<ul>
    <li>A straightforward solution using <code>O(mn)</code> space is probably a bad idea.</li>
    <li>A simple improvement uses <code>O(m + n)</code> space, but still not the best solution.</li>
    <li>Could you devise a constant space solution?</li>
</ul>

</body>
