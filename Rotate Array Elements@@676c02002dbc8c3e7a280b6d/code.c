// Your code here...
function rotateArray(array, K):
    N = length of array
    K = K modulo K
    reverse(array, 0, N-1)
    reverse(array, 0, K-1)
    reverse(array, K, N-1)
