class Solution {
public:
    int DigitSum(int n){
        int sum=0;
        int i=0;
        while(n!=0)
        {
            i = n%10;            
            sum+= i*i;            
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int key = n;

        // unordered_map을 이용한 풀이.

        unordered_map<int, bool> map;

        while((n!=1)&&(map.find(n)==map.end()))
        {
            map[n] = true;
            n = DigitSum(n);
        }
        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }





        // 토끼와 거북이 풀이방법 (최적의 해)
        // Time complexity: O(logN) - DigitSum할때 자릿수 구하는 복잡도.
        // Space complexity: O(1)
        /*
        int fast=n;
        int slow=n;

        while(true)
        {
            slow = DigitSum(slow);
            fast = DigitSum(fast);
            fast = DigitSum(fast);

            if((slow==1)||(fast==1))
            {
                return true;
            }
            else if(fast==slow)
            {
                return false;
            }
        }        
        return true; 
        */
    }
};