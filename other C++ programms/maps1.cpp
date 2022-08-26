// // this is a ordered map so key will be printed in output in a increasing order irrespective of in which order they are written in programme
// // that is keys will get printed in a sorted order
// #include<bits/stdc++.h>
// using namespace std;
// void print(map<int,string> &m){
//     cout<<"size :"<<m.size()<<endl;
//     for(auto &pair:m){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }
// }
// int main()
// {// map syntax-->map<key,value>name
// //m[int]=string--->(here)
//     map<int,string> m;
//     m[1]="abc";
//     m[5]="cdc";//acceptable
//     m[3]="acr";
//     m.insert({4,"wer"});//also acceptable
//     //keys in a map is unique that is we if we use same key again it will not make a duplicate copy ;it will update value mapped to that key 
//     // map<int,string>::iterator it;
//     // for(it=m.begin();it!=m.end();it++){
//     //     cout<<(it->first)<<" "<<(it->second)<<endl;
//     //     // cout<<(*it).first<<" "<<(*it).second<<endl;---->also acceptable
    
//     // }
//     // for(auto &pair:m){                              }-->aslo acceptable
//     //     cout<<pair.first<<" "<<pair.second<<endl;  }-->aslo acceptable  
//     // }
//     print(m);
//     //m[6];-->this will store an empty value data type(here string) even if it is not declared
//       auto it=m.find(3);//--->it will return iterator and find the value of string mapped corrorponding to key(here int 3) and then print both of them
//     //   auto it=m.find(8);-->will print no value 
      
//       if(it!=m.end())//-->only use erase if "it" is pointing a valid key in map
//           m.erase(it);//-->this will erase the value iterator is pointing
//           m.clear();// this will clear all elements if map
//         //   print(m);// this is written to print the cleared map of size zero
// //       if(it==m.end()){
// //           cout<<"no value";

// //       }
// //       else{
// //           cout<<(*it).first<<" "<<(*it).second<<endl;
// //       }
// // return 0;
// }



////question of orderd map
// given N strings , print unique strings in lexiographical order with their frequency 
// n<=10^5
// |S|<=100

#include<bits/stdc++.h>
using namespace std;
void print(map<string,int> &m){
    cout<<"size :"<<m.size()<<endl;
    for(auto &pair:m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int main(){
          int N;
          cin>>N;
    map<string,int> m;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    print(m);
    


    return 0;
}
