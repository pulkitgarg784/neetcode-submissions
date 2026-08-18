class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1 

            # now count is a freq map of letters in the word, we can use this as a key
            res[tuple(count)].append(s) # add string to list with same counts
        return list(res.values())