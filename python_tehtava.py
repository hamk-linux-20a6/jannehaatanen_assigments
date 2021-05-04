#!/bin/python3

import random

kirjaimet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"

pituus = input("Salasanan pituus?")
pituus = int(pituus)

salasana =""

for c in range(pituus):
 salasana += random.choice(kirjaimet)
print(salasana)
