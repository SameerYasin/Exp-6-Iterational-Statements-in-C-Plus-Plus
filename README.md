# Exp-6-Iterational-Statements-in-C-Plus-Plus

### **Lab Experiment on Loops in C++**

**Sameer Yasin**
**PRN: 24070123092**
**Experiment No: 6 & 7**
**Software Required:**
Visual Studio (or any C++ compatible IDE)


### **Objective:**

To understand and implement different types of loops in C++ through practical coding exercises.


### **Theory:**

C++ supports several types of loops which allow repeating a set of instructions until a certain condition is met. This experiment focuses on understanding how different loops work, when to use which type, and how logic flows within them.

#### **1. For Loop**

* **Type**: Entry-controlled loop
* Used when the number of iterations is known in advance.
* It has three components:

  * **Initialization** – Setting the starting point (e.g., `int i = 0`)
  * **Condition** – Checked before each iteration
  * **Update** – Executes after every iteration (e.g., `i++`)
    
<img width="992" height="496" alt="470760633-f7ad2c73-e333-4f0d-9065-172f90f5eb74" src="https://github.com/user-attachments/assets/35899eda-cb65-4a51-800d-1d39cebad38e" />

#### **2. While Loop**

* **Type**: Entry-controlled loop
* Ideal when the number of iterations isn't known beforehand.
* The loop continues as long as the condition is true.
  
<img width="988" height="495" alt="470760689-8baa14b9-dd88-422f-800d-fe4ca678fa1f" src="https://github.com/user-attachments/assets/29cf18f1-e89b-4ab3-a4b9-318d31e61c61" />

#### **3. Do-While Loop**

* **Type**: Exit-controlled loop
* Executes the loop body **at least once**, even if the condition is false.
* The condition is evaluated **after** the body runs.

<img width="991" height="494" alt="470761153-3be14645-3fce-42d3-8764-3ee92f1bfb2e" src="https://github.com/user-attachments/assets/b03031ca-837e-4976-8295-78bdaeec968a" />

#### **4. Infinite Loop**

* Occurs when the loop’s condition **always** evaluates to true.
* Typically unintentional and must be avoided unless explicitly required (e.g., in embedded systems).

#### **5. Nested Loops**

* When one loop is placed inside another.
* Commonly used in pattern generation, matrix traversal, etc.
* The **inner loop** completes all its iterations for every single iteration of the **outer loop**.


### **Programs Implemented:**

To explore loop logic, the following practical examples were coded and tested:

* **Printing even numbers from 1 to 10**
* **Reversing integer digits (using PRN as input)**
* **Simple login simulation using password**
* **Pattern printing (stars, Floyd’s triangle, alphabetical patterns)**


#### **Floyd’s Triangle:**

```plaintext
Step 1: Start  
Step 2: Initialize variables: i, j, x = 1, n = 4  
Step 3: Loop i from 1 to n  
        - Loop j from 1 to i  
        - Print x and increment x  
        - Print newline after inner loop  
Step 4: End
```

#### **Alphabet Pattern:**

```plaintext
Step 1: Start  
Step 2: Initialize variables: i, j, ch = 'A', n = 4  
Step 3: Loop i from 1 to n  
        - Loop j from 1 to i  
        - Print ch and increment ch  
        - Print newline after inner loop  
Step 4: End
```
<img width="592" height="176" alt="white_mode_alphabet" src="https://github.com/user-attachments/assets/d992fa87-0403-45f6-b653-c71ee259c045" />

#### **Star Pattern:**

```plaintext
Step 1: Start  
Step 2: Initialize variables: i, j, n = 5  
Step 3: Loop i from 1 to n  
        - Loop j from 1 to i  
        - Print "*"  
        - Print newline after inner loop  
Step 4: End
```

#### **Reversing an Integer:**

```plaintext
Step 1: Start  
Step 2: Declare variables: n, x, s = 0  
Step 3: Input n (e.g., PRN)  
Step 4: Loop while n > 0  
        - x = n % 10  
        - s = s * 10 + x  
        - n = n / 10  
Step 5: Output s  
Step 6: End
```

---

### **Conclusion:**

Through this set of programs and examples, I have developed a clearer understanding of how loops function in C++. Each type of loop whether entry controlled or exit controlled has its unique use case. The implementation of patterns and algorithms helped in reinforcing the concept of nested loops and the flow of conditions within iterative structures.

This experiment allowed me to improve my logic-building skills and apply theoretical knowledge in a practical, hands-on way.
