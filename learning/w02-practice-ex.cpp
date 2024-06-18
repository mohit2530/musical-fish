#include <iostream>

/*
 1. The parameter weekday is true if it is a weekday, and the parameter vacation is true if we are on
 vacation. We sleep in if it is not a weekday or we're on vacation. Return true if we sleep in.
 sleepIn(false, false) → true
 sleepIn(true, false) → false
 sleepIn(false, true) → true
 */
bool sleepIn(bool weekday, bool vacation)
{
	return weekday || vacation;
}

/*
 2. We have two monkeys, a and b, and the parameters aSmile and bSmile indicate if each is smiling.
 We are in trouble if they are both smiling or if neither of them is smiling. Return true if we
 are in trouble.
 monkeyTrouble(true, true) → true
 monkeyTrouble(false, false) → true
 monkeyTrouble(true, false) → false
 */
bool monkeyTrouble(bool aSmile, bool bSmile)
{
	if (aSmile || bSmile)
	{
		return true;
	}
	else if (!aSmile || !bSmile)
	{
		return true;
	}
	return false;
}

/*
 3. Given two int values, return their sum. Unless the two values are the same, then return double their sum.
 sumDouble(1, 2) → 3
 sumDouble(3, 2) → 5
 sumDouble(2, 2) → 8
 */
int sumDouble(int firstNumber, int secondNumber)
{
	if (firstNumber == secondNumber)
	{
		return 2 * (firstNumber + secondNumber);
	}
	else
		return firstNumber + secondNumber;
}

/*
 4. Given an int n, return the absolute difference between n and 21, except return double the absolute
 difference if n is over 21.
 diff21(19) → 2
 diff21(10) → 11
 diff21(21) → 0
 diff21(22) → 2
 diff21(-10) → 31
 */

int diff(int number)
{
	if (number >= 21)
	{
		return 2 * (number - 21);
	}
	else
	{
		return 21 - number;
	}
}

/*
 5. We have a loud talking parrot. The "hour" parameter is the current hour time in the range 0..23.
 We are in trouble if the parrot is talking and the hour is before 7 or after 20. Return true if
 we are in trouble.
 parrotTrouble(true, 6) → true
 parrotTrouble(true, 7) → false
 parrotTrouble(false, 6) → false
 */

bool parrotTrouble(bool isTalking, int hour)
{
	if (isTalking)
	{
		if (hour <= 7 && hour >= 20)
		{
			return true;
		}
		return false;
	}
	return false;
}

/*
 6. Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.
 makes10(9, 10) → true
 makes10(9, 9) → false
 makes10(1, 9) → true
 */
bool makes10(int firstNumber, int secondNumber)
{
	if (firstNumber == 10 || secondNumber == 10 || (firstNumber + secondNumber == 10))
	{
		return true;
	}
	return false;
}

/*
 7. Given 2 int values, return true if one is negative and one is positive. Except if the parameter
 "negative" is true, then return true only if both are negative.
 posNeg(1, -1, false) → true
 posNeg(-1, 1, false) → true
 posNeg(-4, -5, true) → true
 */

bool posNeg(int firstNumber, int secondNumber, bool negativeParam)
{
	if (negativeParam)
	{
		if (firstNumber < 0 && secondNumber < 0)
		{
			return true;
		}
		return false;
	}
	else if (firstNumber < 0 || secondNumber < 0)
	{
		return true;
	}
	return false;
}

/*
 8. Return true if the given non-negative number is a multiple of 3 or a multiple of 5.
 (Hint: Think "mod".)
 or35(3) → true
 or35(10) → true
 or35(8) → false
 */

bool or35(int number)
{
	if (number % 3 == 0)
	{
		return true;
	}
	else if (number % 5 == 0)
	{
		return true;
	}
	return false;
}

/*
 9. Given two temperatures, return true if one is less than 0 and the other is greater than 100.
 icyHot(120, -1) → true
 icyHot(-1, 120) → true
 icyHot(2, 120) → false
 */

