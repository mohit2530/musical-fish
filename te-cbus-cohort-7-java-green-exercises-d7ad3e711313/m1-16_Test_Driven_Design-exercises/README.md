# Test Driven Development Exercises

Learning how to develop software using TDD is often accomplished while practicing Katas. 
[KataCatalogue](http://codingdojo.org/cgi-bin/index.pl?KataCatalogue) has a number of different kata exercises.

Work on your own to solve the following exercises while using the TDD approach.

## Kata Fizz Buzz

### Step 1

Write a program that returns numbers as Strings, but only if the number is between 1 and 100. But for multiples of three return "Fizz" instead of the number and for the multiples of five return "Buzz". For numbers which are multiples of both three and five return "FizzBuzz?".

Write tests that call a single method `String fizzBuzz(int number)`. Given a positive integer input n, return the FizzBuzz output as a string.

*Sample Output*
```
1 ->  returns "1"
2 -> returns "2"
3 -> returns "Fizz"
4 -> returns "4"
5 -> returns "Buzz" 
15 -> returns "FizzBuzz"
... etc up to 100
```

* Any number outside of the boundaries should return empty string -> ""

** Test Cases**

- What happens if 0 is passed in?
- What happens if 101 is passed in?
- What test cases can we come up with for the core FizzBuzz exercise?

### Step 2

- A number is fizz if it is divisible by 3 or it has a 3 in it
- A number is buzz if it is divisible by 5 or it has a 5 in it


[Link](http://codingdojo.org/cgi-bin/index.pl?KataFizzBuzz)



## Kata Roman Numerals

### Step 1

The Romans were a clever bunch. They conquered most of Europe and ruled it for hundreds of years.  One thing they never discovered  was the number zero. This made writing and dating extensive histories of their exploits 
slightly more challenging, but the system of numbers they came up with is still in use today. For example the BBC uses Roman numerals to date their programes.

The Romans wrote numbers using letters - I, V, X, L, C, D, M. (notice these letters have lots of straight lines and are hence easy to hack into stone tablets)

The Kata says you should write a function to convert from normal numbers to Roman Numerals: eg

*Sample Output*
```
1 ---> I
10 --> X
7 ---> VII
```

There is no need to be able to convert numbers larger than about 3000. (The Romans themselves didn't tend to go any higher)

Note that you can't write numerals like "IM" for 999. Wikipedia says: Modern Roman numerals ... are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. To see this in practice, consider the ... example of 1990. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII.

**Clues**
- what are the best data structures for storing all the numeral letters? (I, V, D, M etc)

[How Roman Numerals Work](http://www.novaroma.org/via_romana/numbers.html)

### Step 2

Write a function to convert in the other direction from Roman Numeral to digit.

