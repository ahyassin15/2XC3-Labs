#!/bin/bash

#Check if a commit message is provided by the user (check if the first argument passed to the script is empty)
if [ -z "$1" ]; then
    #If the argument is empty, print error message and usage instructions
    echo "Error: No commit message provided."
    echo "Usage: ./git_commit_push.sh \"Your commit message\""
    exit 1
fi

#Stage all changes to git (new, modified, or deleted files) in the current directory
git add .

#Commit the staged changes with the commit message provided as the first argument
git commit -m "$1"

#Check if a tag is provided by the user (check if the second argument passed to the script is not empty)
if [ ! -z "$2" ]; then
    #Add the tag using the second argument
    git tag -a "$2" -m "Tagging version $2"
    echo "Tagged with version $2"
fi

#Push the commits and tags to the remote repo
git push origin --tags

#Print a success message to the terminal that the changes were committed, tagged, and pushed
echo "Changes committed and pushed successfully!"