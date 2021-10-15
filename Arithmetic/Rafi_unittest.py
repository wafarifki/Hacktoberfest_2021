import random
import unittest 
        
def run_guess(guess, answer):
    if 0 < guess < 11:
        if guess == answer:
            print('you are genius!')
            return True
    else:
        print('hey kid, I said 1~10')
        return False

answer = random.randint(1,10)
print(answer)
     
while True:
    try:
        guess = int(input('guess a number 1~10 '))
        if (run_guess(guess, answer)):
            break
    except ValueError:
        print('plese enter a number')
        continue

class TestMain(unittest.TestCase):

    def test_run_guess(self):
        test_param = answer
        result = run_guess(test_param, answer)
        self.assertTrue('you are genius!')

    def test_run_guess2(self):
        test_param = 15
        result = run_guess(test_param, answer)
        self.assertTrue('hey kid, I said 1~10')

    def test_run_guess3(self):
        test_param = 'Hi'
        result = test_param
        self.assertEqual(result, ValueError)


unittest.main() 

        


