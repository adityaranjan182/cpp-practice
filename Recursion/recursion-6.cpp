/*Josephus problem
There are n people standing in a circle starting from position 0 to (n-1) waiting to be executed. The counting out 
begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain 
number of people are skipped and the next person is executed. The elimination proceeds around the circle 
(which is becoming smaller and smaller as the executed people are removed), until only the last person remains, 
who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped
and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one
 remaining and so survive.

For example, if n = 5 and k = 2, then the safe position is 2. Firstly, the person at position 1 is killed, then 
person at position 3 is killed, then person at position 0 is killed. Finally, the person at position 4 is killed.
So the person at position 2 survives.
If n = 7 and k = 3, then the safe position is 3. The persons at positions 2, 5, 1, 6, 4, 0 are killed in order,
 and person at position 3 survives.
 */

#include <iostream>

int josephus(int n,int k)
{
    if (n==0) return 0;
    return (josephus(n-1,k)+k)%n;
}

int main()
{
    std::cout<<josephus(7,3)<<"\n";  //output 3
    std::cout<<josephus(12,3)<<"\n"; //output 9
    std::cout<<josephus(4,2)<<"\n";  //output 0
}
