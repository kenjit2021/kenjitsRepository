stone=30
def checkStone(n):
    if(n==0):
        return True
    return False

def getYou():
    global stone
    x=int(input('get Stone:'))
    if(x==0):
        return False
    stone -= x
    return True
def getMe():
    global stone
    input("push any key")
    print("1個get")
    stone = stone -1

#説明
print('交互に石を指定数取る。\n最後の石をとると負け')
while (stone>0):
    print(str(stone)+'個残っています')
    if(getYou() == False):
        continue

    if(checkStone(stone)):
        break

    print(str(stone)+'個残っています')

    getMe()
    if(checkStone(stone)):
        break
print('END')










