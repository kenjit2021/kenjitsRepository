class Person:
    def __init__(self,name,mail,age):
        self.name = name
        self.mail=mail
        self.age=age
    
    def say(self):
        print('name:'+self.name + ' mail:'+ self.mail + ' age:'+str(self.age))

me = Person('taro','@test',10)
me.say()

me.name='T'
me.mail='ss@yahoo'
me.age=10
me.say()
