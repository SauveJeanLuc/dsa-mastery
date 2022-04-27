/*
    Fundamental Data Types

    | Data Type  |     Meaning   |  Size in Bytes |

    |  short int | Short Integer |     2 bytes    |

    |    int     |    Integer    |     4 bytes    |

    |   float    | Floating-Point|     4 bytes    |

    |   double   | Double F-Point|     8 bytes    |

    |    char    |    Character  |     1 byte     |

    |  wchar_t   | Wide Character|     2 bytes    |

    |    bool    |    Boolean    |     1 byte     |

    |    void    |     Empty     |     0 byte     |


    Remember: Bytes = 8 Bits.
    A bit can only hold 0 or 1.

    Type Modifiers

    int, double, char can be modified by signed, unsigned, short, long.

    E.g:
    long double [12 bytes] = used to store large floating points

    //TODO: Learn well 1's complement and 2's complement to Explain Why 2,147,483,647 is the max int value
    //Resource: https://www.quora.com/Why-is-2-147-483-647-the-max-int-value

*/

#include<iostream>

int main(){

    int age = 13;

    int salary = 85000;

    float area = 64.74;

    double volume = 134.64534;

    double distance = 45E12;

    char test = 'h';

    wchar_t test = L'ם'  // storing Hebrew character;

    bool cond = false;

    long long int = 13413412342134134123421341341234213413412342;

}