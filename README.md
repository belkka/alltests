# alltests — test runner for competitive programming

## Basic usage:

[![asciicast](./docs/demo.svg)](https://asciinema.org/a/626660)

1. Prepare static tests as pairs of `*.in` and `*.out` files with the same base name.
2. Run `alltests <cmd>` to execute `<cmd>` with every `*.in` file as stdin and compare stdout with corresponding `*.out` file


## Requirements:

* Other scripts from this repo must be in $PATH: `nice_paste`, `runcpp`, (optional, requires python3) `floatdiff`
* Unix commands: find, sed, time, rm


## Examples (aplusb):

Run command `python2 sum.py` on the given set of tests (test/\*.in)
and compare outputs with corresponding files (test/\*.out):
```bash
$ alltests python2 sum.py
```

Automatically find and use `*.py` or `*.cpp` file.
Python files have precedence over C++.
If several files of the same filetype are available random is choosen.
```bash
$ alltests
```

Abort on the first failed test:
```bash
$ alltests --cpp sum.cpp --abort-on-fail
```

Print only results of tests, no verbose stdout/correct answer:
```bash
$ alltests --cpp sum.cpp --short
```

Print help:
```bash
$ alltests --help
```


## Examples (sort):

If you have several `*.py` files in the same directory:
```bash
$ alltests python sort.py
```

You can specify any command for testing:
```bash
$ alltests sort  # unix sort command
```
