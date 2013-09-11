#!/bin/bash

echo "enter name of the user you want"

read name

useradd $name

echo "user created. select user rights"

read usright

chmod $usright  
