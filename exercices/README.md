Solution Proposal#
The algorithm uses the deque data structure to find the maximum in a window. A deque is a double-ended queue where the push and pop operations work in O(1)
O(1)
 at both ends. It acts as our window. The deque stores elements in decreasing order. The front of the deque contains the index for the maximum value in that particular window.

At the start of the algorithm, we search for the maximum value in the first window. The first element’s index is pushed to the front of the deque.
If the current element is smaller than the one whose index is at the back of the deque, then its index is pushed in and becomes the new back.
If the current element is larger than that of the element at the back of the deque, then the back of the deque is popped repeatedly until we find a higher value. Then we push the index of the current element in as the new back.
We will repeat the following steps each time our window moves to the right:

Remove the indices of all elements from the back of the deque, which are smaller than or equal to the current element.
If the element no longer falls in the current window, remove the index of the element from the front.
Push the current element index at the back of the window.
Let’s visualize an example with a window size equal to 3
3
 on an array.
