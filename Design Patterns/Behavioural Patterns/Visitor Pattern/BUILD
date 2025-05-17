cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":shapes",
        ":shape-visitors",
    ],
)

cc_library(
    name = "shape-visitors",
    hdrs = ["shape-visitors.h"],
    srcs = ["shape-visitors.cc"],
    deps = [
        ":shape-visitor-interface",
        ":shapes",
    ],
)

cc_library(
    name = "shapes",
    hdrs = ["shapes.h"],
    srcs = ["shapes.cc"],
    deps = [
        ":shape-interface",
        ":shape-visitor-interface",
    ],
)

cc_library(
    name = "shape-visitor-interface",
    hdrs = ["shape-visitor-interface.h"],
)

cc_library(
    name = "shape-interface",
    hdrs = ["shape-interface.h"],
)