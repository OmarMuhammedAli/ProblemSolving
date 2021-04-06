def discarded_cards(n):
    q1 = [i for i in range(1, n+1)]
    q2 = []
    for _ in range(n):
        if len(q1) <= 1: break
        q2.append(q1.pop(0))
        q1.append(q1.pop(0))
    return q2, q1


while True:
    n = int(input())
    if n == 0: break
    cards = discarded_cards(n)
    print(cards)
    print(f"Discarded cards: {', '.join(map(str, cards[0]))}")
    print(f'Remaining card: {cards[1][0]}')