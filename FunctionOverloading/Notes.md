# Function Overloading

    -> Function overloading allows us to create multiple functions with the same name, so long as each identically named function has different parameter types.

    -> Basic Rules:
        -> Each overloaded function has to be differentiated from the others.
        -> Each call to an overloaded function has to resolve to an overloaded function.
        -> If an overloaded function is not differentiated, or if a function call to an overloaded function can not be resolved to an overloaded function, then a compile error will result.

    -> Function property	            Used for differentiation
        Number of parameters                Yes
        Type of parameters                  Yes
        Return type                         No

    -> Because type aliases (or typedefs) are not distinct types, overloaded functions using type aliases are not distinct from overloads using the aliased type.
        -> typedef int Height; // typedef
        using Age = int; // type alias
        void print(int value);
        void print(Age value); // not differentiated from print(int)
        void print(Height value); // not differentiated from print(int)

    -> For parameters passed by value, the const qualifier is also not considered. Therefore, the following functions are not considered to be differentiated:
        ->  void print(int);
            void print(const int); // not differentiated from print(int)

    -> The return type of a function is not considered for differentiation
        ->  int getRandomValue();
            double getRandomValue();

    -> Name mangling
        -> When the compiler compiles a function, it performs name mangling, which means the compiled name of the function is altered (“mangled”) based on various criteria, such as the number and type of parameters, so that the linker has unique names to work with.

# The argument matching sequence

    -> 1.   Compiler tries to find an exact match.
            First, the compiler will see if there is an overloaded function where the type of the arguments in the function call exactly matches the type of the parameters in the overloaded functions.
            Second, the compiler will apply a number of trivial conversions (specific conversion rules that will modify types (without modifying the value) for purposes of finding a match, example, a non-const type can be trivially converted to a const type) to the arguments in the function call.
            Converting a non-reference type to a reference type (or vice-versa) is also a trivial conversion.
            Matches made via the trivial conversions are considered exact matches.
    ->2.    If no exact match is found, the compiler tries to find a match by applying numeric promotion to the argument(s)
            Certain narrow integral and floating point types can be automatically promoted to wider types, such as int or double.
            If, after numeric promotion, a match is found, the function call is resolved.
    ->3.    If no match is found via numeric promotion, the compiler tries to find a match by applying numeric conversions
    -> 4.   If no match is found via numeric conversion, the compiler tries to find a match through any user-defined conversions.
    ->5.    If no match is found via user-defined conversion, the compiler will look for a matching function that uses ellipsis.
    ->6.    If no matches have been found by this point, the compiler gives up and will issue a compile error.

    -> Matching for functions with multiple arguments
    The function chosen must provide a better match than all the other candidate functions for at least one parameter, and no worse for all of the other parameters.
    If a function is found, it is clearly and unambiguously the best choice. If no such function can be found, the call will be considered ambiguous.
