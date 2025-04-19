cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":weather-station",
        ":observer-devices",
        ":observer",
    ],
)

cc_library(
    name = "weather-station",
    srcs = ["weather-station.cc"],
    hdrs = ["weather-station.h"],
    deps = [
        ":subject",
        ":observer",
    ],
)

cc_library(
    name = "observer-devices",
    srcs = ["observer-devices.cc"],
    hdrs = ["observer-devices.h"],
    deps = [
        ":observer",
    ],
)

cc_library(
    name = "subject",
    hdrs = ["subject.h"],
)

cc_library(
    name = "observer",
    hdrs = ["observer.h"],
)