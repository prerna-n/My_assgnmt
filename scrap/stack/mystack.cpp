#include <iostream>

using namespace std;

#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define STACK_SIZE 10
#define SUCCESS 0
#define FAIL 3

class Stack {
	int arr[STACK_SIZE];
	int elements;

	public:
        Stack();
		int push(int);
		int pop();
        int peek();

#ifdef DEBUG
        int debugPrint();
#endif

#ifdef EXTRA_FUNC
        int empty();
#endif

};


Stack::Stack() {
    elements = -1;
}

int Stack::push(int n) {

    if (elements == STACK_SIZE) {
        return ERR_STACK_FULL;
    }

    elements++;
    arr[elements] = n;
    return SUCCESS;
}

int Stack::pop(void) {
    if (elements == -1) {
        return ERR_STACK_EMPTY;
    }
    int temp = arr[elements];
    elements--;
    return temp;
}

int Stack::peek() {
    return arr[elements];
}


#ifdef DEBUG
int Stack::debugPrint(void) {
    cout << "\nPrinting the whole stack\n";
    for (int i=elements; i>=0; i--) {
        cout<<arr[i]<<endl;
    }
}
#endif

#ifdef EXTRA_FUNC

int Stack::empty() {
    elements = 0;
}

#endif

int main() {
    int array[] = { 10, 20, 30, 40, 50, 60 };

    int elements = sizeof(array)/sizeof(array[0]);

    Stack s;

    for (int i=0; i<elements; i++) {
        if (s.push(array[i]) == SUCCESS) {
            cout<<"Successfully Pushed " << array[i] << endl;
        }
    }

#ifdef DEBUG
    s.debugPrint();
#endif

}
