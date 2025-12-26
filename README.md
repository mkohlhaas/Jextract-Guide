### Jextract Guide

[Official Jextract Guide](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md)

#### Installation

- [Arch Linux Package](https://aur.archlinux.org/packages/jextract-bin)

- Installation

  ```shell
  # download snapshot
  $ cd /tmp
  $ wget https://aur.archlinux.org/cgit/aur.git/snapshot/jextract-bin.tar.gz
  $ tar xvzf jextract-bin.tar.gz
  $ cd jextract-bin
  $ makepkg -si
  ```

- Check Installation

  ```shell
  $ jextract --help
  ```

- Example

  ```shell
  $ nm -D /usr/lib/libGraphicsMagick.so
  $ jextract --output src -t org.mylib mylib.h
  ```
