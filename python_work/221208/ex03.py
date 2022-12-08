import sys

option = sys.argv[1]
memo = sys.argv[2]

if option =='-a':
    print("option is a")
    f = open("memo.txt",'a')
    f.write(memo)
    f.write("\n")
    f.close()

else:
    f = open("meme.txt",'r')
    memo = f.read()
    f.close()
    print(memo)


