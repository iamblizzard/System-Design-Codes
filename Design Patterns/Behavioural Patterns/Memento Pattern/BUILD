cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":document",
        ":history",
    ],
)

cc_library(
    name = "history",
    srcs = ["history.cc"],
    hdrs = ["history.h"],
    deps = [
        ":document",
        ":document-memento",
    ],
)

cc_library(
    name = "document",
    srcs = ["document.cc"],
    hdrs = ["document.h"],
    deps = [
        ":document-memento",
    ],
)

cc_library(
    name = "document-memento",
    srcs = ["document-memento.cc"],
    hdrs = ["document-memento.h"],
)