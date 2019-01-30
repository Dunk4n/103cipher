# 103cipher
Crypté et décrypté un mesage avec la matrice d'une clé

# How does it work ?
OPTION: 0 to cipher et 1 to decipher

./103cipher [MESSAGE] [KEY] [OPTION]

# Exemple

./103cipher "hello" "key" 0  
Decrypted message:  
Key matrix:  
107	101  
121	0  

Encrypted message:  
23349 10504 24624 10908 11877 11211  


./103cipher "h23349 10504 24624 10908 11877 11211" "key" 1  
Key matrix:  
0.0	0.008  
0.01	-0.009  

Decrypted message:  
hello  

# Warning
The key must not have too much similar character

# language
C
