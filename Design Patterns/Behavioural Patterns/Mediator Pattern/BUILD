cc_binary(
    name = "main",
    srcs = [ "main.cc" ],
    deps = [
        ":air-traffic-control-tower",
        ":commercial-airplane",
        ":airplane",
    ],
)

cc_library(
    name = "air-traffic-control-tower",
    hdrs = [ "air-traffic-control-tower.h" ],
    srcs = [ "air-traffic-control-tower.cc" ],
    deps = [ ":airplane" ],
)

cc_library(
    name = "commercial-airplane",
    hdrs = [ "commercial-airplane.h" ],
    srcs = [ "commercial-airplane.cc" ],
    deps = [
        ":airplane",
        ":air-traffic-control-tower",
    ],
)

cc_library(
    name = "airplane",
    hdrs = [ "airplane.h" ],
)