bool icyHot(int firstTemp, int secondTemp)
{
	if (firstTemp < 0 && secondTemp > 100)
	{
		return true;
	}
	else if (firstTemp > 100 && secondTemp < 0)
	{
		return true;
	}
	return false;
}

/*
 10. Given 2 int values, return true if either of them is in the range 10..20 inclusive.
 in1020(12, 99) → true
 in1020(21, 12) → true
 in1020(8, 99) → false
 */

bool in1020(int firstNumber, int secondNumber)
{
	if (firstNumber >= 10 && firstNumber <= 20)
	{
		return true;
	}
	else if (secondNumber >= 10 && secondNumber <= 20)
	{
		return true;
	}
	return false;
}

/*
 11. We'll say that a number is "teen" if it is in the range 13..19 inclusive. Given 3 int values,
 return true if 1 or more of them are teen.
 hasTeen(13, 20, 10) → true
 hasTeen(20, 19, 10) → true
 hasTeen(20, 10, 13) → true
 */

bool hasTeen(int firstAge, int secondAge, int thirdAge)
{
	if ((firstAge >= 13 && firstAge <= 19) || (secondAge >= 13 && secondAge <= 19) ||
		(thirdAge >= 13 && thirdAge <= 19))
	{
		return true;
	}
	return false;
}

/*
 12. We'll say that a number is "teen" if it is in the range 13..19 inclusive. Given 2 int values,
 return true if one or the other is teen, but not both.
 loneTeen(13, 99) → true
 loneTeen(21, 19) → true
 loneTeen(13, 13) → false
 */

bool loneTeen(int firstNumber, int secondNumber)
{
	if (firstNumber >= 13 && firstNumber <= 19)
	{
		if (secondNumber >= 13 && secondNumber <= 19)
		{
			return false;
		}
		return true;
	}
	else if (secondNumber >= 13 && secondNumber <= 19)
	{
		if (firstNumber >= 13 && firstNumber <= 19)
		{
			return true;
		}
		return false;
	}
}

/*
 13. Given three int values, a b c, return the largest.
 intMax(1, 2, 3) → 3
 intMax(1, 3, 2) → 3
 intMax(3, 2, 1) → 3
 */

int intMax(int first, int second, int third)
{
	int maxValue = first;
	if (second > maxValue)
	{
		maxValue = second;
	}
	else if (third > maxValue)
	{
		maxValue = third;
	}
	return maxValue;
}

/*
 14. Given 2 int values, return true if they are both in the range 30..40 inclusive, or they are both
 in the range 40..50 inclusive.
 in3050(30, 31) → true
 in3050(30, 41) → false
 in3050(40, 50) → true
 */
bool int3050(int first, int second)
{
	if (first >= 30 && first <= 40)
	{
		if (second >= 30 && second <= 40)
		{
			return true;
		}
		return false;
	}
	else if (second >= 30 && second <= 40)
	{
		if (first >= 30 && first <= 40)
		{
			return true;
		}
		return false;
	}
	return false;
}

/*
 15. Given 2 positive int values, return the larger value that is in the range 10..20 inclusive,
 or return 0 if neither is in that range.
 max1020(11, 19) → 19
 max1020(19, 11) → 19
 max1020(11, 9) → 11
 */
int max1020(int first, int second)
{
	if (first > second)
	{
		if (first >= 10 && first <= 20)
		{
			return first;
		}
		return second;
	}
	else if (second > first)
	{
		if (second >= 10 && second <= 20)
		{
			return second;
		}
		return first;
	}
	return 0;
}

/*
 16. When squirrels get together for a party, they like to have cigars. A squirrel party is successful
 when the number of cigars is between 40 and 60, inclusive. Unless it is the weekend, in which case
 there is no upper bound on the number of cigars. Return true if the party with the given values is
 successful, or false otherwise.
 cigarParty(30, false) → false
 cigarParty(50, false) → true
 cigarParty(70, true) → true
 */

