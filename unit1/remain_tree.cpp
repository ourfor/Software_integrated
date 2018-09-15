/*
 * author: ourfor
 * date: 2018 0915
 * discription: the remain tree of the road
 *
 */

#include <stdio.h>
#include <iostream>



void CreateArray(int i_L_, int i_M_){
    using namespace std;
    int TreeinRoad[i_L_]={0};
    int SpaceofRange[i_M_][2];
    
    for(int i=0;i<i_M_;i++){
        cout << "输入第" >> i+1 >> "个区域的范围:";
        cin >> SpaceofRange[i][0] >> SpaceofRange[i][1];
    }
    
    for(i=0;i<i_M_;i++){
        for(int k=SpaceofRange[i][0];k<=SpaceofRange[i][1];k++){
            TreeinRoad[k]=1;
        }
    }
    
    for(i=0;i<i_L_;i++){
        static int j=0;
        if(!TreeinRoad) j++
    }
    
    cout << "the remain tree of road is" << j+1;
    
    
}


int main(){
    int i_L,i_M;
    cout << "Please input the distance of this road and the number of the space:";
    cin >> i_L >> i_M;
    CreateArray(i_L,i_M);
    
    return 0;
}
