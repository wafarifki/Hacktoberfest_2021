#!/usr/bin/python3

import sys
import random
from string import ascii_letters
from itertools import cycle

filename = str(sys.argv[1])
files = open(f'{filename}', 'r').read().strip()
GREEN = '\033[92m'

def enc(files, key):
    res = ''
    for i,e in zip(files, cycle(key)):
        res += chr( ord(i) ^ ord(e) ) 
    return res

def rand():
    a = ''.join(random.choice(ascii_letters) for x in range(random.randint(8,15)))
    print(f'\nur key: {GREEN}{a}')
    return a

def main():
    with open(f'{filename}.enc','w') as f:
        f.write(enc(files,rand().strip()))

if __name__ == "__main__":
    main()

# What is this? idk just encrypt ur file with xor random key
# The output is adding .enc to your encrypted file
# Usage --> $ python3 xor_w_random.py [your-file-to-encrypt]
