print("HI")
class Father:
    def __init__(self):
        self.prop_father = 500

class Mother:
    def __init__(self):
        self.prop_mother = 300
    
class Son(Father,Mother):
    def __init__(self):
        self.prop_son = 200
    
    def display(self):
        print(self.prop_son)

        Father.__init__(self)
        Mother.__init__(self)
        print(self.prop_father, self.prop_mother)

s = Son()
s.display()