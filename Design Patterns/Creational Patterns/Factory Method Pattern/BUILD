cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":transport",
        ":logistics",
    ],
)

cc_library(
    name = "transport",
    srcs = ["transport.cc"],
    hdrs = ["transport.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "logistics",
    srcs = ["logistics.cc"],
    hdrs = ["logistics.h"],
    deps = [
        ":transport",
    ],
    visibility = ["//visibility:public"],
)