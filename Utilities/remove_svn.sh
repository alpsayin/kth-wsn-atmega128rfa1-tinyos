find . -iname ".svn" -type d -print0 | xargs -0 rm -r
echo 'subversion is controlled from this directory and the subdirectories!'