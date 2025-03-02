# The hidden “this” pointer

    -> Inside every member function, the keyword this is a const pointer that holds the address of the current implicit object.

# There are three types of const Pointer

    Pointer Type	        Can Change Pointer?	    Can Modify Value?
    const int* ptr	            ✅ Yes	                ❌ No
    int* const ptr	            ❌ No	                ✅ Yes
    const int* const ptr	    ❌ No	                ❌ No

# Note

    -> For non-const member functions, this is a const pointer to a non-const value (meaning this cannot be pointed at something else, but the object pointing to may be modified). With const member functions, this is a const pointer to a const value (meaning the pointer cannot be pointed at something else, nor may the object being pointed to be modified).

    -> Function Type	                this Type	                Can Modify Object?
    Non-const function	        Example* const this	                ✅ Yes
    Const function	          const Example* const this	            ❌ No

    ->All non-static member functions have a this pointer that refers to the object the function was called on.

# Static Member Function

    -> A static member function is a function that belongs to the class itself rather than any specific object.

    -> 🔹 Key Properties of Static Member Functions
        ✅ Can be called without creating an object
        ✅ Cannot access non-static data members
        ✅ Can only access static members (variables & functions)
        ✅ Cannot use this pointer

# Classes and Headers

    -> C++ allows us to separate the “declaration” portion of the class from the “implementation” portion by defining member functions outside of the class definition.

    -> Member functions are defined outside the class type just like non-member functions. The only difference is that we must prefix the member function names with the name of the class type (in this case, Date::) so the compiler knows we’re defining a member of that class type rather than a non-member.

# Destructors

    -> Classes have another type of special member function that is called automatically when an object of a non-aggregate class type is destroyed. This function is called a destructor. Destructors are designed to allow a class to do any necessary clean up before an object of the class is destroyed.

    -> Naming
        Must have the same name as the class, preceded by a tilde (~).
        Can’t take arguments.
        Has no return type.
    -> Points
        A class can only have a single destructor.
        Destructors may safely call other member functions since the object isn’t destroyed until after the destructor executes.

    -> Implicit destructor
        If a non-aggregate class type object has no user-declared destructor, the compiler will generate a destructor with an empty body. It is effectively just a placeholder.

    -> std::exit() function problem
    The std::exit() function, can be used to terminate your program immediately.
    Local variables are not destroyed first, and because of this, no destructors will be called.

# Class template with member functions

    ->
    