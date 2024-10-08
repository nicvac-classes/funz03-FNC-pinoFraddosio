#include <iostream>
using namespace std;

float CalcoloCirconferenza(float n1){
    float circonferenza;
    circonferenza = (2*n1)*3.14;
    return circonferenza;
}

float CalcoloArea(float n1){
    float area;
    area = 3.14 * (n1*n1);
    return area;
}

int main() {
    float r1,r2,area1,area2,circonferenza1,circonferenza2;
    cout<<"Inserire il raggio del primo cerchio:";
    cin>>r1;
    cout<<"Inserire il raggio del secondo cerchio:";
    cin>>r2;
    area1 = CalcoloArea(r1);
    area2 = CalcoloArea(r2);
    circonferenza1 = CalcoloCirconferenza(r1);
    circonferenza2 = CalcoloCirconferenza(r2);
    cout<<"L'Area del priomo cerchio equivale a: "<<area1<<"; e la circonferenza a: "<<circonferenza1<<endl;
    cout<<"L'Area del secondo cerchio equivale a: "<<area2<<"; e la circonferenza a: "<<circonferenza2<<endl;
}


