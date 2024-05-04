#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,n1,n2;
    ofstream fout;
    fout.open("file1");
    for(int i=1;i<3;i++)
    {
        cout<<"Enter Number";
        cin>>n1;
        fout<<n1<<endl;
    }
    fout.close();
     fout.open("file2");
    for(int i=1;i<3;i++)
    {
        cout<<"Enter Number";
        cin>>n2;
        fout<<n2<<endl;
    }
    fout.close();
    ifstream fin1,fin2;
    fin1.open("file1");
    fin2.open("file2");
    fout.open("file3");
    fin1>>n1;
    fin2>>n2;
    while(!fin1.eof() && !fin2.eof())
    {
        if(n1<n2)
        {   
           fout<<n1<<endl;
           fin1>>n1;
        }
        else if(n2<n1)
        {
            fout<<n2<<endl;
            fin2>>n2;
        }
        else
        {
            fout<<n1<<endl<<n2<<endl;
            fin1>>n1;
            fin2>>n2;
        }
    }
    while(!fin1.eof())
    {
        fout<<n1<<endl;
        fin1>>n1;
    }
    while(!fin2.eof())
    {
        fout<<n2<<endl;
        fin2>>n2;  
    }
    fin1.close();
    fin2.close();
    fout.close();
    ifstream in;
    in.open("file3");
    while(!in.eof())
    {
       in>>n;
       cout<<n<<endl; 
    }
    return 1;
    
}    
