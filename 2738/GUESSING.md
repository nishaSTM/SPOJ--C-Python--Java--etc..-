Here is the rule of the game: The computer generates a number from 000000 to 999999, and you should guess the number.

Everytime, the computer will tell you the count of all i from 0..5 that guess[i]==target[i] (A). And the count of all (i,j) from (0..5,0..5) that guess[i]==target[j]&&i!=j (B).

If you find a bug, please contact me. 


My Approach
-----------

Try all of the following (http://codepad.org/GTSDxses) : 

000000
111111
222222
333333
444444
555555
666666
777777
888888
999999

The above will tell us which digits are used and the count for each as hint A is "count(guess[i]==target[i]); i being the digits place"

Mine was 1,3,5,6,7,7

Use 135,677 as 135677 and 677135 for again hint A, as 0 false, 1 true

If it works split further as 1,35,6,77 and find the working positions for again hint A, 0 false, 1 true
