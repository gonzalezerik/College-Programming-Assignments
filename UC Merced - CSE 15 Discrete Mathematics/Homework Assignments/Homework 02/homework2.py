#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Feb 15 22:47:15 2020

@author: Erik Gonzalez
CSE 15
Homework 2
"""

from logic import TruthTable

aT = TruthTable(['p and q' , 'p or -q'])

bT = TruthTable(['p or q' , '-p or -q'])

cT = TruthTable(['p -> q' , '-q -> -p'])

dT = TruthTable(['p -> q' , '-p or q'])

eT = TruthTable(['-(p and q)' , '-p or -q'])

tables = [aT, bT, cT, dT, eT]

for i in range (5):
    tables[i].latex()
    print("")