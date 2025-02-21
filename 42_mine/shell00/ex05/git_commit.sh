#!/bin/bash
# This script displays the IDs of the last 5 commits in the Git repository

git log -n 5 --format="%H"
