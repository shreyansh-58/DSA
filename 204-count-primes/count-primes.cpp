class Solution {
public:
    bool isPrime(int num){
	if (num <= 1) return 0;
	if (num == 2 || num == 3) return 1;
	if (num % 2 == 0 || num % 3 == 0) return 0;
	for (int i = 5; i * i <= num; i = i + 6){
		if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
	return 1;
    }
    int countPrimes(int n) {
        if(n<3) return 0;
        int count=0;
        for(int i=2;i<n;i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
};