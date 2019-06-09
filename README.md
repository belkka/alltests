alltests -- run arbitrary command on the set of tests

## Description: TODO

## Requirements:

* Two other scripts from this repo to be in PATH: nice_paste, runcpp
* Unix commands: find, sed, time, rm


## Examples (aplusb):

$ alltests python2 sum.py

Run command 'python2 sum.py' on the given set of tests (test/*.in)
and compare outputs with corresponding files (test/*.out)


$ alltests

Automatically find and use *.py or *.cpp file. Python source code has precedence over C++
If several choices available random is choosen.


$ alltests --cpp sum.cpp --abort-on-fail

Aborts on the first test that is not passed


$ alltests --cpp sum.cpp --short

Print only results of tests, no verbose stdout/correct answer


$ alltests --help

Try it


## Examples (sort):

$ alltests python sort.py

$ alltests sort  # unix sort command

It works! You can specify any command!
