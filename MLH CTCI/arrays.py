# Find the max subarray sum in a given array for a subarray of size k
def max_k_subarray(arr, k):
    max_subarray, current = 0, sum(arr[:k])
    for i in range(k, len(arr)):
        current += arr[i] - arr[i-k]
        max_subarray = max(max_subarray, current)
    return max_subarray


# Find the length of the smallest subarray to equal a given sum
def min_subarray(arr, s):
    """[summary]

    Args:
        arr ([type]): [description]
        s ([type]): [description]

    Returns:
        [type]: [description]
    """
    min_len, current, start = len(arr), 0, 0
    for end in range(len(arr)):
        current += arr[end]
        while current >= s:
            min_len = min(min_len, end - start + 1)
            current -= arr[start]
            start += 1
    return 0 if min_len == len(arr) and sum(arr) != s else min_len


# Find the length of the longest substring of a given string that
# would have the same letters by replacing k letters
def longest_substring(s, k):
    """[summary]

    Args:
        s ([type]): [description]
        k ([type]): [description]

    Returns:
        [type]: [description]
    """    
    char_dict = dict()
    start, max_char, ans = 0, 0, 0
    for end in range(len(s)):
        char_dict[s[end]] = char_dict.get(s[end], 0) + 1
        max_char = max(max_char, char_dict[s[end]])
        if (end - start + 1 - max_char) > k:
            char_dict[s[start]] = char_dict.get(s[start]) - 1
            start += 1
        ans = max(ans, end - start + 1)
    return ans


print(longest_substring("AABABBA", 1))
        