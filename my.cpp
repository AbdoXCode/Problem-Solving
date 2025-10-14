#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int cubes;
    cin>>cubes;

    int height = 0;

    int required_cubes = 0;

    while (required_cubes <= cubes) {
        height++;
        cubes-=required_cubes;
        required_cubes = (height*(height +1)) / 2;

    }
    cout<<height-1;

}
