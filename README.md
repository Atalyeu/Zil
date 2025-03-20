# Zil Language
Zil is a low-level programming language designed to provide a unique blend of modern features and classic traits. With a focus on manual memory management and ownership control, Zil offers developers full control over system resources, while incorporating contemporary programming concepts to improve flexibility and developer experience.

# Types
| **Category**        | **Type**    | **Type Name**   | **Description**                            |
|---------------------|-------------|-----------------|--------------------------------------------|
| **Primitive Types**  | Integral | `u8` | Unsigned 8-bit integer |
|  | | `u16` | Unsigned 16-bit integer |
|  | | `u32` | Unsigned 32-bit integer |
|  | | `u64` | Unsigned 64-bit integer |
|  | | `i8`  | Signed 8-bit integer |
|  | | `i16` | Signed 16-bit integer |
|  | | `i32` | Signed 32-bit integer |
|  | | `i64` | Signed 64-bit integer |
|  | Floating | `f32` | 32-bit floating point |
|  | | `f64` | 64-bit floating point        |
|  | Non-numeric | `bool` | Boolean type     |
|  | | `char` | Character (ASCII or Unicode) |
|  | Special | `void` | No value (for functions) |
|  | | `null` | Speical type for intializing variables without value |
|  | | `undefined` | Can't be intialized to values but this is the default states of them. |
|  | | `array` | Fixed-size array |
|  | | `tuple` | Tuple |
|  | | `*void` | Pointer, replace void with desire type. |
|  | | `usize` | Unsigned integer type used for sizes and indexing |
|  | | `isize` | Unsigned integer type used for sizes and indexing |
| **Composite Types**  | Composite | `tuple` | Ordered collection of multiple values of different types |
|  |  | `enum` | Tagged union (multiple variants) |
| **Textual Types** | Textual | `string` | A dynamic or immutable sequence of characters |
| **Non-Primitive Types** | Non-Primitive | `class` | Class (for object-oriented models) |
|  | | `struct` | Struct (composite data type) |
|  | | `union` | Union (shared memory space for multiple fields) |
|  | | `interface` | Interface (defines a contract for classes to implement) |
| **Control/Flow Types** | Control/Flow | `range` | Represents a sequence of values, typically numbers |
| **Type Aliases** | Type Aliases | `type` | Type alias (renaming existing types) |


# Operators

