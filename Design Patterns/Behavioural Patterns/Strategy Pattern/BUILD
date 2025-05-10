cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":sorting-context",
        ":sorting-strategy",
    ],
)

cc_library(
    name = "sorting-strategy",
    srcs = ["sorting-strategy.cc"],
    hdrs = ["sorting-strategy.h"],
)

cc_library(
    name = "sorting-context",
    srcs = ["sorting-context.cc"],
    hdrs = ["sorting-context.h"],
    deps = [
        ":sorting-strategy",
    ],
)