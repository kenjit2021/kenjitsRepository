import random
import pandas as pd

arr1=['東京']*2+['大阪']*2+['横浜']*2
arr2=['前期','後期']*3
arr3=[random.randint(0,100) for i in range(6)]
data = list(zip(arr1,arr2,arr3))
df=pd.DataFrame(data=data,columns=['支店','期間','売上'])
print(df)
