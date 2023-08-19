#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q;
    cin >> N >> Q;

    // Store Tag Hierarchy
    vector<string> prefix_tag;
    // Store Tag Hierarchy + Atrribute in HashMap
    unordered_map<string, string> tag_map;
		
    // Temporary Variables for reading each line and tag name as prefix
    string line, prefix;
    
    // Get empty line after N & Q input values
    getline(cin, line);
    
    for(int i=0;i<N;i++){
        getline(cin, line);
        
        // Remove Tags <>
        line.erase(line.end()-1);
        line.erase(line.begin(), line.begin()+1);
        
        // On END Tag found, pop the tag from Tag Hieratchy Vector and continue to next line
        if(line[0]=='/'){
            line.erase(line.begin(), line.begin()+1);
            prefix_tag.pop_back();
            continue;
        }
        
        // Replace all occurences of '=' and '"' characters from line
        replace(line.begin(), line.end(), '=', ' ');
        replace(line.begin() , line.end() , '\"' , ' ');
        
        // Set string stream
        stringstream ss(line);
        
        // Get prefix and push back into Tag Hierarchy Vector
        ss >> prefix;
        prefix_tag.push_back(prefix);
        
        // Temporary Variables
        string key,value, temp;
        
        // Temporary Key string for Tag Hierarchy
        for (auto & element : prefix_tag){
            temp = temp + "." + element;
        }
        
        // Read all attributes and store them in HashMap accordingly
        while(ss){
            ss >> key >> value;
            tag_map[temp + "~" + key] = value; 
        }        

    }
    
    // Query retrieval, search for tag and print outfound accordingly
    for(int i=0;i<Q;i++){
        getline(cin, line);
        string temp = "."+line;
        if(tag_map.count(temp)==1){
            cout << tag_map[temp] << endl;
        }
        else{
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}
