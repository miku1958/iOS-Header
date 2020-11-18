//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCViewedInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_parkingId;
    int _uiPlacement;
    CDStruct_a6119c26 _has;
}

@property (readonly, nonatomic) BOOL hasParkingId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUiPlacement;
@property (strong, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int uiPlacement; // @synthesize uiPlacement=_uiPlacement;

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

