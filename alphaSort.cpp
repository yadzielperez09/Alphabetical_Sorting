#include <iostream> 
#include <vector>
#include <string>

using namespace std;

vector<string> sortnames(vector<string> v){
    for(int i = 0;i<v.size()-1;i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i].substr(0,1)>v[j].substr(0,1)){
                swap(v[i],v[j]);
            }
        }
    }
    return v;
}

int main(){
    double n=1;
    int c=1;
    vector<string> names{ "Yadziel", "Adrian", "Jaimy"};
    cout<< "The vector contains the names :";
    for(auto n:names){
        cout<< n << " ";
    }

    vector<string> sortednames = sortnames(names);
    cout<<"\n\n"<<"Sorted list"<<"\n\n";
    for(auto sn:sortednames){
        cout<< sn <<" ";
    }
    cout<<"\n";
}