def longest_uncommon_ocuurence(a, b):
    if len(a) != len(b): return max(len(a), len(b))
    else: 
        if a != b: return len(a)
        else: return -1


def main():
   print(longest_uncommon_ocuurence(input(), input()))


if __name__ == "__main__":
    main()