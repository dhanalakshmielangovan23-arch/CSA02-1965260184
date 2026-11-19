char grade(int m) {
    if (m<0 || m>100) return '?';
    switch (m/10) {
        case 10: case 9: return 'S';
        case 8: return 'A';
        case 7: return 'B';
        case 6: return 'C';
        case 5: return 'D';
        default: return 'F';
    }
}
