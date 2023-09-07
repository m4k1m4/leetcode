# Time complexity: O(n)
# Space complexity: O(1)
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        left, right = head, head

        for _ in range(n):
            right = right.next

        if not right:
            return head.next

        while right.next:
            left = left.next
            right = right.next

        left.next = left.next.next

        return head