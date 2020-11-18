//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct LineSegment<double, 2> {
    Matrix_2bdd42a3 _origin;
    Matrix_2bdd42a3 _direction;
};

struct Matrix<double, 2, 1> {
    double _e[2];
};

struct NSDictionary {
    Class _field1;
};

struct PolylineCoordinate {
    unsigned int index;
    float offset;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int index;
    float offset;
} CDStruct_3f2a7a20;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    long long context;
    double distance;
    BOOL usePrimaryName;
    BOOL useSecondaryName;
    BOOL useDistanceForSecondary;
    BOOL useContinueForSecondary;
    int numPrimarySigns;
    int numSecondarySigns;
} CDStruct_61a83fd4;

typedef struct {
    int _field1;
    int _field2;
    CDStruct_2c43369c _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    int _field14;
    double _field15;
    int _field16;
    CDStruct_2c43369c _field17;
    double _field18;
    int _field19;
    unsigned int _field20;
    int _field21;
    int _field22;
} CDStruct_0e8fe709;

typedef struct {
    struct {
        id _field1;
        char *_field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned int _field7;
        unsigned long long _field8;
        BOOL _field9;
        unsigned long long _field10;
        float _field11;
        unsigned long long _field12;
        id _field13;
        int _field14;
    } _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    union {
        struct {
            CDStruct_b2fbf00d _field1;
            CDStruct_b2fbf00d _field2;
        } _field1;
        struct {
            float _field1;
            float _field2;
            float _field3;
            float _field4;
        } _field2;
    } _field9;
    struct *_field10;
    struct {
        unsigned short _field1[2];
        unsigned short _field2[2];
    } _field11;
    unsigned char _field12;
    BOOL _field13;
    unsigned char _field14;
    BOOL _field15;
    BOOL _field16;
    unsigned char _field17;
    BOOL _field18;
    unsigned char _field19;
    struct _NSRange _field20;
    BOOL _field21;
    unsigned int _field22;
} CDStruct_c707fdd0;

// Template types
typedef struct LineSegment<double, 2> {
    Matrix_2bdd42a3 _origin;
    Matrix_2bdd42a3 _direction;
} LineSegment_ede69d4d;

typedef struct Matrix<double, 2, 1> {
    double _e[2];
} Matrix_2bdd42a3;

