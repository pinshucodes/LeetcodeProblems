class Solution {
public:
    string addStrings(string num1, string num2) {
        // your code here
        int n = num1.size();
        int m = num2.size();
        
        if(n<m){
            swap(num1,num2);
            swap(n,m);
        }
        
        int carry = 0;
        int j = m-1;
        
        for(int i=n-1; i>=0; i--){
            int bit1 = num1[i] - '0';
            int sum = bit1 + carry;
            
            if(j>=0){
                int bit2 = num2[j] - '0';
                sum += bit2;
                j--;
            }
            
            int bit = sum%10;
            carry = sum/10;
            
            num1[i] = char(bit + '0');
        }
        
        if(carry>0){
            num1 = '1' + num1;
        }
        
        return num1;
    }
};