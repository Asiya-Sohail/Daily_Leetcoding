class MinStack(object):
    
    def __init__(self):
        self.stack = []
        self.st = []

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.stack.append(val)
        if not self.st or val <= self.st[-1]:
            self.st.append(val)

    def pop(self):
        """
        :rtype: None
        """
        if self.stack.pop() == self.st[-1]:
            self.st.pop()

    def top(self):
        """
        :rtype: int
        """
        if not self.stack:
            return -1
        else:
            return self.stack[-1] 

    def getMin(self):
        """
        :rtype: int
        """
        if not self.st:
            return 0
        else:
            return self.st[-1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()