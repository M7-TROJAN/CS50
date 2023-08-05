from cs50 import get_string

text = get_string("Text: ")
num_of_letters = 0
num_of_digits = 0
num_of_special_characters = 0
num_of_words = 1
num_of_sentences = 0

if text:
    for char in text:
        if char.isalpha():
            num_of_letters += 1
        elif char.isnumeric():
            num_of_digits += 1
        elif char in ["?", "!", "."]:
            num_of_sentences += 1
        elif char == " " and text[text.index(char) + 1]:
            num_of_words += 1
        else:
            num_of_special_characters += 1

    letter_percentage = (num_of_letters / num_of_words) * 100
    sentence_percentage = (num_of_sentences / num_of_words) * 100

    # Calculate readability index
    index = round((0.0588 * letter_percentage) - (0.296 * sentence_percentage) - 15.8)

    if index >= 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print("Grade", index)

    exit()
