#!/bin/bash
gcc -o a.out $GEDIT_CURRENT_DOCUMENT_NAME
chmod +x ./a.out
./a.out
rm ./a.out
