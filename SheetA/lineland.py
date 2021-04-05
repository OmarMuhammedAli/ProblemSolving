def lineland(n):
    cities = [int(city) for city in input().split()]
    lmc, rmc = cities[0], cities[len(cities) - 1]
    for _ in range(n):
        max_cost = max(abs(lmc - cities[_]), abs(rmc - cities[_]))
        try:
            min_cost = min(abs(cities[_ - 1] - cities[_]), abs(cities[_ + 1] - cities[_]))
        except:
            if _ == 0: min_cost = abs(cities[_ + 1] - cities[_])
            else: min_cost = abs(cities[_ - 1] - cities[_])
        print(min_cost, max_cost)

def main():
    n = int(input())
    lineland(n)

if __name__ == "__main__":
    main()