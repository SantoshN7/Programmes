import json
x=()
with open('tex.txt','r') as f:
    x=json.load(f)
f.close()
print(x)


