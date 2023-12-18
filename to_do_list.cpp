#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"How many task you add";
    cin>>num;
    string list[num];
    string complete;

    for(i=0;i<num;i++){
        cout<<"Enter task:"<<i+1<<"\n";
        cin>>list[i];
    }

    cout<<"Which task you done \n";
    cin>>complete;

    string new_list;
    for(i=0;i<num;i++){
        if(complete==list[i]){
            cout<<list[i]<<" work done \n";
            list[i]={""};
        }
    }

    cout<<"Task is pending\n";
    for(i=0;i<num;i++){
        cout<<list[i]<<"\n";
    }

    return 0;
}