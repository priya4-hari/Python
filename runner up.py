# Find the Runner-Up Score! in Python - Hacker Rank Solution
if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    # Find the Runner-Up Score! in Python - Hacker Rank Solution START
    print(sorted(list(set(arr)))[-2])
    # Find the Runner-Up Score! in Python - Hacker Rank Solution END
