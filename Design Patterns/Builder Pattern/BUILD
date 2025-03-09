cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":builder",
        ":director",
    ],
)

cc_library(
    name = "director",
    srcs = ["director.cc"],
    hdrs = ["director.h"],
    deps = [
        ":builder",
    ],
)

cc_library(
    name = "builder",
    srcs = ["builder.cc"],
    hdrs = ["builder.h"],
)