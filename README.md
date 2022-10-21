## How To Use

1. Run `roscore` in first terminal.　**Do not forget run roscore first.**

```shell
$ roscore
```

1. Run `rosserial` with port in sencond terminal.

```shell
$ rosrun rosserial_python serial_node.py _port:=path/to/port
```

+ If you face to `permission` issue, you can type the following command.

```shell
$ sudo chmod 666 path/to/port
```

3. Upload `talker.ino` using Arduino IDE or VSCode.

4. See topic from `talker.ino`.

```
$ rostopic echo /chatter
data: "Hello, World!"
---
data: "Hello, World!"
・
・
・
```
