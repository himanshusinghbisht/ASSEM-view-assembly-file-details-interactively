# ASSEM-view-assembly-file-details-interactively
ASSEM can be used to view assembly ( .out) file contents in a menu drive format.

This tool is for linux distros!

We write codes in c/c++ and an object file is created.

To view the contents of obj file (.out) we use objdump command, but remembring the flags is quite daunting.

so here i have a tool to remove such redundancy , introducing ASSEM.

download the code and compile it or simply download the binary and add it to the path.

To add ASSEM to path , i recommend 2 methods -

1- copy ASSEM object file to /usr/local/bin


2- Add the file where ASSEM is located to path by using the following command on terminal-
PATH="location:$PATH"
ex-
PATH="Desktop/github/downloads:$PATH"

by adding the tool the path it will be easier to use it from any location in the computer 

HOW TO USE ?

REMEMBEER This -
after opening terminal use 

file=object-file-name

then use 

./ASSEM {enter}

ex-

let's assume that the name of object file is helloworld or a.out

//for helloworld
file=helloworld // no spaces after or before =
./ASSEM

//for a.out
file=a.out
./ASSEM


Thank you!
