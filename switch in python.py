def myfunc(arg):
    switcher={
        0:"this is case 0",
        1:"this is case 1",
        2:"this is case 2",
        }
    return switcher.get(arg,"nothing")
if __name__ == "__main__":
    arg=1
    print(myfunc(arg))
