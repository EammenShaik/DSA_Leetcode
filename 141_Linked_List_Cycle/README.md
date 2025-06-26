<body>
  <h3>LeetCode</h3>
  <h2><a href="https://leetcode.com/problems/linked-list-cycle/description/">Linked List Cycle</a></h2> 
  <p>Given <code>head</code>, the head of a linked list, determine if the linked list has a cycle in it.</p>
  <p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the <code>next</code> pointer. Internally, <code>pos</code> is used to denote the index of the node that tail's <code>next</code> pointer is connected to. <strong>Note that <code>pos</code> is not passed as a parameter</strong>.</p>
  <p>Return <code>true</code> <em>if there is a cycle in the linked list</em>. Otherwise, return <code>false</code>.</p>

  <p>&nbsp;</p>
  <p><strong class="example">Example 1:</strong></p>
  <img src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" width="300", height="150">
  <pre>
  <strong>Input:</strong> head = [3,2,0,-4], pos = 1
  <strong>Output:</strong> true
  <strong>Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
  </pre>

  <p><strong class="example">Example 2:</strong></p>
  <img src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png">
  <pre>
  <strong>Input:</strong> head = [1,2], pos = 0
  <strong>Output:</strong> true
  <strong>Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 0th node.
  </pre>

  <p><strong class="example">Example 3:</strong></p>
  <img src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png">
  <pre>
  <strong>Input:</strong> head = [1], pos = -1
  <strong>Output:</strong> false
  <strong>Explanation:</strong> There is no cycle in the linked list.
  </pre>

  <p>&nbsp;</p>
  <p><strong class="Constraints">Constraints:</strong></p>
  <ul>
    <li>The number of the nodes in the list is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
    <li><code>-10<sup>5</sup> <= Node.val <= 10<sup>5</sup></code></li>
    <li><code>pos</code> is <code>-1</code> or a <strong>valid</strong> index in the linked-list.</li>
    </ul>

  <p>&nbsp;</p>
  <p><strong>Follow up:</strong> Can you solve it using <code>0(1)</code> (i.e. constant) memory?</p>
  
</body>
