//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _horizontalAccuracy;
    int _horizontalDistance;
    NSString *_parkingId;
    struct {
        unsigned int timestamp:1;
        unsigned int horizontalAccuracy:1;
        unsigned int horizontalDistance:1;
    } _has;
}

@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasHorizontalDistance;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property (nonatomic) int horizontalDistance; // @synthesize horizontalDistance=_horizontalDistance;
@property (strong, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

