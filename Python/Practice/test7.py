class Calculater:
    num1 = 0
    num2 = 0

    def __init__(self, num1,num2) -> None:
        self.num1 = num1
        self.num2 = num2
    
    def add(self):
        return self.num1 + self.num2
    def sub(self):
        return self.num1 - self.num2
    def mul(self):
        return self.num1 * self.num2
    def div(self):
        return self.num1 / self.num2
    def sqr(self):
        return self.num1 ** self.num2
    def rot(self):
        return self.num1 // self.num2


ans = Calculater(4,5)
print(ans.add())
print(ans.sqr())