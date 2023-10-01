#An Anagram is a word or phrase formed by 
# rearranging the letters
# of a different word or phrase, 
# typically using all the original letters 
# exactly once.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sorted_s=sorted(s)
        sorted_t=sorted(t)
        return sorted_s==sorted_t