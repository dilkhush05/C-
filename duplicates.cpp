 int maxElement = *max_element(arr, arr + n);    //get max element from array
        int count[maxElement+1] = {0};                  //create new array to store counts
        for(int i=0; i<n; i++) {                        //loop through array and add elements in count
            count[arr[i]]++;
        }
        vector<int> duplicates;
        for(int i=0; i<=maxElement; i++) {
            if(count[i]>1)
                duplicates.push_back(i);                //return/pushback elements which occures more than once
        }
        if(duplicates.empty())
            duplicates.push_back(-1);                   //if no duplicates then return -1
        return duplicates;


// input_type
        //4
        // 0 3 1 2