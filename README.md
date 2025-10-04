### Jextract Guide

[Official Jextract Guide](https://github.com/openjdk/jextract/blob/master/doc/GUIDE.md)

```shell
$ jextract --output src -t org.mylib "mylib.h"
$ jextract -l :/usr/lib/libGraphicsMagick.so \
           -I /usr/include/GraphicsMagick/ \
           --output src -t magick "<wand/magick_wand.h>"
```

```shell
$ nm -D /usr/lib/libGraphicsMagick.so
```
