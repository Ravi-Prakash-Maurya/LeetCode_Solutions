<h2><a href="https://leetcode.com/problems/last-visited-integers/">2899. Last Visited Integers</a></h2><h3>Easy</h3><hr><p>Given an integer array <code>nums</code> where <code>nums[i]</code> is either a positive integer or <code>-1</code>. We need to find for each <code>-1</code> the respective positive integer, which we call the last visited integer.</p>

<p>To achieve this goal, let&#39;s define two empty arrays: <code>seen</code> and <code>ans</code>.</p>

<p>Start iterating from the beginning of the array <code>nums</code>.</p>

<ul>
	<li>If a positive integer is encountered, prepend it to the <strong>front</strong> of <code>seen</code>.</li>
	<li>If <code>-1</code>&nbsp;is encountered, let <code>k</code> be the number of <strong>consecutive</strong> <code>-1</code>s seen so far (including the current <code>-1</code>),
	<ul>
		<li>If <code>k</code> is less than or equal to the length of <code>seen</code>, append the <code>k</code>-th element of <code>seen</code> to <code>ans</code>.</li>
		<li>If <code>k</code> is strictly greater than the length of <code>seen</code>, append <code>-1</code> to <code>ans</code>.</li>
	</ul>
	</li>
</ul>

<p>Return the array<em> </em><code>ans</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,-1,-1,-1]</span></p>

<p><strong>Output:</strong> <span class="example-io">[2,1,-1]</span></p>

<p><strong>Explanation:</strong></p>

<p>Start with <code>seen = []</code> and <code>ans = []</code>.</p>

<ol>
	<li>Process <code>nums[0]</code>: The first element in nums is <code>1</code>. We prepend it to the front of <code>seen</code>. Now, <code>seen == [1]</code>.</li>
	<li>Process <code>nums[1]</code>: The next element is <code>2</code>. We prepend it to the front of <code>seen</code>. Now, <code>seen == [2, 1]</code>.</li>
	<li>Process <code>nums[2]</code>: The next element is <code>-1</code>. This is the first occurrence of <code>-1</code>, so <code>k == 1</code>. We look for the first element in seen. We append <code>2</code> to <code>ans</code>. Now, <code>ans == [2]</code>.</li>
	<li>Process <code>nums[3]</code>: Another <code>-1</code>. This is the second consecutive <code>-1</code>, so <code>k == 2</code>. The second element in <code>seen</code> is <code>1</code>, so we append <code>1</code> to <code>ans</code>. Now, <code>ans == [2, 1]</code>.</li>
	<li>Process <code>nums[4]</code>: Another <code>-1</code>, the third in a row, making <code>k = 3</code>. However, <code>seen</code> only has two elements (<code>[2, 1]</code>). Since <code>k</code> is greater than the number of elements in <code>seen</code>, we append <code>-1</code> to <code>ans</code>. Finally, <code>ans == [2, 1, -1]</code>.</li>
</ol>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,-1,2,-1,-1]</span></p>

<p><strong>Output:</strong><span class="example-io"> [1,2,1]</span></p>

<p><strong>Explanation:</strong></p>

<p>Start with <code>seen = []</code> and <code>ans = []</code>.</p>

<ol>
	<li>Process <code>nums[0]</code>: The first element in nums is <code>1</code>. We prepend it to the front of <code>seen</code>. Now, <code>seen == [1]</code>.</li>
	<li>Process <code>nums[1]</code>: The next element is <code>-1</code>. This is the first occurrence of <code>-1</code>, so <code>k == 1</code>. We look for the first element in <code>seen</code>, which is <code>1</code>. Append <code>1</code> to <code>ans</code>. Now, <code>ans == [1]</code>.</li>
	<li>Process <code>nums[2]</code>: The next element is <code>2</code>. Prepend this to the front of <code>seen</code>. Now, <code>seen == [2, 1]</code>.</li>
	<li>Process <code>nums[3]</code>: The next element is <code>-1</code>. This <code>-1</code> is not consecutive to the first <code>-1</code> since <code>2</code> was in between. Thus, <code>k</code> resets to <code>1</code>. The first element in <code>seen</code> is <code>2</code>, so append <code>2</code> to <code>ans</code>. Now, <code>ans == [1, 2]</code>.</li>
	<li>Process <code>nums[4]</code>: Another <code>-1</code>. This is consecutive to the previous <code>-1</code>, so <code>k == 2</code>. The second element in <code>seen</code> is <code>1</code>, append <code>1</code> to <code>ans</code>. Finally, <code>ans == [1, 2, 1]</code>.</li>
</ol>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>nums[i] == -1</code> or <code>1 &lt;= nums[i]&nbsp;&lt;= 100</code></li>
</ul>
