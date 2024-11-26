int calculate(int a, char c, int b) {
    if (c == '+') {
        return a + b;
    }
    if (c == '-') {
        return a - b;
    }
    if (c == '*') {
        return a * b;
    }
    if (c == '/') {
        return a / b;
    }
    if (c == '%') {
        return a % b;
    }
}
