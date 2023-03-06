# CS303Assignment2

Part 1:
There is a Single_Linked_List class, also using template, with
public:
- push_front // Adds a new node with the item at the front of the list
- push_back // Adds a new node with the item at the back of the list
- pop_front // Removes the node at the front of the list
- pop_back // Removes the node at the back of the list
- front, back // Returns the item at the front of the list
              // Returns the item at the back of the list
- empty // Returns true if the list is empty
- void insert(size_t index, const Item_Type& item)// Inserts a new node with the item at position index
- bool remove(size_t index):  // Removes the node at position index
- size_t find(const Item_Type& item): // Returns the position of the first occurrence of item if it is found
    // Returns the size of the list if item is not found

private:
struct Node:
- Item_Type item;
- Node* next;
- Node(const Item_Type& item, Node* next = nullptr)
            : item(item), next(next)
    - Node* head;       // Pointer to the first node in the list
    - Node* tail;       // Pointer to the last node in the list
    - size_t num_items; // Number of nodes in the list

Output:
![image](https://user-images.githubusercontent.com/90810070/222994426-4e4900e7-f67c-42b8-bde1-f9ae27fad20d.png)

Part 2:
There is one parent Employee Class and 2 child classes, Professional and Nonprofessional that would get the name,age, how many hours
that employee works, the monthly salary, health care contributions and vacation days earned.
- getWeeklySalary() //get weekly salary
- getHealthCareContribution() //calculate the health care contribution by using base salary * 0.1 for professional and base salary *0.05 for nonprofessional
- getVacationEarned() 
- getName()
- getAge()



Output: 
![image](https://user-images.githubusercontent.com/90810070/222994702-9ec2ca04-db40-4c8c-91fa-bc5e4039b7c4.png)




