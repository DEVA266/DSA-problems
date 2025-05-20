# https://leetcode.com/problems/palindrome-number/description/
# method 1 : The bestest way 
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x = str(x)
        reverse = x[::-1]
        if reverse == x :
            return True
        else :
            return False

# method 2 : easy but takes more time
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        """ x = str(x)
        reverse = x[::-1]
        if reverse == x :
            return True
        else :
            return False """
        
        if x<0:
            return False
        else :
            temp = x
            r = 0
            while temp>0:
                r = (r*10)+(temp%10)
                temp = temp/10
            if r == x:
                return True
            else :
                return False