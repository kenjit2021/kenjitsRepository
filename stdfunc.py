from datetime import date, time, datetime, timedelta
try:

    today= date.today()
    x=int(input('DAYS:'))
    d1=timedelta(days=x)
    print(d1)
    result=today+d1
    print(result.isoformat())

except:
    print('ERR')
finally:
    print('END')


