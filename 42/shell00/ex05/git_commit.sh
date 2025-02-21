#!/bin/bash
# script to show IDs of the last 5 commits in the Git repo

git log -n 5 --format="%H"
