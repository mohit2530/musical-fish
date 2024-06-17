# Test Driven Development Exercises

Learning how to develop software using TDD is often accomplished while practicing Katas. 
[KataCatalogue](http://codingdojo.org/cgi-bin/index.pl?KataCatalogue) has a number of different kata exercises.


## Kata String Calculator

Create a simple String Calculator with a method `int add(String numbers)`.

### Step 1

    The method can take 0, 1, or 2 numbers and will return their sum. For an empty string it will return 0.

*Sample Output*
```
"" -> returns 0
"1" -> returns 1
"1,2" -> returns 3
```

**Hint** Begin with the simplest test case using an empty string and move to 1 then 2 numbers.

### Step 2

    Allow the add method to handle an unknown amount of numbers.

*Sample Output*
```
"1,5,7" -> returns 13
```

### Step 3

    Allow the add method to handle new lines between numbers (instead of commas)
    
*Sample Output*
```
"1\n2,3" -> returns 6
"3\n5\n2,4" -> returns 14 
```

The input `"1,\n"` is not valid. A comma will not end on the line. You do not need to code for it.

### Step 4 (Bonus)

    Support different delimters. To change a delimiter, the beginning of the string will contain a separate line that looks like "//[delimeter]\n[numbers...]"
    
*Sample Output*
```
//;\n1;2" -> returns 3
//!\n4!9" -> returns 13
```



## Kata Numbers to Words 

It occurs now and then in real life that people want to write about money, especially about a certain amount of money. If it comes to cheques or contracts for example some nations have laws that state that you should write out the amount in words additionally to the amount in numbers to avoid fraud and mistakes. So if you want to transfer 745 $ to someone via cheque you have to fill out to fields:

745.00 (amount in numbers)
seven hundred and forty	 five (amount in words)

### Step 1

Write a converter class that can convert from numbers into words.

**Test Cases to Consider**

* **1 digit numbers** (zero, three, seven)
* **2 digit numbers** (ten, fourteen, twenty-six)
* **3 digit numbers** (two hundred and nine, three hundred, four hundred and ninety-eight)
* **4 digit numbers** (three thousand and four, five thousand and twenty-six, seven thousand and one hundred and eleven)
* **5 digit numbers** (forty thousand, eighty-seven thousand and six hundred and fifty-four)
* **6 digit numbers** (five hundred thousand, eight hundred and three thousand and three hundred and eight, nine hundred and ninety-nine thousand and nine-hundred and ninety-nine)

### Step 2

Writer a converter class that goes from words back into numbers.


## Kata Prime Factor 

Factorize a positive integer number into its prime factors.

Use the TDD approach to write tests that call a single method `factorize()`. Given a positive integer input n, return its prime factors.

1 is always omitted from the result set.

*Sample Output*
```
2 -> returns [2]
3 -> returns [3]
4 -> returns [2, 2]
6 -> returns [2, 3]
7 -> returns [7]
8 -> returns [2, 2, 2]
9 -> returns [3, 3]
10 -> returns [2, 5]
```

Link to [Wikipedia Prime Factors](https://en.wikipedia.org/wiki/Prime_factor)

## Kata Potter 



Once upon a time there was a series of 5 books about a very English hero called Harry. (At least when this Kata was invented, there were only 5. Since then they have multiplied) Children all over the world thought he was fantastic, and, of course, so did the publisher. So in a gesture of immense generosity to mankind, (and to increase sales) they set up the following pricing model to take advantage of Harry’s magical powers.



One copy of any of the five books costs 8$. If, however, you buy two different books from the series, you get a 5% discount on those two books. If you buy 3 different books, you get a 10% discount. With 4 different books, you get a 20% discount. If you go the whole hog, and buy all 5, you get a huge 25% discount.



Note that if you buy, say, four books, of which 3 are different titles, you get a 10% discount on the 3 that form part of a set, but the fourth book still costs 8$.



Your mission is to write a piece of code to calculate the price of any conceivable shopping basket, giving as big a discount as possible.



Write tests that call a single method `double getCost(int[] books)`. Given an array of integers representing the various books purchased, calculate the cost as a decimal.



```

2 copies of the first book

2 copies of the second book

2 copies of the third book

1 copy of the fourth book

1 copy of the fifth book



(answer: $51.20)

```



**Clues**

- This Kata looks easy to start but there is a level that introduces complexity. However, consider that when you calculate the above basket, it isn't `5 * 8 * 0.75 + 3 * 8 *0.9`. It is actually `4 * 8 * 0.8 + 4 * 8 * 0.8`. The trick is to write code intelligent enough to notice two sets of four books is cheaper than a set of five and a set of 3.