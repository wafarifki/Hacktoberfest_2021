import random
play = 'y'

def game(ll, ul):
    chances = 7
    number = random.randint(ll, ul)
    print("\nIm thinking of a number between {} and {}".format(ll, ul))
    print("\nYou have 7 chances to guess the right number.\n")
    numberChoice = int(input("Guess the number -> "))
    
    while numberChoice != number:
        chances -= 1
        if chances>0:
            if numberChoice > ul or numberChoice < ll:
                print("\nInvalid input!\nPlease input a number between {} and {}".format(ll,ul))
            elif numberChoice > number and numberChoice < ul:
                print("\nA little too high! Remaining chances {}".format(chances))
            elif numberChoice < number:
                print("\nA little too low!! Remaining chances {}".format(chances))
            numberChoice = int(input("Please try again -> "))
        else:
            print("\nYou lost! The number was {}\n".format(number))
            break 
    else:
        print('\nCorrect!! Great Guess!\n')
    

while play.lower() != 'n':
    option = int(input("Enter Difficulty Level (1\\2\\3) -> "))
    if option == 1:
        game(0,10)  

    elif option == 2:
        game(0,30)

    elif option == 3:
        game(0,100)
    play = input("Want to play again? (y/n) -> ")
print('Thank you for playing my game!')
