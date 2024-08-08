## stdio.h
### fgets
```c
char * fgets ( char * str, int num, FILE * stream );
```
**Get string from stream**
- read characters from stream and store them as a C string into `str` until **num-1** characters have
been read or either a newline or EOF is reached -- whichever happens first
- a newline character makes `fgets` stop reading, but is considered a valid character by the
function and included in the string copied to `str`
- a terminating null character is automatically appended after the characters copied to `str`
- differences between `fgets` and `gets`:
    - `fgets` accepts a stream argument
    - `fgets` allows to specify the maximum size of `str` and includes in the string any ending newline character

#### param
- `str`
    - Pointer to an array of `char`s where the string read is copied
- `num`
    - Maximum number of characters to be copied into `str`, including the terminating
    null character
- `stream`
    - Pointer to a `FILE` object that identifies an input stream
    - `stdin` can be used as an argument to read from the **standard input**

#### return
- on success, the function returns `str`
- if EOF is encountered while attempting to read a character, the EOF indicator (`feof`) is set
    - if this happens before any characters could be read, the pointer returned is a null
    pointer and the contents of `str` remain unchanged
- if a read error occurs, the error indicator (`ferror`) is set and a null pointer is also
returned, but the contents of `str` may have changed