bool cigarParty(int cigars, bool isWeekend)
{
	if (!isWeekend)
	{
		if (cigars >= 40 && cigars <= 60)
		{
			return true;
		}
	}
	else if (isWeekend)
	{
		if (cigars >= 40)
		{
			return true;
		}
	}
	return false;
}

/*
 17. You and your date are trying to get a table at a restaurant. The parameter "you" is the stylishness
 of your clothes, in the range 0..10, and "date" is the stylishness of your date's clothes. The result
 returned will be 0 if you did not get the table, 1 if you might get the table, and 2 if you did get
 the table. If you or your date is very stylish (8 or more), then the result is 2 (yes). With the
 exception that if either of you has style of 2 or less, then the result is 0 (no). Otherwise the
 result is 1 (maybe).
 dateFashion(5, 10) → 2
 dateFashion(5, 2) → 0
 dateFashion(5, 5) → 1
 */

int dateFashion(int you, int date)
{
	if (you >= 8 || date >= 8)
	{
		return 2;
	}
	else if (you <= 2 || date <= 2)
	{
		return 0;
	}
	return 1;
}

/*
 18. The squirrels in Palo Alto spend most of the day playing. In particular, they play if the temperature
 is between 60 and 90 (inclusive). Unless it is summer, then the upper limit is 100 instead of 90. Given
 an int temperature and a boolean isSummer, return true if the squirrels play and false otherwise.
 squirrelPlay(70, false) → true
 squirrelPlay(95, false) → false
 squirrelPlay(95, true) → true
 */

bool squirrelPlay(int temp, bool isSummer)
{
	if (isSummer)
	{
		if (temp >= 60 && temp <= 100)
		{
			return true;
		}
		return false;
	}
	else
	{
		if (temp >= 60 && temp <= 90)
		{
			return true;
		}
		return false;
	}
}

/*
 19. You are driving a little too fast, and a police officer stops you. Write code to compute the result,
 encoded as an int value: 0=no ticket, 1=small ticket, 2=big ticket. If speed is 60 or less, the
 result is 0. If speed is between 61 and 80 inclusive, the result is 1. If speed is 81 or more, the
 result is 2. Unless it is your birthday -- on that day, your speed can be 5 higher in all cases.
 caughtSpeeding(60, false) → 0
 caughtSpeeding(65, false) → 1
 caughtSpeeding(65, true) → 0
 */

int caughtSpeeding(int speed, bool isBirthday)
{
	if (isBirthday)
	{
		if (speed <= 65)
		{
			return 0;
		}
		else if (speed > 65 && speed <= 85)
		{
			return 1;
		}
		else if (speed > 86)
		{
			return 2;
		}
	}
	else
	{
		if (speed <= 60)
		{
			return 0;
		}
		else if (speed > 60 && speed <= 80)
		{
			return 1;
		}
		else if (speed > 81)
		{
			return 2;
		}
	}
}

/*
 20. Given 2 ints, a and b, return their sum. However, sums in the range 10..19 inclusive, are forbidden,
 so in that case just return 20.
 sortaSum(3, 4) → 7
 sortaSum(9, 4) → 20
 sortaSum(10, 11) → 21
 */

int sortaSum(int first, int second)
{
	int sum = first + second;
	if (sum >= 10 && sum <= 19)
	{
		return 20;
	}
	return sum;
}

/*
 21. Given a day of the week encoded as 0=Sun, 1=Mon, 2=Tue, ...6=Sat, and a boolean indicating if we are
 on vacation, return a string of the form "7:00" indicating when the alarm clock should ring. Weekdays,
 the alarm should be "7:00" and on the weekend it should be "10:00". Unless we are on vacation -- then
 on weekdays it should be "10:00" and weekends it should be "off".
 alarmClock(1, false) → "7:00"
 alarmClock(5, false) → "7:00"
 alarmClock(0, false) → "10:00"
 */
std::string alarmClock(int day, bool isVacation)
{
	if (isVacation)
	{
		if (day == 6 || day == 0)
		{
			return "off";
		}
		else
			return "10:00";
	}
	else if (day == 6 || day == 0)
	{
		return "10:00";
	}
	else
		return "07:00";
}

