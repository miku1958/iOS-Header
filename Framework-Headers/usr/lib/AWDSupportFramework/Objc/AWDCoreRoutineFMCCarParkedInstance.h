//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _horizontalAccuracy;
    int _locationType;
    NSString *_parkingId;
    int _qualityIndicator;
    int _triggerTypes;
    BOOL _userAssistanceRequired;
    struct {
        unsigned int timestamp:1;
        unsigned int horizontalAccuracy:1;
        unsigned int locationType:1;
        unsigned int qualityIndicator:1;
        unsigned int triggerTypes:1;
        unsigned int userAssistanceRequired:1;
    } _has;
}

@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasLocationType;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (nonatomic) BOOL hasQualityIndicator;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) BOOL hasUserAssistanceRequired;
@property (nonatomic) int horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property (nonatomic) int locationType; // @synthesize locationType=_locationType;
@property (strong, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property (nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int triggerTypes; // @synthesize triggerTypes=_triggerTypes;
@property (nonatomic) BOOL userAssistanceRequired; // @synthesize userAssistanceRequired=_userAssistanceRequired;

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

