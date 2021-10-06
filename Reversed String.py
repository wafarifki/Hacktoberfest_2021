def _reversed(value):
  n = len(value)
  temp = ''
  while(n > 0):
    n -= 1
    temp += value[n]
  return temp

inputStr = input('Input your text : ')

print('Before reversed ', inputStr)

print('After reversed ', _reversed(inputStr))