| **Category**             | **Operator** | **Type Name**   | **Description**                            |
|--------------------------|--------------|-----------------|--------------------------------------------|
| **Math Operators** | `+` | Addition | Adds two values |
|  | `-` | Subtraction | Subtracts one value from another |
|  | `*` | Multiplication  | Multiplies two values |
|  | `/` | Division | Divides one value by another |
|  | `%` | Modulo | Returns the remainder of division |
|  | `=` | Assignment | Assigns a value to a variable |
| **Logical Operators**     | `!`          | Not | Logical negation |
|  | `>` | Greater         | Returns true if the left operand is greater than the right |
|  | `>=` | Greater Or Equal| Returns true if the left operand is greater than or equal to the right |
|  | `==` | Equal | Returns true if both operands are equal |
|  | `<`  | Less Than | Returns true if the left operand is less than the right |
|  | `<=` | Less Than Or Equal | Returns true if the left operand is less than or equal to the right |
|  | `!=` | Not Equal       | Returns true if both operands are not equal |
|  | `\|\|` | Logical Or      | Returns true if either operand is true |
|  | `&&` | Logical And | Returns true if both operands are true |
| **Bitwise Operators** | `~` | Bitwise Not | Inverts all bits |
| | `^` | Bitwise Xor | Performs bitwise XOR |
| | `\|` | Bitwise Or | Performs bitwise OR |
| | `&`  | Bitwise And | Performs bitwise AND |
| | `<<` | Bitwise Left Shift | Shifts bits to the left |
| | `>>` | Bitwise Right Shift | Shifts bits to the right |
| **Compound Assignment Operators** | `+=`   | Add and Assign  | Adds and assigns the result |
|  | `-=` | Subtract and Assign | Subtracts and assigns the result |
|  | `*=` | Multiply and Assign | Multiplies and assigns the result |
|  | `/=` | Divide and Assign | Divides and assigns the result |
|  | `%=` | Modulo and Assign | Assigns the remainder of division |
|  | `&=` | Bitwise And and Assign | Bitwise AND and assigns the result |
|  | `\|=` | Bitwise Or and Assign | Bitwise OR and assigns the result |
|  | `^=`  | Bitwise Xor and Assign | Bitwise XOR and assigns the result |
|  | `<<=` | Bitwise Left Shift and Assign | Bitwise left shift and assigns the result |
|  | `>>=` | Bitwise Right Shift and Assign | Bitwise right shift and assigns the result |
| **Pointer Operators** | `*` | Pointer Dereference | Accesses the value pointed to by a pointer |
|  | `&` | Address Of | Gets the address of a variable |
| **Increment and Decrement Operators** | `++` | Increment | Increases a value by one |
|  | `--` | Decrement | Decreases a value by one                   |
| **Type Operators** | `as` | Type Casting | Casts a value to a specified type |
| **Other Operators** | `? :` | Ternary Operator | Conditional operator (if-else in one line)  |
|  | `->` | Member Access via Pointer | Accesses a member of a structure or class through a pointer |
|  | `.` | Member Access  | Accesses a member of a structure or class |
|  | `,` | Comma Operator | Separates expressions or variables |
| **Comments** | `//` | Single Line Comment | Comments a sigle line of code |
|  | `/*` | Open Couple Row Comments | Use for opening a comment block |
|  | `*\` | Close Couple Row Comments | Use for closing a comment block |



# Keywords
**40 Keywords**
| Category | Keyword | Description |
| :---- | :---- | :---- |
| **Memory Management & Safety** | `new` | Allocates memory for a new object. |
|  | `delete` | Frees memory allocated by `new`. |
|  | `unsafe` | Marks a block of code as unsafe to allow raw pointers and other unsafe operations. |
|  | `sizeof` | Returns the size (in bytes) of a type or object. |
|  | `alignof` | Returns the alignment (in bytes) of a type. |
|  | `move` | Transfers ownership of a value, invalidating the original variable. |
|  | `volatile` | Prevents the compiler from optimizing a variable, useful in low-level programming. |
| **Types & Data Structures** | `type` | Alias for a type, can be used to create custom types. |
|  | `struct` | Defines a structure, a collection of variables of different types. |
|  | `union` | Defines a union, where all members share the same memory space. |
|  | `enum` | Defines an enumeration, a type that can have a set of named values. |
|  | `interface` | Defines an interface that can be implemented by other types. |
|  | `fn` | Defines a function. |
|  | `trait` | Defines a trait, used for shared behavior across types. |
|  | `impl` | Used to implement methods for a type or trait. |
|  | `size_t` | A type for representing sizes and memory offsets, commonly used for array indexing. |
|  | `string` | Defines a string type, a sequence of characters. |
| **Control Flow** | `if` | Conditional statement to execute a block of code if a condition is true. |
|  | `else` | Provides an alternative block of code to execute when an `if` condition is false. |
|  | `else if` | Provides an alternative block of code to execute when an `if` condition is false. |
|  | `match` | A powerful pattern matching control structure. |
|  | `for` | Looping construct for iterating over a range or collection. |
|  | `while` | Loops while a given condition is true. |
|  | `break` | Exits a loop early. |
|  | `continue` | Skips the current iteration of a loop. |
|  | `return` | Returns a value from a function. |
| **Variable & Mutability** | `let` | Declares a variable. |
|  | `mut` | Marks a variable as mutable, allowing its value to change. |
|  | `const` | Declares a constant value that cannot be changed. |
|  | `static` | Declares a static variable, retaining its value across function calls. |
|  | `extern` | Declares an external function or variable, often used for linking with other languages or libraries. |
| **Ownership & Borrowing** | `&` | Represents a reference to a value. |
|  | `&mut` | Represents a mutable reference to a value. |
|  | `own` | Used to denote ownership, transferring responsibility for freeing memory. |
|  | `drop` | Manually deallocates memory or cleans up resources. |
|  | `ref` | Creates a reference to a value without transferring ownership. |
| **Inline & Low-Level** | `asm` | Embeds assembly code directly in a program. |
|  | `inline` | Marks a function to be inlined, meaning it is expanded at the point of call. |
|  | `constexpr` | Defines a constant expression evaluated at compile time. |
|  | `explicit` | Prevents implicit conversions between types. |
|  | `typeof` | Retrieves the type of a variable or expression. |
| **Error Handling** | `panic` | Triggers a program panic, generally used for unrecoverable errors. |
| **Access Modifiers** | `public` | Specifies that a member or method is accessible from outside the class/module. |
|  | `private` | Specifies that a member or method is only accessible within the class/module. |
|  | `protected` | Specifies that a member or method is accessible within the class/module and derived classes. |
| **Type Casting** | `as` | Used for explicit type casting or conversion. |
| **Import & Namespace** | `import` | Imports an external module, library, or package for use in the program. |
|  | `namespace` | Defines a namespace to group related code or variables together. |


# Literals
| Category | Keyword |
| :---- | :---- | 
| **Integer Literal**       | `let x: u8 = 42` |               
| **Floating-point Literal**| `let x: f32 = 42.0` |                
| **String Literal**        | `let x: str = "some string"` |       
| **Boolean Literal**       | `let x: bool = true/false`|          
| **Hexadecimal Literal**   | `let x: u32 = 0x2A`     |            
| **Raw Byte Literals**     | `let x: [u8; 5] = b"\x01\x02\x03\x04\x05";` |            
| **Binary Literal**        | `let x: u8 = 0b101010` |         
| **Character Literal**     | `let x: char = 'A'` |        
| **Null Literal**          | `let x: Option<i32> = None` |        
| **Array Literal**         | `let x: [i32; 3] = [1, 2, 3]` |      
| **Tuple Literal**         | `let x: (i32, f32) = (42, 3.14)`  |  
| **Escaped String Literal**| `let x: str = "Hello\\nWorld"` | 
| **Float with Exponent**   | `let x: f64 = 1.23e4` |    
| **Octal Literal**         | `let x: u16 = 0o52` | 

## Conventions:

### Function Conventions
``` 
fn main(...args): u8 {
    zpirnt("Hello, World!");
    return 0;
}
```

```
fn fn_name(var_a: `u8`, var_b: u16): u8 {
}

```

### Naming Conventions
- **Variable Name:** `variable_name`
- **Function Name:** `function_name`
- **Class Name   :** `ClassName`
- **Struct Name  :** `StructName`
- **Union Name   :** `UnionName`
- **Enum Name    :** `EnumName`


## Future Plans

- [ ] Generics
- [ ] Macros
- [ ] Multi Threading
- [ ] Standart Library
