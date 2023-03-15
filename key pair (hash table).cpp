class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int nums[], int n, int x) {
	     unordered_map<int,int> um;
       for(int i=0;i<n;i++){
           int key = nums[i];
           um[key]++;
       }

       for(auto itr = um.begin(); itr!=um.end(); itr++){
           int key = itr->first;
           int val = itr->second;

           int pair = x-key;
           if(pair==key){
               if(val>1)
                 return true;
           }
           else{
               if(um.find(pair)!=um.end())
                    return true;
               }
           }
           return false;
       }
};