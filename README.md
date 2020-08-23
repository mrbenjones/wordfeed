# Word feed utility.
A utility to extract unique words from text files in order to make
vocabulary lists.
## Eventual Goal
By the end of 3 weeks, I want to have a utility that, given a file
containing a complete list of word characters, including
word-continuity characters (example '-'), takes an input file, and
spits out every unique word in the file.  Like a true unix utility, it
will not sort, since we already have sort.
## Technologies
Tokenization, hash maps or tries.
## Iterations
I want to produce something useful at each stage.  Obviously the first
stage is to pick out strings of whitespace delimited characters
strings, sifting out punctuation as I go (post-processing), and
spitting out the result (since I can use sort and uniq).  I want to
track the time per kilobyte input, and per unique word.
### First stage
spit out whitespace delimited strings, allowing me to use sed, sort,
and uniq to get the list that I want.

| First product |
|-----------------|
| Given file, remove whitespace and print a line with all contiguous |
| non-whitespace |



