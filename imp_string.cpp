class Solution {
    bool same(int s1[],int s2[]){
        for(int i = 0; i < 26; i++){
            if(s1[i] != s2[i]){
                 return 0;
            }
        }
        return 1;
    }
public:
// check in s2 that substring of s1 is exist or not 
// approach counting char in s1 and then check in s2(only window size )

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if(n>m)return 0;
        else{
            int count[26]={0};
            for(int i = 0; i<n;i++){
                int value = s1[i]-'a';
                count[value]++;
            }
            int count2[26]={0};
            int window = s1.size();
            int i = 0;
            while( i < window ){
                int value = s2[i] - 'a';
                count2[value]++;
                i++;
            }
            if (same(count,count2))return 1;
            while(i < m){
                char newChar = s2[i];
                int index = newChar - 'a';
                count2[index]++;
                char OldChar = s2[i - window];
                int index2 = OldChar - 'a';
                count2[index2]--;
                i++;
                if(same(count,count2))
                    return 1;
                
            }
            return 0;
        }
        
    }
};