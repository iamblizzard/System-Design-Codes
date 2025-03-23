cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":us-charging",
        ":eu-charging",
        ":us-adapter",
    ],
)

cc_library(
    name = "us-charging",
    srcs = ["us-charging.cc"],
    hdrs = ["us-charging.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "eu-charging",
    srcs = ["eu-charging.cc"],
    hdrs = ["eu-charging.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "us-adapter",
    srcs = ["us-adapter.cc"],
    hdrs = ["us-adapter.h"],
    deps = [
        ":us-charging",
        ":eu-charging",
    ],
    visibility = ["//visibility:public"],
)