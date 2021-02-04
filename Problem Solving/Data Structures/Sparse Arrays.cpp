// Complete the matchingStrings function below.

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> a(queries.size());
    for(int i=0;i<queries.size();i++){
        int c=0;
        for(int j=0;j<strings.size();j++){
            if(queries[i]==strings[j]) c++;
        }
        a[i]=c;
    } 
    return a;
}
