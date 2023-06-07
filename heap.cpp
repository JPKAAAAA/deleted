#include<iostream>
using namespace std;
class heap
{   int *array=new int[5];
    int size;
    int capacity;
    public:
    heap()
    {
        size=5;
        capacity=0;
    }
    void insertheap();
    void deleteheap();
    void display();
};

void heap::insertheap()
{
    if(capacity>=size)
    {   
        int *temparray=new int[size];
        int *temp;
        temp=array;
        for(int i=0;i<size;i++)
        temparray[i]=array[i];

        int *array=new int[2*size];
        for(int i=0;i<size;i++)
        array[i]=temparray[i];
        size=size*2;
        delete[] temparray;
        delete[] temp;
        
    }
    int element;
    cout<<"Enter the element";
    cin>>element;
     int child=capacity,parent;
     array[capacity++]=element;
    while(1)
    {
        parent=(child-1)/2;
   
        if(array[child]>array[parent])
        {
            int temp;
            temp=array[child];
            array[child]=array[parent];
            array[parent]=temp;
            child=parent;
        }
        else
        {
            break;
        }
    }

}

void heap::deleteheap()
{
    for(int i=0;i<capacity-1;i++)
    array[i]=array[i+1];
    capacity--;
}

void heap::display()
{
 for(int i=0;i<capacity;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}

int main()
{   heap h;
    int choice;
    system("cls");
    do
    {
        cout<<"1.INSERT\t2.DELETE3\t3.DISPLAY\t4.EXIT"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            h.insertheap();
            break;
            case 2:
            h.deleteheap();
            break;
            case 3:
            h.display();
            break;
            case 4:
            exit(0);
            default: 
            cout<<"WRONG INPUT"<<endl<<"\n\n";

            break;
        }
    } while (1);
    
}