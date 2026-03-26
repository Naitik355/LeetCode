class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        int right=0;
        int maxlen=0;
        unordered_map<int,int>basket;
        while(right<fruits.size()){
            basket[fruits[right]]++;
            if(basket.size()>2){
                while(basket.size()>2){
                    basket[fruits[left]]--;
                    if(basket[fruits[left]]==0) basket.erase(fruits[left]);
                    left++;         
                }
            }
            if(basket.size()<=2){
                maxlen=max(maxlen,right-left+1);
            }
            right++;
        }
        return maxlen;
    }
};
