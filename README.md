# Problem-Resolving-FA---IE2072-Assignment-2022
This includes some c codes regarding the given problems. 

Given Problems.

Question 1 (10 marks)

Bob is writing a program that solves the following problem:
You are given the numbers a, b to display the infinite sequence of numbers
a,a+b,a+2∗b ...,a+N∗b,a+(N+1)∗b,.... Bob has made a mistake, he namely forgot to draw a space 
for the separation between the numbers, resulting in a long line of numbers. In order not to correct 
the mistake, Bob decided to find out how to find the k
th
digit in the formed line (numbering of 
digits begins with one).
Bob could not find a good solution, so he asks you for help.
Input format
• The first line contains a number T denoting the number of tests.
• The first line of each test contains four integers a,b,k.
Output format
Print the k
th digit for each test.
Ex:
Sample Input Sample Output
2 2
3 5 9 7
2 7 10


Question 2 (20 marks)

You are given N cities and the i
th
city contains a[i] blocks. If you want to build a road 
between i
th
and j
th
cities (i≠j), then the number of blocks needed is gcd(a[i],a[j]). Here gcd is the 
greatest common divisor. You have to build roads in such a way that any person can go from any 
city to another city in exactly one way, not more than one way between two cities. You have to 
maximize the total number of blocks used to build roads.
Input format
• The first line contains N denoting the number of cities.
• The second line contains N integers, a[1],a[2],...,a[N] where a[i] is the number of blocks 
in the i
th
city. 
Output format
Print a maximum number of blocks used to build roads in such a way the provided condition is 
satisfied.
Ex:
Sample Input Sample Output
3 5
4 6 9
