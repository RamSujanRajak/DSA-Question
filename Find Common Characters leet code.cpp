class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       unordered_map <char , int> umap1;
        
        for(char c = 'a' ; c <= 'z' ; ++c)
            umap1[c] = 100;

        unordered_map <char , int> umap2;
        for(string &word : words)
        {
            umap2.clear();
            //Store the count of every character in a hash map count
            for(char c : word)
                umap2[c]++;

            for(char c = 'a' ; c <= 'z' ; ++c)
                umap1[c] = min(umap1[c] , umap2[c]);
        }
        
        vector <string> result;
        string temp;
        int times;
        for(char c = 'a' ; c <= 'z' ; ++c)
        {
            times = umap1[c];
            temp = c;
            while(times > 0)
            {
                result.push_back(temp);
                --times;
            }
        }
        return result;
        }
};