total=100
country="US"
if country=="US":
    if total<=50:
        print("A")
    elif total<=100:
        print("B")
    elif total<=150:
        print("C")
    else:
        print("Free")
        if country=="AU":
            if total<=50:
                print("D")
            else:
                print("E")
