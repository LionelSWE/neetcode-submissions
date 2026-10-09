class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        sortedIntervals = sorted(intervals)
        merged = [sortedIntervals[0]]
        
        for i in range(len(sortedIntervals)):
            if merged[-1][1] >= sortedIntervals[i][0]:
                merged[-1][1] = max(merged[-1][1], sortedIntervals[i][1])
            else:
                merged.append(sortedIntervals[i])
        
        return merged
        