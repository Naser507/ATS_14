#!/bin/bash

# ask for commit message
echo "Enter commit message:"
read msg

# add changes (respects .gitignore)
git add .

# commit
git commit -m "$msg"

# push
git push origin main

echo "Done."