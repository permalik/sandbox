const std = @import("std");

// TODO: static array with inferred length
// TODO: dynamic array
// TODO: multidimensional array

fn static_array() void {
    const arr: [10]u32 = [10]u32{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const len: u32 = arr.len;

    for (arr, 0..) |i, j| {
        if (j == (len - 1)) {
            std.debug.print("{x}\n", .{i});
        } else {
            std.debug.print("{x} ", .{i});
        }
    }
}

pub fn main() !void {
    std.debug.print("static array:\n", .{});
    static_array();
}

test "simple test" {
    var list = std.ArrayList(i32).init(std.testing.allocator);
    defer list.deinit(); // try commenting this out and see if zig detects the memory leak!
    try list.append(42);
    try std.testing.expectEqual(@as(i32, 42), list.pop());
}
