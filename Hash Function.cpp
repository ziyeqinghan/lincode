class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
    int hashCode(string key,int HASH_SIZE) {
        // write your code here
        long long result = 0;
        for(char c:key) {
            result = (result*33+c)%HASH_SIZE;
        }
        return (int) result;
    }
};
