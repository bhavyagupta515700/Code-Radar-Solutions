// Your code here...
function isPrime(number):
    if number <= 1:
        return 0
    for i from 2 to square root of number:
        if number module i == 0:
            return 0;
    return 1;
