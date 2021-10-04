# Check which element of a list occurs once, with each other element occuring k times
def get_unique_element(lst, k):
    ans = 0
    for bit in range(32):
        for i in lst:
            bit_sum = 0
            if (abs(i) & (1 << bit)) > 0:
                bit_sum += 1
        
        bit_sum %= k
        ans += bit_sum * (2 ** bit)
    
    negative_check = 0
    for i in lst:
        if i == ans:
            negative_check = 1
            break
    
    return ans if negative_check == 1 else -ans

# all element occur 2 times except this number
def get_element_occuring_once(lst):
    ans = 0
    for i in lst:
        ans ^= i
    return ans

if __name__ == '__main__':
    print(get_unique_element([2,2,2,5,5,5,7,7,7,1], 3))
    # print(get_element_occuring_once([3, 3, 1, 2, 2, 4, 5, 6, 5, 6, 4]))