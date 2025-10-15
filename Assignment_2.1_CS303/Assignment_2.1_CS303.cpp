// Assignment_2.1_CS303.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdexcept>
using namespace std;
template <typename Item_Type>
class Node { // Create a Class
public:
    Item_Type item;
    Node* next;

    Node(const Item_Type& item) : item(item), next(nullptr) {}

};

template <typename Item_Type>
class Single_Linked_List { // Create the Single Linked List Class
private:
    Node<Item_Type>* head; // Define the Head and Tail
    Node<Item_Type>* tail;
    size_t num_items; // Define num_items

public:
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {} // Define the pointers

    ~Single_Linked_List() {
        while (!empty()) {
            pop_front();
        }
    }

    // Push_Front Function
    void push_front(const Item_Type& item) { // Create the function for pushing item to the front
        Node<Item_Type>* new_node = new Node<Item_Type>(item);
        new_node->next = head; // Place new node before head
        head = new_node; // Define the new node as the head
        if (tail == nullptr) { // Check to make sure there is a tail
            tail = new_node;
        }
        num_items++; // Increment num_items
    }

    // Push_Back Function
    void push_back(const Item_Type& item) { // Create the function for pushing item to the back
        Node<Item_Type>* new_node = new Node<Item_Type>(item);
        if (tail) {
            tail->next = new_node; // Create the new node at the end of the list
        }
        else {
            head = new_node;
        }
        tail = new_node;
        num_items++; // Add one to num_items
    }


    // Pop_Front Function
    Item_Type pop_front() {
        if (empty()) {
            throw std::out_of_range("Pop from empty list"); // Check to make sure that there is an item to pop
        }
        Node<Item_Type>* temp = head; // Create a temp value as the head
        Item_Type removed_item = temp->item;
        head = head->next; // Reassign the pointers
        delete temp; // Delete the temp variable
        if (head == nullptr) { // If the head is null, then make the tail null too
            tail = nullptr;
        }
        num_items--; // Subtract one from num_items
        return removed_item;
    }

    // Pop_Back Function
    Item_Type pop_back() {
        if (empty()) {
            throw std::out_of_range("Pop from empty list"); // Check to make sure that there is an item to pop
        }
        if (head == tail) {
            Item_Type removed_item = head->item; // Checking if the head was removed item or if the list was only one item
            delete head;
            head = tail = nullptr;
            num_items--;
            return removed_item;
        }

        Node<Item_Type>* current = head; // Checking to see if the first one was the head
        while (current->next != tail) { // If the next node is not the tail
            current = current->next; // The node pointers get updated
        }

        Item_Type removed_item = tail->item;
        delete tail;
        tail = current;
        tail->next = nullptr;
        num_items--; // Lower the count of num items
        return removed_item; // Return the removed item

    }

    // Front Function
    Item_Type front() const { // Function to find the front
        if (empty()) { // Check to make sure the list is not empty
            throw std::out_of_range("List is empty");
        }
        return head->item; // Return the head
    }

    // Back Function
    Item_Type back() const { // Function to find the front
        if (empty()) { // Check to make sure the list is not empty
            throw std::out_of_range("List is empty");
        }
        return tail->item; // tail == items
    }

    // Empty Function
    bool empty() const { // Check to see if the list is empty
        return num_items == 0; // Return if the num_items is 0
    }

    // Insert Function
    void insert(size_t index, const Item_Type& item) { // Function to insert a new value
        if (index == 0) {
            push_front(item); // If insertion is the front, then just push_front
        }
        else if (index >= num_items) {
            push_back(item); // If function is the back, then just push_back
        }
        else {
            Node<Item_Type>* new_node = new Node<Item_Type>(item);
            Node <Item_Type>* current = head;
            for (size_t i = 0; i < index - 1; i++) { // Set i = 0 and the index -1
                current = current->next; // Update the pointers of the list
            }
            new_node->next = current->next; // Update the pointers of the list
            current->next = new_node;
            num_items++; // Add one to num_items
        }
    }

    // Remove Function
    bool remove(size_t index) { // Function to remove an item from a index
        if (index >= num_items) {
            return false; // Check to make sure index is in bounds
        }
        if (index == 0) {
            pop_front(); // If index is front, then call the pop_front function
            return true;
        }

        Node<Item_Type>* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next; // Update the pointers of the function
        }
        Node<Item_Type>* to_remove = current->next;
        if (to_remove == tail) {
            tail = current;
        }
        current->next = to_remove->next;
        delete to_remove; // Delete the temp value
        num_items--; // Deincrement num_items
        return true;
    }


    // Size Function
    size_t find(const Item_Type& item) const { // Function to find a number
        Node<Item_Type>* current = head;
        size_t index = 0;
        while (current != nullptr) { // Update the pointer when it is not null
            if (current->item == item) {
                return index; // Return the index
            }
            current = current->next;
            index++; // Increment the index
        }
        return num_items; // Return size if not found
    }

    size_t size() const { // Check the size of the list
        return num_items; // Return the value of num_items
    }

    void print() const { // Print the list
        Node<Item_Type>* current = head;
        while (current != nullptr) {
            cout << current->item << " "; // Print the value of the items
            current = current->next; // Make current = current next
        }
        cout << std::endl;
    }

};

int main() {
    int new_number = 0;
    int num_items = 0;
    int usrindex = 0;
    int inserted_number = 0;
    int found_number = 0;
    int index_to_remove = 0;
    Single_Linked_List<int> sll;
    while (num_items <= 2) // Check to make sure you are less then or equal to num_items 
    {
        cout << "Please add a number to the front of the list. "; // Ask user to input number to add
        cin >> new_number; // User input of new variable 
        sll.push_front(new_number); // Call the push_front function 
        num_items++; // Increment num_items 


    }
    sll.print(); // Exit and print the loop 

    while (num_items <= 4)
    {
        cout << "Please add a number to the back of the list "; // Ask for numbers to add to the end of a list 
        cin >> new_number; // Get the input for the new number 
        sll.push_back(new_number); // Call the push back function 
        num_items++; // Increment num_items 

    }
    sll.print(); // Exit the loop and print 

    std::cout << "The front of the list is: " << sll.pop_front() << std::endl; // Take off the last value and print the item 
    sll.print();

    cout << "Please insert the index that you want to insert: "; // Ask for the value to insert 
    cin >> usrindex; // Get the user input of the index 
    cout << "Please insert the desired number: "; // Ask for the number 
    cin >> inserted_number; // Get the user inserted number 

    sll.insert(usrindex, inserted_number); // Call the insert function 
    sll.print();


    cout << "What is the desired number to find: "; // Ask for the number to find 
    cin >> found_number;

    cout << "The index of the number is: " << sll.find(found_number) << std::endl; // Call the find number function 
    sll.print(); 

    cout << "Insert the Index that is desired to be removed: "; // Ask for the index to be found 
    cin >> index_to_remove;
    sll.remove(index_to_remove); // Call index to remove function
    sll.print();

    return 0;
}