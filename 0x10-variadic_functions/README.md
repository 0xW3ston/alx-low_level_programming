This subproject aims to teach us how to use variadic functions,
they're essentially a way to pass an variable amount of arguments
to a function, such as the case with printf().

it's like an SQL Cursor:

{Variadic List} that contains information => va_list arg;

{OPEN} => (aka allocate the memory for the arguments):
    va_start(arg, n) [n being something to iterate on]
{FETCH NEXT} =>
    va_arg(arg, <Type>) [Type being datatype of the argument
        like int, double, char, char *, ect..]
{CLOSE} => (aka deallocate the memory for the arguments):
    va_end(arg)