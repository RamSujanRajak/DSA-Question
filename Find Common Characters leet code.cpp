class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       unordered_map <char , int> umap1;
        
        for(char i = 'a' ; i <= 'z' ; ++i)
            umap1[i] = 100;

        unordered_map <char , int> umap2;
        for(string &word : words)
        {
            umap2.clear();
            //Store the count of every character in a hash map count
            for(char i : word)
                umap2[i]++;

            for(char i = 'a' ; i <= 'z' ; ++i)
                umap1[i] = min(umap1[i] , umap2[i]);
        }

        vector <string> result;
        string temp;
        int times;
        for(char i = 'a' ; i <= 'z' ; ++i)
        {
            times = umap1[i];
            temp = i;
            while(times > 0)
            {
                result.push_back(temp);
                --times;
            }
        }
        return result;
        }
};