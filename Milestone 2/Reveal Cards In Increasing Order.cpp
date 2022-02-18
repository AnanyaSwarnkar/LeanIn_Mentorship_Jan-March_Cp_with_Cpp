class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int> res(n);
        sort(deck.begin(), deck.end());
        int i=1; res[0]=deck[0];
        int k=0;
        while(i<n){
            int c=0;
            while(c!=2){
                k++;
                if(k>=n) k=0;
                if(res[k]==0) c++;
            }
            res[k]=deck[i];
            i++;
        }
        return res;
    }
};