/*
 22. Given a number n, return true if n is in the range 1..10, inclusive. Unless "outsideMode" is true,
 in which case return true if the number is less or equal to 1, or greater or equal to 10.
 in1To10(5, false) → true
 in1To10(11, false) → false
 in1To10(11, true) → true
 */

bool intTo10(int maxNo, bool outsideMode)
{
	if (outsideMode)
	{
		if (maxNo <= 1 || maxNo >= 10)
		{
			return true;
		}
		return false;
	}
	else
	{
		if (maxNo >= 1 || maxNo <= 10)
		{
			return true;
		}
		return false;
	}
}

/*
 23. We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11.
 Return true if the given non-negative number is special.
 (Hint: Think "mod".)
 specialEleven(22) → true
 specialEleven(23) → true
 specialEleven(24) → false
 */

bool specialEleven(int number)
{
	return number % 11 == 0;
}

/*
 24. Return true if the given non-negative number is 1 or 2 more than a multiple of 20.
 (Hint: Think "mod".)
 more20(20) → false
 more20(21) → true
 more20(22) → true
 */

bool more20(int no)
{
	if (no % 20 == 1 || no % 20 == 2)
	{
		return true;
	}
	return false;
}

/*
 25. Return true if the given non-negative number is a multiple of 3 or 5, but not both.
 (Hint: Think "mod".)
 old35(3) → true
 old35(10) → true
 old35(15) → false
 */

bool old35(int no)
{
	if (no % 3 && no % 5 == 0)
	{
		return false;
	}
	else if (no % 3 == 0)
	{
		return true;
	}
	else if (no % 5 == 0)
	{
		return true;
	}
	return false;
}

/*
 26. Return true if the given non-negative number is 1 or 2 less than a multiple of 20. So for example 38
 and 39 return true, but 40 returns false.
 (Hint: Think "mod".)
 less20(18) → true
 less20(19) → true
 less20(20) → false
 */

bool less20(int no)
{
	if (no % 20 == 1 || no % 20 == 2)
	{
		return true;
	}
	return false;
}

/*
 27. Given a non-negative number "num", return true if num is within 2 of a multiple of 10. Note: (a % b)
 is the remainder of dividing a by b, so (7 % 5) is 2.
 nearTen(12) → true
 nearTen(17) → false
 nearTen(19) → true
 */

bool nearTen(int no)
{
	if ((no % 10) <= 2)
	{
		return true;
	}
	else
		return false;
}

/*
 28. Given 2 ints, a and b, return their sum. However, "teen" values in the range 13..19 inclusive, are
 extra lucky. So if either value is a teen, just return 19.
 teenSum(3, 4) → 7
 teenSum(10, 13) → 19
 teenSum(13, 2) → 19
 */

int teenSum(int a, int b)
{

	if ((a >= 10 && a <= 19) || (b >= 10 && b <= 19))
	{
		return 19;
	}
	else
		return a + b;
}

/*
 29. Your cell phone rings. Return true if you should answer it. Normally you answer, except in the morning
 you only answer if it is your mom calling. In all cases, if you are asleep, you do not answer.
 answerCell(false, false, false) → true
 answerCell(false, false, true) → false
 answerCell(true, false, false) → false
 */

bool answerCell(bool isMorning, bool isMomCalling, bool isAsleep)
{
	if (isAsleep)
		return false;
	else if (isMorning && isMomCalling)
	{
		return true;
	}
	else if (!isMorning)
	{
		return false;
	}
}

/*
 30. We are having a party with amounts of tea and candy. Return the int outcome of the party encoded as
 0=bad, 1=good, or 2=great. A party is good (1) if both tea and candy are at least 5. However, if
 either tea or candy is at least double the amount of the other one, the party is great (2). However,
 in all cases, if either tea or candy is less than 5, the party is always bad (0).
 teaParty(6, 8) → 1
 teaParty(3, 8) → 0
 teaParty(20, 6) → 2
 */

