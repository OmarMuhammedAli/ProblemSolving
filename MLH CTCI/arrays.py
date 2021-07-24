def max_k_subarray(arr, k):
    max_subarray, current = 0, sum(arr[:k])
    for i in range(k, len(arr)):
        current += arr[i] - arr[i-k]
        max_subarray = max(max_subarray, current)
    return max_subarray

print(max_k_subarray([6, 3, 5, 7, 9, 0, 2], 3))
        