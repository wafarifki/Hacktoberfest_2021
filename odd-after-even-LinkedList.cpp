/*For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers. The relative order of the odd and even terms should remain unchanged.
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
Input format:
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space. 
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format:
For each test case/query, print the elements of the updated singly linked list.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
1
1 4 5 2 -1
Sample Output 1 :
1 5 4 2 
Sample Input 2 :
2
1 11 3 6 8 0 9 -1
10 20 30 40 -1
Sample Output 2 :
1 11 3 9 6 8 0
10 20 30 40 
*/

#include <iostream>
using namespace std;
// Defining Node Class
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Taking Input
Node *takeinput()
{
    int data;

    cin >> data;

    Node *head = NULL, *tail = NULL;

    while (data != -1)
    {

        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

// Function to Print the List
void print(Node *head)
{
    // intializing temp node with head address
    Node *temp = head;
    // iterating with the help of temp node
    while (temp != NULL)
    {
        // printing list data
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *oddAfterEven(Node *head)
{
    //write your code here
    // Corner case
    if (head == NULL)
        return head;

    // Taking 4 node pointer's
    Node *oddh = NULL;
    Node *oddt = NULL;
    Node *evenh = NULL;
    Node *event = NULL;

    //Iterating over the linked list
    while (head != NULL)
    {
        // checking if node is even or odd
        // if odd
        if (head->data % 2 != 0)
        {
            // Checking if odd head and tail is null or not
            // if null then intializing odd head and tail to the list head;
            if (oddh == NULL && oddt == NULL)
            {
                oddh = head;
                oddt = head;
            }

            // else we will just add the address into tail and move forward the odd tail node
            else
            {
                oddt->next = head;
                oddt = oddt->next;
            }
        }
        // if even
        else
        {
            // Checking if even head and tail is null or not
            // if null then intializing even head and tail to the list head;
            if (evenh == NULL && event == NULL)
            {
                evenh = head;
                event = head;
            }

            // else we will just add the address into tail and move forward the even tail node
            else
            {
                event->next = head;
                event = event->next;
            }
        }
        head = head->next;
    }

    // checking if only even element present
    if (oddh == NULL)
    {
        event->next = NULL;
        return evenh;
    }
    // check if only odd element present
    if (evenh == NULL)
    {
        oddt->next = NULL;
        return oddh;
    }
    // if both elements our present then
    // joining the odd tail to even head
    oddt->next = evenh;
    event->next = NULL;

    // returning the odd address
    return oddh;
}

int main()
{
    int t;
    // taking test case input
    cin >> t;
    while (t--)
    {
        // taking list input
        Node *head = takeinput();
        head = oddAfterEven(head);
        print(head);
    }
    return 0;
}
