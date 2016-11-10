def fab(max):
    a, b = 0, 1
    while a < max:
        print "yield ."
        yield a
        print "yield .."
        a, b = b, a+b
        print "yield ..."

class Fab(object):
    def __init__(self, max):
        self.max = max
        self.a, self.b = 0, 1

    def __iter__(self):
        return self

    def next(self):
        if self.a < self.max:
            # wrong !!!
            #self.a = self.b
            #self.b = self.a + self.b
          
            # right !!!
            #tmp = self.a
            #self.a = self.b
            #self.b = tmp + self.b

            self.a, self.b = self.b, self.a + self.b
            return self.a

        raise StopIteration()

if __name__ == "__main__":

    # use yield
    for i in fab(8):
        print i

    print '------------------------'

    # use iteration
    for i in Fab(5):
        print i
