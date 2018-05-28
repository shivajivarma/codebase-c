# Greatest Common Divisor

The __Greatest common divisor__ (GCD) of two or more integers (at least one of which is not zero), is the largest positive integer that divides the numbers without a remainder.

In mathematics, the Euclidean algorithm, or Euclid's algorithm, 
is an efficient method for computing the greatest common divisor 
(GCD) of two numbers, the largest number that divides both of 
them without leaving a remainder.

The Euclidean algorithm is based on the principle that the 
greatest common divisor of two numbers does not change if 
the larger number is replaced by its difference with the 
smaller number. For example, `21` is the GCD of `252` and 
`105` (as `252 = 21 × 12` and `105 = 21 × 5`), and the same 
number `21` is also the GCD of `105` and `252 − 105 = 147`. 
Since this replacement reduces the larger of the two numbers, 
repeating this process gives successively smaller pairs of 
numbers until the two numbers become equal. 
When that occurs, they are the GCD of the original two numbers. 
