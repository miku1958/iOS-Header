//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLAssertionInternal {
    id _field1;
    struct CLConnectionClient *_field2;
};

struct CLConnectionClient;

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct ostream;

struct value_ostream {
    BOOL _field1;
    struct ostream *_field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    int padding1;
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double padding2;
    double padding3;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
    int rawReferenceFrame;
} CDStruct_05ee51d2;

typedef struct {
    char identifier[512];
    char onBehalfOfIdentifier[512];
    int type;
    BOOL notifyOnEntry;
    BOOL notifyOnExit;
    BOOL conservativeEntry;
    union {
        struct {
            char proximityUUID[512];
            unsigned short major;
            unsigned short minor;
            int definitionMask;
            BOOL notifyEntryStateOnDisplay;
        } beaconAttributes;
        struct {
            CDStruct_2c43369c center;
            double radius;
            double desiredAccuracy;
            int referenceFrame;
        } circularAttributes;
    } ;
} CDStruct_3afce72c;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

