cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":SingletonPatternEager",
        "SingletonPatternLazy",
    ],
)

cc_library(
    name = "SingletonPatternEager",
    srcs = ["SingletonPatternEager.cc"],
    hdrs = ["SingletonPatternEager.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "SingletonPatternLazy",
    srcs = ["SingletonPatternLazy.cc"],
    hdrs = ["SingletonPatternLazy.h"],
    visibility = ["//visibility:public"],
)