class Solution:
    def romanToInt(self, s: str) -> int:
        decode = { 'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000 }
        sums, prev = 0, None
        for ch in s:
            if prev:
                if (ch == 'V' or ch == 'X') and prev == 'I': sums -= 2*decode[prev]
                elif (ch =='L' or ch == 'C') and prev == 'X': sums -= 2*decode[prev]
                elif (ch == 'D' or ch == 'M') and prev == 'C': sums -= 2*decode[prev]
            prev = ch
            sums += decode[ch]
        return sums