int teaParty(int tea, int candy)
{
	if (tea >= 5 && candy >= 5)
	{
		return 1;
	}
	else if ((2 * candy) == tea || (2 * tea) == candy)
	{
		return 2;
	}
	else if (tea < 5 || candy < 5)
	{
		return 0;
	}
}

/*
 31. Given three ints, a b c, return true if it is possible to add two of the ints to get the third.
 twoAsOne(1, 2, 3) → true
 twoAsOne(3, 1, 2) → true
 twoAsOne(3, 2, 2) → false
 */
bool twoAsOne(int a, int b, int c)
{
	if (a + b == c || a + c == b || b + c == a)
	{
		return true;
	}
	return false;
}

/*
 32. Given three ints, a b c, return true if b is greater than a, and c is greater than b. However, with
 the exception that if "bOk" is true, b does not need to be greater than a.
 inOrder(1, 2, 4, false) → true
 inOrder(1, 2, 1, false) → false
 inOrder(1, 1, 2, true) → true
 */
bool inOrder(int a, int b, int c, bool isBok)
{
	if (isBok)
	{
		if (c > b)
		{
			return true;
		}
		return false;
	}
	else
	{
		if (b > a && c > b)
		{
			return true;
		}
		return false;
	}
}

/*
 33. Given three ints, a b c, return true if they are in strict increasing order, such as 2 5 11,
 or 5 6 7, but not 6 5 7 or 5 5 7. However, with the exception that if "equalOk" is true, equality
 is allowed, such as 5 5 7 or 5 5 5.
 inOrderEqual(2, 5, 11, false) → true
 inOrderEqual(5, 7, 6, false) → false
 inOrderEqual(5, 5, 7, true) → true
 */
bool inOrderEqual(int a, int b, int c, bool equalOk)
{
	if (equalOk)
	{
		if (a <= b && b <= c)
		{
			return true;
		}
		return false;
	}
	else
	{
		if (a < b && b < c)
		{
			return true;
		}
		return false;
	}
}

/*
 34. Given 3 int values, a b c, return their sum. However, if one of the values is the same as another
 of the values, it does not count towards the sum.
 loneSum(1, 2, 3) → 6
 loneSum(3, 2, 3) → 2
 loneSum(3, 3, 3) → 0
 */
int loneSum(int a, int b, int c)
{
	int sum = 0;
	if (a == b)
	{
		sum = sum + c;
	}
	else if (b == c)
	{
		sum = sum + a;
	}
	else
	{
		sum = sum + b;
	}
	return sum;
}

/*
 35. Given 3 int values, a b c, return their sum. However, if one of the values is 13 then it does not
 count towards the sum and values to its immediate right do not count. So for example, if b is 13, then both
 b and c do not count.
 luckySum(1, 2, 3) → 6
 luckySum(1, 2, 13) → 3
 luckySum(1, 13, 3) → 1
 luckySum(13, 1, 3) → 3
 luckySum(13, 13, 3) → 0
 */

int luckySum(int a, int b, int c)
{
	int sum = 0;
	if (a == 13)
	{
		sum = sum + c;
	}
	else if (b == 13)
	{
		sum = sum + a;
	}
	else if (c == 13)
	{
		sum = sum + a + b;
	}
	return sum;
}

int main()
{

	bool sleepInRes = sleepIn(false, false);
	bool monkeyTroubleRes = monkeyTrouble(false, false);

	std::cout << "Sleep in : " << std::boolalpha << sleepInRes << std::endl;
	std::cout << "Monkey trouble : " << std::boolalpha << monkeyTroubleRes << std::endl;

	int totalSumForDouble = sumDouble(12, 12);
	int totalSumForRegular = sumDouble(12, 13);
	std::cout << "Total money : " << totalSumForDouble << std::endl;
	std::cout << "Total money : " << totalSumForRegular << std::endl;

	int absoluteDiff = diff(11);
	int absoluteDiffGreater = diff(24);
	std::cout << "Difference : " << absoluteDiff << std::endl;
	std::cout << "Difference : " << absoluteDiffGreater << std::endl;

	return 0;
}