//floor value of square root of a number
#include <iostream>

long long int squareRoot(long long int x){
    long long int low = 1, high = x, ans = -1;
    while(low<=high){
        long long int mid = (low+high)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid>x) high = mid-1;
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    std::cout<<squareRoot(625)<<"\n";
    std::cout<<squareRoot(6179767);
}