import re
s='''
One Little, two little, three litte Indians'''
result = re.sub('little','BIG',s,flags=re.IGNORECASE)
print(result)

