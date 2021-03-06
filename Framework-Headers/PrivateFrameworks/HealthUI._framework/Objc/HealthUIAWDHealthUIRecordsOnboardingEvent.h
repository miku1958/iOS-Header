//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSString;

@interface HealthUIAWDHealthUIRecordsOnboardingEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_gatewayURL;
    int _type;
    CDStruct_1769069f _has;
}

@property (strong, nonatomic) NSString *gatewayURL; // @synthesize gatewayURL=_gatewayURL;
@property (readonly, nonatomic) BOOL hasGatewayURL;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

