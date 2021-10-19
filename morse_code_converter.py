#Creating a global dictionary which will contain equivalent morse code for alphabets and numbers
equivalentCode = {
    #space
    ' ': '#',
    #numbers
    '1': '.----',
    '2': '..---',
    '3': '...--',
    '4': '....-',
    '5': '.....',
    '6': '-....',
    '7': '--...',
    '8': '---..',
    '9': '----.',
    '0': '-----', 
    #Alphabets
    'a': '.-',    'b': '-...',    'c': '-.-.',    'd': '-..',
    'e': '.',      'f': '..-.',    'g': '--.',      'h': '....',
    'i': '..',    'j': '.---',    'k': '-.-',      'l': '.-..', 
    'm': '--',    'n': '-.',        'o': '---',      'p': '.--.', 
    'q': '--.-',  'r': '.-.',      's': '...',      't': '-', 
    'u': '..-',  'v': '...-',    'w': '.--',      'x': '-..-', 
    'y': '-.--',    'A': '--..',  
    #Special Characters
    '.': '.-.-.-',
    ',': '--..--',
    ':': '---...',
    '"': '.-..-.',
    '\'': '.----.',
    '!': '-.-.--',
    '?': '..--..',
    '@': '.--.-.',
    '-': '-....-',
    ';': '-.-.-.',
    '(': '-.--.',
    ')': '-.--.-',
    '=': '-...-',
}

##### Function to convert a text into morse code ####
def textToMorseCode(text):
     #declaring the variable for morse code
     morseCode = "" 

     #iterate through the given text and then convert each text to code
     for x in text:
         # add a space between each letter
         morseCode += equivalentCode[x.lower()] + ' '

     return morseCode

#### Function to convert a morse code to text ####
def morseCodeToText(code):
    #inverting the key and values in dictionary equivalentCode
    reverseCode = {value:key for key,value in equivalentCode.items()}
    #declaring varaible for text
    text = ""

    #iterate through the given code and convert a code to text
    #splitting the code between each letters 
    for i in code.split(' '):
        text+= reverseCode[i] + ''
    
    return text

#main loop

while True:
    try:
        print("---------------------------- MORSE CODE CONVERTER ------------------------------")
        conversionMode = input("What do you want to convert (text or morse_code) ? \n")
        if conversionMode.lower() == "text":
            #input the normal text and convert it to morse code
            inputText = input("Enter the text to convert: ")
            outputCode = textToMorseCode(inputText)
            print(f'Morse code for {inputText} is \n'+outputCode)
        elif conversionMode.lower() == "morse_code": 
            #input the morse code and convert it to normal text
            inputCode = input("Enter the Morse Code to convert(use # to seperate words and space to sepearate letters): \n")
            outputText = morseCodeToText(inputCode)
            print(f'Equivalent Text for {inputCode} is \n'+outputText)
        else:
            print("Invalid Conversion Mode !!!")
    except:
        print("Invalid Input Provided !!! Please Try Again")        
    reply = input("Do you want to convert again (Y/n)? \n") 
    if reply.lower() != 'y':
        break 

print("!!! Conversion Session Complete !!!\n!!! Thanks for Using !!!\n!!! Coded By: Anish Shilpakar !!!")
