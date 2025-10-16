# Assignment 2 - CS303 (Data Structures)
## Question 1 - Singly Linked Lists
## Description
This C++ program implements a single linked list and allows users to perform the following operations:
- Add numbers to the front of a list (push_front).
- Add numbers to the back of a list (push_back).
- Remove numbers from the front of a list (pop_front).
- Remove numbers from the back of a list (pop_back).
- Access the first element of a list without removing it (front).
- Access the last element of a list without removing it (back).
- Check if the list is empty (empty.)
- Insert an item at a specified index (insert(size_t index, const Item_Type& item)): Inserts the item at a the given index starting at 0. If the index is beyond the end of the list, the item is added to the back.
- Remove an item at a specified index (remove(size_t index)): Removes the item at the given index. Returns true if successful, false if the index is invalid.
- Find the index of the first occurrence of an item (find(const Item_Type& item)): Returns the index if the item is found, or the size of the list if not found.

## Files
- Assignment_2.1_CS303.cpp - Main program with all function implementations.
- Assignment_2.1_CS303.h - Header file containing file declarations.

## How to Run + Functionality
1. Open the project in your C++ IDE (Visual Studio)
2. Make sure you are in the correct project directory, containing Assignment_2.1_CS303.cpp and Assignment_2.1_CS303.h.
3. Build and run the program.
4. Follow the on-screen prompts and the expected output order is:
   - The user is asked to input three numbers to add to the front of the list.
   - The list is then displayed in its entirety.
   - The user is asked to input two numbers to add to the back of the list.
   - The whole list is displayed once more.
   - The program pops the front of the list, including the popped number as well as the full list post pop.
   - The user is then asked to input an index where they wish to insert a number.
   - The user is asked to input a number they wish to input at the previously inputted index.
   - The list is then printed in its entirety.
   - The user is asked for a number to find in the list.
   - The index of the number is printed if it is found. If it is not found, the size of the list is returned.
   - The user is asked to input the index of the number they wish to remove.
   - The list is printed once more.

<img width="1726" height="754" alt="Screenshot 2025-10-15 175925" src="https://github.com/user-attachments/assets/172cb412-ca21-479c-ac39-902fdf44d185" />
<img width="1729" height="780" alt="Screenshot 2025-10-15 180003" src="https://github.com/user-attachments/assets/22ba2445-4dc5-47c5-bacd-0fd2af65d5c0" />
<img width="1726" height="720" alt="Screenshot 2025-10-15 180036" src="https://github.com/user-attachments/assets/3c0a0772-5cc3-4b2e-b16a-9b04203a7386" />
<img width="1729" height="774" alt="Screenshot 2025-10-15 180058" src="https://github.com/user-attachments/assets/17a93fda-b897-432e-9773-559a7c87bbff" />
<img width="1724" height="821" alt="Screenshot 2025-10-15 180123" src="https://github.com/user-attachments/assets/601b7356-2708-4ac7-8900-b990d8e86eed" />
