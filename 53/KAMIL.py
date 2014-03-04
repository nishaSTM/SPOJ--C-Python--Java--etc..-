# 53. Kamil
#
# Some kids cannot pronounce all letters, some of them they sometimes pronounce correctly and sometimes incorrectly. 
# Kamil sometimes says T instead of K, but he never says K instead of T. Similarly he sometimes says D instead of G.
# Instead of R he sometimes says L and sometimes F. Of course it happens that he pronounces the letter correctly.
# Kamil's father always thinks how many words can mean the word spoken by his son (it doesn't matter if they are real 
#                                                                                                     English words).

# Task

# Write a program which

#    reads from standard input the words spoken by Kamil
#    counts how many different words can that mean
#    writes the outcome on standard output

counter = 1

while counter <= 10:

    testinput = "filipek"
    
    #testinput = raw_input()

    print pow(2,testinput.count('t')+testinput.count('d')+testinput.count('l')+testinput.count('f'))

    counter = counter + 1
