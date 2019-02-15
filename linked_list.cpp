
#include <iostream>

using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* root = NULL;
void insert() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data: ";
    cin >>temp->data;
    temp->next = NULL;
    if(root == NULL) {
        root = temp;
    }
    else {
        struct node* p = root;
        while(p->next != NULL){
             p = p->next;
        }
        p->next = temp;
        
    }
}
void print() {
    struct node* s = root;
    while(s!= NULL)
    {
        cout<<s->data;
        s = s->next;
    }
   
}

int main()
{
     int n;
    cout<<"Enter the number of data to be inserted:  ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        insert();
        
    }
    print();
    return 0;
}
