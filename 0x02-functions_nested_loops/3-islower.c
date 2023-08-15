include#

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1; // c is lowercase
    }
    return 0; // c is not lowercase
}
