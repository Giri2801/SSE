Approach to exploit :

1. We overflow the current heap segment to write addr into forward pointer of next free segment. 
2. Then while doing unlink, it will store this overwritten addr. In the next malloc, it will return this addr on calling malloc.
3. Hence, we can write into the addr.

Flow :
Add player A
Add player B
Add player C
Delete C
Delete B
Delete A
Add player D - same address as A
overflow A to write addr into B's forward.
Add player E - we get B address
Add player F - we get addr
Write what you want into addr now
Exit

