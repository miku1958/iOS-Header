//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitMessageLocation : PBCodable <NSCopying>
{
    double _accuracy;
    double _latitude;
    double _longitude;
    unsigned long long _timestamp;
    unsigned int _numOfReachableBTLEAcc;
    unsigned int _numOfReachableIPAcc;
    struct {
        unsigned int accuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int timestamp:1;
        unsigned int numOfReachableBTLEAcc:1;
        unsigned int numOfReachableIPAcc:1;
    } _has;
}

@property (nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasNumOfReachableBTLEAcc;
@property (nonatomic) BOOL hasNumOfReachableIPAcc;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (nonatomic) unsigned int numOfReachableBTLEAcc; // @synthesize numOfReachableBTLEAcc=_numOfReachableBTLEAcc;
@property (nonatomic) unsigned int numOfReachableIPAcc; // @synthesize numOfReachableIPAcc=_numOfReachableIPAcc;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

