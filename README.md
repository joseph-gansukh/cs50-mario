# mario-1
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

The program let's user to decide how tall the pyramid should be by first prompting them for a positive integer between 1 and 8, inclusive. Below is how the program should work if the user inputs 8: 

```
$ ./mario-1
Height: 4
   #
  ##
 ###
####
```