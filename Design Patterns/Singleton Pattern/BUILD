cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":singleton-pattern-eager",
        "singleton-pattern-lazy",
    ],
)

cc_library(
    name = "singleton-pattern-eager",
    srcs = ["singleton-pattern-eager.cc"],
    hdrs = ["singleton-pattern-eager.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "singleton-pattern-lazy",
    srcs = ["singleton-pattern-lazy.cc"],
    hdrs = ["singleton-pattern-lazy.h"],
    visibility = ["//visibility:public"],
)