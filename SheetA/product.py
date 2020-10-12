def product(a, b):
    return a * b

def main():
    inp = []
    while True:
        num = input()
        if len(num) < 1: break
        inp.append(int(num))
    
    lst = [product(inp[i], inp[i + 1]) for i in range(0, len(inp), 2)]
    print(*lst, sep='\n')
if __name__ == '__main__':
    main()