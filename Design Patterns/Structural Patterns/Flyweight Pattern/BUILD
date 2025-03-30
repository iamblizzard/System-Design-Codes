cc_binary (
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":forest",
        ":tree",
    ],
)

cc_library (
    name = "forest",
    srcs = ["forest.cc"],
    hdrs = ["forest.h"],
    deps = [":tree"],
)

cc_library (
    name = "tree",
    srcs = ["tree.cc"],
    hdrs = ["tree.h"],
)