class counting:
  
  def percent_count(self, from_total, to):
    
    result = to / from_total * 100
    return result
  
  def __init__(self):
    
    from_total = int(input("FROM : "))
    to = int(input("TO : "))
    print(self.percent_count(from_total, to))
    
if __name__ == "__main__":
  
  counting()
