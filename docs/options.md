# Options

## Table of contents

* [-h, --help](#-h---help)
  * [Usage](#usage)
* [-l, --length](#-l---length)
  * [Usage](#usage-1)
* [-p, --prefix](#-p---prefix)
  * [Usage](#usage-2)
* [-s, --suffix](#-s---suffix)
  * [Usage](#usage-3)
* [-a, --amount](#-a---amount)
  * [Usage](#usage-4)
* [-v, --version](#-v---version)
  * [Usage](#usage-5)
* [-l, --licence](#-l---licence)
  * [Usage](#usage-6)

## -h, --help

Displays help text.

### Usage

```bash
ggetpasswd -h
ggetpasswd --help
```

## -l, --length

Sets the length for the password. This only includes the base password string (prefixes and
suffixes do not count towards the length specified here).

### Usage

```bash
ggetpasswd -l3
ggetpasswd --length 3
```

## -p, --prefix

Sets a prefix.

### Usage

```bash
ggetpasswd -p "R"
ggetpasswd --prefix "REDDIT"
```

## -s, --suffix

Sets a suffix.

### Usage

```bash
ggetpasswd -s "R"
ggetpasswd --suffix "REDDIT"
```

## -a, --amount

Sets the amount of passwords that shall be generated.

### Usage

```bash
ggetpasswd -a16
ggetpasswd --amount 16
```

## -v, --version

Displays version information

### Usage

```bash
ggetpasswd -v
ggetpasswd --version
```

## -L, --licence

Displays licences and licensing information.

### Usage

```bash
ggetpasswd -L
ggetpasswd --licence
```
