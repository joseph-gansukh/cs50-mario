# mario-1.c
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per below.

![screenshot of Mario jumping up a right-aligned pyramid](./img/mario-1.png)

Recreated those pyramids in C, albeit in text, using hashes (#) for bricks, as below. Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

The program let's user to decide how tall the pyramid should be by first prompting them for a positive integer between 1 and 8, inclusive. Below is how the program should work if the user inputs 4: 

```
$ ./mario-1
Height: 4
   #
  ##
 ###
####
```

***

# mario-2.c

Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per below.

![screenshot of Mario jumping over adjacent pyramids](img/mario-2.png)

Recreated those pyramids in C, albeit in text, using hashes (#) for bricks, as below. Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.

```
   #  #
  ##  ##
 ###  ###
####  ####
```

The program let's user to decide how tall the pyramid should be by first prompting them for a positive integer between 1 and 8, inclusive. Below is how the program should work if the user inputs 4:

```
$ ./mario-2
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

***

# How to run the programs?

1. Compile by running make mario or clang -o mario mario.c -lcs50 in terminal
2. Run the program by running ./mario-1 or ./mario-2


# Word of caution when compiling

You must install CS50 library for C in order to compile. Installation guide is [here](https://cs50.readthedocs.io/library/c/). 
