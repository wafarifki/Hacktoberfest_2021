def _reversed(value):
  n = len(value)
  temp = ''
  while(n > 0):
    n -= 1
    temp += value[n]
  return temp

inputStr = input('Masukkan sebuah kata : ')

print('Sebelum di balik ', inputStr)

print('Setelah di balik ', _reversed(inputStr))


