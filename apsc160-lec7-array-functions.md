Lecture 7: Functions that operate on arrays
================

-   [Intro](#intro)
-   [Today’s new skills](#todays-new-skills)
-   [Review of functions and arrays](#review-of-functions-and-arrays)
    -   [Why do we write functions?](#why-do-we-write-functions)
    -   [Summing up two values in a
        function](#summing-up-two-values-in-a-function)
    -   [Summing up the values of an array in a
        function](#summing-up-the-values-of-an-array-in-a-function)
-   [Passing arrays to functions](#passing-arrays-to-functions)
    -   [Best practices when passing arrays to
        functions](#best-practices-when-passing-arrays-to-functions)
        -   [Being explicit](#being-explicit)
        -   [Passing arrays of any size](#passing-arrays-of-any-size)
        -   [Testing that the function is working as
            intended](#testing-that-the-function-is-working-as-intended)
    -   [Modifying values of an input
        array](#modifying-values-of-an-input-array)
    -   [Modyfying each element of an array without overwriting the
        orignial](#modyfying-each-element-of-an-array-without-overwriting-the-orignial)
-   [Which new skills did we learn
    today](#which-new-skills-did-we-learn-today)

# Intro

Good afternoon everyone and welcome to our 7th lecture! Today we will be
learning how to create functions that operate on arrays. You can find
the lecture notes online as usual, and I also pasted the link in the
chat right now. Feel free to add your own comments to the lecture notes,
but I recommend that you follow along with what I am doing rather than
read the notes during the lecture since this is more effective for your
learning. If there is something you don’t understand, just raise your
hand and ask a question or type it out in chat and I will get to in a
few minutes. I also encourage you to turn on your camera if possible,
that makes it easier for me to teach, especially when discussing with
each other.

The specific skills you will learn today are the following:

# Today’s new skills

-   Create functions that take arrays as inputs.
-   Store data either in a new array or overwriting the original.

There are a few sub-components to each one of these, which we will get
into in detail during the lecture. But before we jump into learning
these new skills, let’s briefly review two topics from preview lectures
that are important prerequisites for today’s class.

# Review of functions and arrays

## Why do we write functions?

Last lecture we covered the why and how of functions, so let’s get
active right away by answering the following (you can select multiple).
We will use the same polling system as before to record answers to you
questions, which I just posted in the chat <http://etc.ch/o6Kn>.

**Q: What are they main benefits of using separate functions instead of
putting all the code inside `main`**?

1.  Programs that are broken down into smaller pieces are easier to
    overview since we can focus on *what* is happening without the
    details of *how* it is happening.
2.  Copying and pasting the same code snippet in multiple places is
    error-prone.
3.  When updating code, you only want to update and don’t have to search
    around for other places where you used the same snippet.
4.  It makes your programs easier to debug.

<details>
<summary>
Click here to view the solution
</summary>
And the answer is… all of the above! Code that is modularized/abstracted
into functions vastly improves the reading experience and we saw last
lecture how easy it is to make mistakes when copying code around. It is
therefore more effective to follow the Don’t Repeat Yourself (DRY)
principle, and use functions instead of copying code around.
</details>

## Summing up two values in a function

Now let’s review the short program we created last lecture that uses a
function to calculate the sum of two values.

``` c
#include <stdio.h>


int add_two_values(int x, int y) {
    /* Add two values
     
    Parameters
       x: The first value to add
       y: The second value to add
     
     Returns
        Sum of the two values
    */
    return x + y;
}

int main() {
    int sum = add_two_values(5, 4);
  
    printf("%d", sum);

    return 0;
}
```

**Q: What would be the result from running this program?**

1.  It prints the value 9.
2.  It returns the value 9.
3.  An error is thrown during compilation.

<details>
<summary>
Click here to view the solution
</summary>
The answer is 1 our function will print out the value of the addition.
It returns 0 at the end if there are no errors, to indicate that
everything went OK. Let’s compile it and run it to see for ourselves,
using the same compilation command as in the previous lectures.
</details>

<br>

What if we want to add more values than just two? We could add
additional input parameters to our addition function, but this would
quickly get unwieldy, and we would only account for a specific amount of
values to sum up, maybe we sometimes wanted to sum of two values and
sometimes nine? This is a good use cases for an array!

## Summing up the values of an array in a function

The `main` function will use the same logic as before, but we will
update our addition function. Let’s start by updating its interface and
description to reflect its new functionality. Remember that it is good
to write out the function description first so that you have a
conceptual understanding of what your function should do and which
parameters are necessary for this task.

``` c
#include <stdio.h>


int add_values() {
    /* Add multiple values
     
    Returns
        The sum of all the values in the array
    */
    int sum = 0;
    
    // Code for array creation and summation will be added here
    
    return sum;
}

int main() {
    int sum = add_values();
  
    printf("%d", sum);
    
    return 0;
}
```

To keep things simple, let’s start by creating the array inside the
addition function. **Q: Help me out, do you remember the syntax for
creating an array with the values 1, 2, and 3?**

1.  `values[] = {1, 2, 3}`
2.  `values() = [1, 2, 3]`
3.  `values{} = (1, 2, 3)`

<details>
<summary>
Click here to view the solution
</summary>
The answer is 1 so lets go ahead and add that to the function:
</details>

<br>

``` c
#include <stdio.h>


int add_values() {
    /* Add multiple values
     
    Returns
        The sum of all the values in the array
    */
    int sum;
    int values[] = {1, 2, 3};
    
    // Code for summation will be added here
    
    return sum;
}

int main() {
    int sum = add_values();
  
    printf("%d", sum);
    
    return 0;
}
```

Now for something we have not covered yet, how do we add the values of
the array together? Although we haven’t gone through it, take a few
moments and thing about it conceptually. **Q: Which strategy do you
think we could use to add all values in an array together?**

1.  Use the built in array sum function.
2.  Loop through the array and add each number to a sum variable.
3.  Create separate variables for each position in the array and then
    sum them up.

<details>
<summary>
Click here to view the solution
</summary>
The correct answer here is 2, we will loop through the array and sum up
the values, let’s code it out!
</details>

<br>

``` c
#include <stdio.h>


int add_values() {
    /* Add multiple values
     
    Returns
        The sum of all the values in the array
    */
    int values[] = {1, 2, 3};
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += values[i];
    }
    
    return sum;
}

int main() {
    int sum = add_values();
  
    printf("%d", sum);
    
    return 0;
}
```

Let’s try to compile and run this program to see if the output is what
we expect. We got 6 which equals 1 + 2 + 3, so all good!

However, this function is not very flexible as we don’t have any
possibility to control the values that are summed up, and the function
will return 6 every time. It would be more useful if we could specify
the values of array from the calling function (`main`), For example, we
might be creating this array in a separate function such as by reading
in data from disk, so that the values vary depending on which data file
we read in. In order to do this we need to master today’s main topic,
how to pass arrays to functions.

# Passing arrays to functions

How can we modify our program so that the array is created in the main
function and then passed to `add_values`? The first way that comes to
mind might be to move the creation of the `values` array into `main` and
pass it as a parameter to the `add_values` function similar to how we
did with `x` and `y` when we added two values together. Let’s try this.

To make it clear which variable is active in which scope, we will name
the array variable `my_values` inside `main`.

``` c
#include <stdio.h>


int add_values(int values) {
    /* Add multiple values
     
    Parameters
        values: Array with values to be added.
     
    Returns
        The sum of all the values in the array.
    */
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += values[i];
    }
    
    return sum;
}

int main() {
    int my_values[] = {1, 2, 3};
    int sum = add_values(my_values);
    
    printf("%d", sum);
    
    return 0;
}
```

This is conceptually and syntactically similar to how we passed the
single integers `x` and `y` to the `add_two_values` function, so let’s
see what happens when we compile and run it:

``` text
note: expected ‘int’ but argument is of type ‘int *’
    4 | int add_values(int values) {
```

Oh oh, something went wrong and C is complaining that it received an
`int *` instead of an `int`.

**Q: Do you remember what `int *` represents?**

1.  An unsigned integer
2.  A pointer to an integer
3.  An integer array

<details>
<summary>
Click here to view the solution
</summary>
The correct answer is 2, `int *` is how we indicate that a variable is a
pointer to an integer. We talked about pointers earlier in this course
and you might remember that we encountered a similar error when we tried
to print a pointer value. Let’s refresh that!
</details>

<br>

``` c
#include <stdio.h>


int main() {
    int age = 25;
    int *age_pointer = &age;
    
    printf("%d", age_pointer);
    
    return 0;
}
```

This throws a very similar warning to what we just saw with the arrays.

``` text
warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int *’ 
```

To fix this example, we would make need to make sure that `printf` is
*expecting to receive a pointer*, by using `printf("%p", age_pointer);`.
Likewise we need to change our array addition function so that *it also
expects to receive a pointer*, by using `int *` instead of just `int`
when specifying the input parameter:

``` c
#include <stdio.h>


int add_values(int values[]) {
    /* Add multiple values
     
    Parameters
        values: Array with values to be added.
     
    Returns
        The sum of all the values in the array.
    */
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += values[i];
    }
    
    return sum;
}

int main() {
    int my_values[] = {1, 2, 3};
    int sum = add_values(my_values);
    
    printf("%d", sum);
    
    return 0;
}
```

This works! But what is happening here, we passed an array, not a
pointer right? The answer is that in C, arrays that are passed into
functions as actual parameters are converted into pointers (usually we
say that they *decay* into pointers).

You might initially find this behavior unintuitive, since other variable
types such as single integers and floats are passed as copies of their
actual values, so this is something you have to get used to. One great
advantage of this behavior is that we avoid making copies of arrays that
could potentially be very large and take up a lot of memory when they
are passed to functions.

That’s it! You know the basics of how to pass arrays as arguments to
functions, great job so far! Pat yourself on the shoulder and let’s
continue on to see how we can upgrade our functions with a few best
practices and conveniences.

## Best practices when passing arrays to functions

### Being explicit

Although `int *values` is valid syntax for passing a pointer to a
function, you will see that many C programs use `int values[]` instead.
In a function definition, these two syntaxes are identical to the C
compiler, but it can be convenient to use `int values[]` to communicate
to whoever is reading your program that this function is specifically
expecting a pointer to an array. *Note that these syntaxes are not
equivalent outside function definitions*.

### Passing arrays of any size

So far, we have only tried to pass arrays of size three. **Q: What do
you think would happen if we changed the array to contain four values?**

``` c
int my_values[] = {1, 2, 3, 4};
```

1.  It would print the sum of the four values: 10
2.  It would still only print the sum of the three first values: 6
3.  There would be an error because our loop does not handle four
    values.

<details>
<summary>
Click here to view the solution
</summary>
Let’s try running and see what happens. Looks like it would still only
print the sum of the first three values. The reason is that the loop
only iterates as long as `i < 3`.
</details>

<br>

The current behavior is not very useful so let’s add a parameter that
controls the size of the array.

``` c
#include <stdio.h>


int add_values(int values[], int size) {
    /* Add multiple values
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
     
    Returns
        The sum of all the values in the array.
    */
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    
    return sum;
}

int main() {
    int my_values[] = {1, 2, 3, 4};
    int sum = add_values(my_values, 4);
    
    printf("%d", sum);
    
    return 0;
}
```

Nice, now we are able to pass an array of any length as long as we also
update the size parameter. Note that we need to calculate this size
before the array decays to a pointer, and then pass the size value to
the function as a parameter.

------------------------------------------------------------------------

However, it is still a little bit inconvenient to pass both the array
and it size separately. Instead we can use the strategy saw in a
previous lecture for determining the length of an array with `sizeof`:

``` c
#include <stdio.h>


int add_values(int values[], size_t size) {
    /* Add multiple values
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
     
    Returns
        The sum of all the values in the array.
    */
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    
    return sum;
}

int main() {
    int my_values[] = {1, 2, 3, 4};
    size_t my_values_size = sizeof my_values / sizeof my_values[0];
    
    int sum = add_values(my_values, my_values_size);
    printf("%d", sum);
    
    return 0;
}
```

**Q: Do you remember why we use `size_t` here instead of `int`?**

1.  `size_t` is a special type of `unsigned int` that is more efficient
    and portable to use for values returned from `sizeof`.
2.  No reason, we might as well use int.
3.  `int` would lead to a compilation error.

<details>
<summary>
Click here to view the solution
</summary>
Number 1 is correct and it is important to note that we have to
calculate the size outside the function since it has decayed to a
pointer inside. Now our function is very versatile!
</details>

<br>

------------------------------------------------------------------------

### Testing that the function is working as intended

As we discussed in a previous lecture, tests are a best practice for any
function, not just those that handle with array input parameters, so
this is just a reminder to write tests for your functions.

Remember that the comments we have made to describe the functions
purpose are not only helpful when writing out the function body, but
also a good starting point for what you want to write a test for.

A suitable test for our addition function could look like the following
(and just as before, you can put these into a separate test function):

    #include <assert.h>

    int test_values[] = {1, 2, 3};
    assert(add_values(test_values, 3) == 6);

## Modifying values of an input array

So far we have looked at how we can pass an array pointer to calculate
and return a single value, such as the sum. But what if we want to
create and return a new value for each element in the array? For
example, we often want to perform an operation on each value in the
array and return the new values.

Here we will create a function that multiplies each value of an array
with a constant. Let’s first change the function name, description, and
modify the formal and actual parameters:

``` c
#include <stdio.h>


void multiply_values(int values[], size_t size, int multiplier) {
    /* Multiply each number in an array with a constant
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
        multiplier: The value to multiply the array with
    */
    
    // Multiplication of array values will be added here
}

int main() {
    int my_values[] = {1, 2, 3};
    size_t my_values_size = sizeof my_values / sizeof my_values[0];
    
    multiply_values(my_values, my_values_size, 2);

    return 0;
}
```

Now lets add the actual multiplication of the array elements. As we did
when calculating the sum, we will use a for loop to iterate through the
array, but now we are saving the result of the multiplication of each
value in the array:

``` c
#include <stdio.h>


void multiply_values(int values[], size_t size, int multiplier) {
    /* Multiply each number in an array with a constant
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
    */
    for (int i = 0; i < size; i++) {
        values[i] = values[i] * multiplier;
        // Print to check that we are doing what we think we are
        printf("%d", values[i]);
    }
}

int main() {
    int my_values[] = {1, 2, 3};
    size_t my_values_size = sizeof my_values / sizeof my_values[0];
    
    multiply_values(my_values, my_values_size, 2);

    return 0;
}
```

Our printing function shows us that we have multiplied and stored these
values correctly. **Q: What do you think we need to do to access the
multiplied values in the `main` functions?**

1.  Return the `values` array and assign it to a new variable in `main`.
2.  Nothing, since we passed the pointer value, the original array
    `my_values` is already updated.
3.  Create another for loop in main where we update each value of the
    `my_values` array with the results from the call to
    `multiply_values`.

<details>
<summary>
Click here to view the solution
</summary>
The correct answer here is 2, but let’s go through the first solution to
understand what happens.
</details>

<br>

If we append `return values` to the multiplication function, we will see
a familiar error.

``` text
warning: returning ‘int *’ from a function with return type ‘int’ makes integer from pointer without a cast
```

Remember, `values` is just a pointer to the original array `my_array`,
so there is no new modified array for us to return from
`multiply_values`. Rather, the pointer `values` has been pointing to the
`my_values` array in `main`, so the modifications we have made are
already present in the `main` function. We can see this by printing the
`my_values` array after the call to `multiply_values`.

``` c
#include <stdio.h>


void multiply_values(int values[], int size, int multiplier) {
    /* Multiply each number in an array with a constant
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
        multiplier: Multiplier for the input array
    */
    for (int i = 0; i < size; i++) {
        values[i] = values[i] * 2;
    }
}

int main() {
    int my_values[] = {1, 2, 3};
    size_t my_values_size = sizeof my_values / sizeof my_values[0];
    
    multiply_values(my_values, my_values_size, 2);

    for (int i = 0; i < my_values_size; i++) {
        printf("%d", my_values[i]);
    }

    return 0;
}
```

As you can see we have already modified the `my_values` array in `main`!
This always happens when a function decays to a pointer, since that
parameter will be pointing back to the original array.

## Modyfying each element of an array without overwriting the orignial

What if we don’t want to modify the `my_values` array, but instead
return the new multiplied values as another array? This is useful if we
want to perform another operation on `my_values` later, so we don’t want
the values to change.

**Q: Take a few seconds and think about what could be a reasonable
approach here:**

1.  Create a new empty array in `main`, and fill it with the multiplied
    values inside `multiply_values`, by passing its pointer.
2.  Create a copy of `my_values` in `main` and pass the copy to
    `multiply_values` where it gets modified as above.

<details>
<summary>
Click here to view the solution
</summary>
…In fact, either of these would work in this case! However, the second
approach only works well if the number of new values are the same size
as the original array. The first approach is more versatile, because the
empty array could have any size. This would be useful if we are not
returning the exact same numbers of values as in the original array,
such as every even number.
</details>

<br>

Let’s see how the multiplication function could look with the first
approach.

``` c
#include <stdio.h>


void multiply_values(int values[], int size, int multiplier, int new_values[]) {
    /* Multiply each number in an array with a constant
     
    Parameters
        values: Array with values to be added.
        size: The size of the array
        multiplier: Multiplier for the input array
        new_values: Array to store the new values
    */
    for (int i = 0; i < size; i++) {
        new_values[i] = values[i] * multiplier;
    }
}

int main() {
    int my_values[] = {1, 2, 3};
    size_t my_values_size = sizeof my_values / sizeof my_values[0];
    int my_new_values[my_values_size];
    
    multiply_values(my_values, my_values_size, 2, my_new_values);

    // Print the original array
    for (int i = 0; i < my_values_size; i++) {
        printf("%d", my_values[i]);
    }
    // Print the multiplied values array
    printf("\n");
    for (int i = 0; i < my_values_size; i++) {
        printf("%d", my_new_values[i]);
    }

    return 0;
}
```

**Q: Can you think of one thing we could improve above? I will give you
a hint and say that it is related to the printing of the values.**

<details>
<summary>
Click here to view the solution
</summary>
Since we are performing the same task twice we should create a
`print_array` function so that we avoid copy pasting the same code.
Remember that whenever you copy paste the same code that should be an
alert where you ask your self whether it makes more sense to create a
function.
</details>

<br>

That’s it! Those were all the new concept I wanted to introduce today,
great job everyone! Let’s finish up by reviewing what we learned today.

# Which new skills did we learn today

-   Create functions that take arrays as inputs.
    -   Arrays decay to pointers when passed as function input.
    -   The notation `function(array[])` indicates that a function
        expects an array pointer.
    -   The array size must be calculated before it decays to a pointer.
-   Store computed values either in the original or a new array inside a
    function.
    -   Modifications done to the pointer will overwrite the original
        array.
    -   If we want to avoid overwriting, we need to pass a second array
        pointer indicating where to store the new values.
