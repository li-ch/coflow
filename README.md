Bandwdith enforcer
===

Based on [Coflow scheduling in Java](https://github.com/byronyi/coflow).

Dependency
---

Note that with the all-in-one jar, there is no need to specify the dependencies manually.

* Scala 2.10
* Akka 2.3.14 (with netty 3.8.0.Final and protobuf-java 2.5.0)
* Javassist 3.20
* Netty 4 (For running example)

This dependencies is compatible with Hadoop 2.7.1 and Spark 1.6.


Build
---

Require [Gradle](http://gradle.org/) to build.

```bash
$ git clone https://github.com/li-ch/enforcer
$ cd coflow
$ gradle jar # for compile-time dependency
$ gradle shadowJar # for runtime linking and all its dependencies
```

Find the built library ``(*.jar)`` in ``core/build/libs``.
