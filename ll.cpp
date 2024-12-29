#include<iostream>

using namespace std;

typedef struct node
{
    int n;
    char status;
    struct node *next;
} road;

road * addroads(road *r)
{
    road *newnode;
    newnode = (road *)malloc(sizeof(road));
    newnode->n=1;
    newnode->status='o';
    newnode->next=nullptr;
    r=newnode;
    road *t=r;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=2;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=3;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=4;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=5;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=6;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=7;
    newnode->status='x';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=8;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=9;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    newnode = (road *)malloc(sizeof(road));
    newnode->n=10;
    newnode->status='o';
    newnode->next=nullptr;
    t->next=newnode;
    t=t->next;

    return r;

}
void display(road *r)
{
    road *t=r;
    if(t==nullptr)
        cout << "No road list\n";
    else {

        while(t) {
            cout << t->n << " ";
            t=t->next;
        }
        cout << endl;
    }
}

road * ev(road *r)
{
    road *t=r,*p=nullptr,*z;
    if(t==nullptr)
        return r;

    while(t) {

        if(t->status=='x') {

            z=t;
            cout << "Road " << t->n << " blocked, evacuating it\n";

            if(t==r) {
                r=t->next;
                free(z);
                t=r;
            }

            else if(t->next==nullptr) {
                p->next=nullptr;
                t=nullptr;
            }

            else {
                p->next=t->next;
                t=p->next;
            }
            free(z);
        }

        else {
            cout << t->n << "\n";
            p=t;
            t=t->next;
        }
    }
    return r;
}

int main()
{
    road *r=nullptr;
    r=addroads(r);
    r=ev(r);
    cout << "\nFinal roads\n";
    display(r);

    return 0;
}
